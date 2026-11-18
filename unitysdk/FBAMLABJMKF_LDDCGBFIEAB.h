#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;

#define FBAMLABJMKF_LDDCGBFIEAB_CIIEPGFMBNC_OFFSET UNITYSDK_OFFSET(0x17137BA0)
#define FBAMLABJMKF_LDDCGBFIEAB__CTOR_OFFSET UNITYSDK_OFFSET(0x17137B90)

inline static constexpr unsigned int FBAMLABJMKF_LDDCGBFIEAB_TypeDefinitionIndex = 78153;

class FBAMLABJMKF_LDDCGBFIEAB : public ::System::Object
{
public:
	::FBAMLABJMKF* KLHPEBKNIFB; // 0x10
	::System::Boolean GMCMMEOLENE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LDDCGBFIEAB__CTOR_OFFSET))(this);
	}

	::System::Void CIIEPGFMBNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBAMLABJMKF_LDDCGBFIEAB_CIIEPGFMBNC_OFFSET))(this);
	}
};
