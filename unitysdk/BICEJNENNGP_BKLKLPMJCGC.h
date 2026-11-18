#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IFMDDIOEJGI.h"

class KOIDMLPJGML;

#define BICEJNENNGP_BKLKLPMJCGC_EFCLMAGGMMF_OFFSET UNITYSDK_OFFSET(0x115EA6A0)
#define BICEJNENNGP_BKLKLPMJCGC__CTOR_OFFSET UNITYSDK_OFFSET(0x115EA690)

inline static constexpr unsigned int BICEJNENNGP_BKLKLPMJCGC_TypeDefinitionIndex = 40654;

class BICEJNENNGP_BKLKLPMJCGC : public ::System::Object
{
public:
	::System::Boolean DBFFIBIDJPO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BICEJNENNGP_BKLKLPMJCGC__CTOR_OFFSET))(this);
	}

	::KOIDMLPJGML* EFCLMAGGMMF(::IFMDDIOEJGI HMMMOCJAEOA)
	{
		return ((::KOIDMLPJGML*(*)(::PVOID, ::IFMDDIOEJGI))((::PBYTE)hIl2Cpp + BICEJNENNGP_BKLKLPMJCGC_EFCLMAGGMMF_OFFSET))(this, HMMMOCJAEOA);
	}
};
