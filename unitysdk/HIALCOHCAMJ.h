#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define HIALCOHCAMJ_DOBAEBHFNBG_OFFSET UNITYSDK_OFFSET(0x10112020)
#define HIALCOHCAMJ_PCDDLEENOFP_OFFSET UNITYSDK_OFFSET(0x10112030)
#define HIALCOHCAMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10112010)

inline static constexpr unsigned int HIALCOHCAMJ_TypeDefinitionIndex = 51094;

class HIALCOHCAMJ : public ::System::Object
{
public:
	::System::Boolean _CCMCOGHPDFL_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIALCOHCAMJ__CTOR_OFFSET))(this);
	}

	::System::Void DOBAEBHFNBG(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HIALCOHCAMJ_DOBAEBHFNBG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean PCDDLEENOFP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HIALCOHCAMJ_PCDDLEENOFP_OFFSET))(this);
	}
};
