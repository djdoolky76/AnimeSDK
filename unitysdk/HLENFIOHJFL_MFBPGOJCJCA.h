#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HLENFIOHJFL_MFBPGOJCJCA_BAIEANCCDHP_OFFSET UNITYSDK_OFFSET(0x15BDE5F0)
#define HLENFIOHJFL_MFBPGOJCJCA_GDFFPMIJCEP_OFFSET UNITYSDK_OFFSET(0x15BDE5E0)
#define HLENFIOHJFL_MFBPGOJCJCA__CTOR_OFFSET UNITYSDK_OFFSET(0x15BDE5D0)

inline static constexpr unsigned int HLENFIOHJFL_MFBPGOJCJCA_TypeDefinitionIndex = 54206;

class HLENFIOHJFL_MFBPGOJCJCA : public ::System::Object
{
public:
	::System::Action* FGHOIDFGJHB; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18
	::System::UInt32 FMJPOIFLFOJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_MFBPGOJCJCA__CTOR_OFFSET))(this);
	}

	::System::Void GDFFPMIJCEP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_MFBPGOJCJCA_GDFFPMIJCEP_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void BAIEANCCDHP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_MFBPGOJCJCA_BAIEANCCDHP_OFFSET))(this, BHDNBGLCNOM);
	}
};
