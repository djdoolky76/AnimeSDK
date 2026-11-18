#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

class AAPCMKFLFDH_NGCMIKBMCKH;

#define AAPCMKFLFDH_NKADLNOHLLD_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x12CD0FF0)
#define AAPCMKFLFDH_NKADLNOHLLD__CTOR_OFFSET UNITYSDK_OFFSET(0x12CD0FE0)

inline static constexpr unsigned int AAPCMKFLFDH_NKADLNOHLLD_TypeDefinitionIndex = 70237;

class AAPCMKFLFDH_NKADLNOHLLD : public ::System::Object
{
public:
	::AAPCMKFLFDH_NGCMIKBMCKH* FGBNBFHOKAA; // 0x10
	::HOCDHMEPPEG ABMKEFPKPMD; // 0x18
	::HOCDHMEPPEG GPELAKKMLBG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPCMKFLFDH_NKADLNOHLLD__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::Boolean CAAFEGLOALC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAPCMKFLFDH_NKADLNOHLLD_LIDNPLMPHAL_OFFSET))(this, CAAFEGLOALC);
	}
};
