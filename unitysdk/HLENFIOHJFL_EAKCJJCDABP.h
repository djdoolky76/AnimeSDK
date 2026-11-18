#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define HLENFIOHJFL_EAKCJJCDABP_PPIHLMJIKPP_OFFSET UNITYSDK_OFFSET(0x15B673A0)
#define HLENFIOHJFL_EAKCJJCDABP__CTOR_OFFSET UNITYSDK_OFFSET(0x15B67390)

inline static constexpr unsigned int HLENFIOHJFL_EAKCJJCDABP_TypeDefinitionIndex = 54194;

class HLENFIOHJFL_EAKCJJCDABP : public ::System::Object
{
public:
	::System::Action* FGHOIDFGJHB; // 0x10
	::System::UInt32 FMJPOIFLFOJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLENFIOHJFL_EAKCJJCDABP__CTOR_OFFSET))(this);
	}

	::System::Void PPIHLMJIKPP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + HLENFIOHJFL_EAKCJJCDABP_PPIHLMJIKPP_OFFSET))(this, BHDNBGLCNOM);
	}
};
