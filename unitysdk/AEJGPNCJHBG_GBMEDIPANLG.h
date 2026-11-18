#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNIHGNDLMIN;

#define AEJGPNCJHBG_GBMEDIPANLG_LJEFGBDMPII_OFFSET UNITYSDK_OFFSET(0x17DCF4B0)
#define AEJGPNCJHBG_GBMEDIPANLG__CTOR_OFFSET UNITYSDK_OFFSET(0x17DCC910)

inline static constexpr unsigned int AEJGPNCJHBG_GBMEDIPANLG_TypeDefinitionIndex = 75487;

class AEJGPNCJHBG_GBMEDIPANLG : public ::System::Object
{
public:
	::System::Int32 CJPLACFCFBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_GBMEDIPANLG__CTOR_OFFSET))(this);
	}

	::System::Boolean LJEFGBDMPII(::PNIHGNDLMIN* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNIHGNDLMIN*))((::PBYTE)hIl2Cpp + AEJGPNCJHBG_GBMEDIPANLG_LJEFGBDMPII_OFFSET))(this, LJBPECKCCEA);
	}
};
