#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFENKOGKFAN.h"

class KHLJFPECEGH;

#define LHEGPECLBKG_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x12A46690)
#define LHEGPECLBKG__CTOR_OFFSET UNITYSDK_OFFSET(0x12A46600)

inline static constexpr unsigned int LHEGPECLBKG_TypeDefinitionIndex = 59360;

class LHEGPECLBKG : public ::HFENKOGKFAN
{
public:
	::System::Void _ctor(::KHLJFPECEGH* PHGBOCIDLEI)
	{
		return ((::System::Void(*)(::PVOID, ::KHLJFPECEGH*))((::PBYTE)hIl2Cpp + LHEGPECLBKG__CTOR_OFFSET))(this, PHGBOCIDLEI);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHEGPECLBKG_PHOADBJGFBE_OFFSET))(this);
	}
};
