#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GKGBECDHLKJ_DAOHNPLONDM_OFFSET UNITYSDK_OFFSET(0x125D5590)
#define GKGBECDHLKJ_NGJLCDGDLGF_OFFSET UNITYSDK_OFFSET(0x125D55A0)
#define GKGBECDHLKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x125D5580)

inline static constexpr unsigned int GKGBECDHLKJ_TypeDefinitionIndex = 76979;

class GKGBECDHLKJ : public ::System::Object
{
public:
	::System::UInt64 _CEGCGNINHAE_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt64 JGFGBMHHGFA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GKGBECDHLKJ__CTOR_OFFSET))(this, JGFGBMHHGFA);
	}

	::System::Void DAOHNPLONDM(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GKGBECDHLKJ_DAOHNPLONDM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt64 NGJLCDGDLGF()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGBECDHLKJ_NGJLCDGDLGF_OFFSET))(this);
	}
};
