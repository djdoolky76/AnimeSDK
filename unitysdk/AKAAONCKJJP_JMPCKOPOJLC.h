#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_JMPCKOPOJLC_DCAJMCEMFLG_OFFSET UNITYSDK_OFFSET(0x144E4310)
#define AKAAONCKJJP_JMPCKOPOJLC_GAOIECGPMHF_OFFSET UNITYSDK_OFFSET(0x144E4320)
#define AKAAONCKJJP_JMPCKOPOJLC__CTOR_OFFSET UNITYSDK_OFFSET(0x144E4300)

inline static constexpr unsigned int AKAAONCKJJP_JMPCKOPOJLC_TypeDefinitionIndex = 42178;

class AKAAONCKJJP_JMPCKOPOJLC : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_JMPCKOPOJLC__CTOR_OFFSET))(this);
	}

	::System::Void DCAJMCEMFLG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_JMPCKOPOJLC_DCAJMCEMFLG_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void GAOIECGPMHF(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_JMPCKOPOJLC_GAOIECGPMHF_OFFSET))(this, PIIPCLCCOIG);
	}
};
