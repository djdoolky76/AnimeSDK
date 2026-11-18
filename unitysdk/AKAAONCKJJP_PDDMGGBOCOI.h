#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_PDDMGGBOCOI_DJLPGBCIIPI_OFFSET UNITYSDK_OFFSET(0x144E4400)
#define AKAAONCKJJP_PDDMGGBOCOI_DNFAMKCKHFB_OFFSET UNITYSDK_OFFSET(0x144E43F0)
#define AKAAONCKJJP_PDDMGGBOCOI__CTOR_OFFSET UNITYSDK_OFFSET(0x144E43E0)

inline static constexpr unsigned int AKAAONCKJJP_PDDMGGBOCOI_TypeDefinitionIndex = 42181;

class AKAAONCKJJP_PDDMGGBOCOI : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_PDDMGGBOCOI__CTOR_OFFSET))(this);
	}

	::System::Void DNFAMKCKHFB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_PDDMGGBOCOI_DNFAMKCKHFB_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void DJLPGBCIIPI(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_PDDMGGBOCOI_DJLPGBCIIPI_OFFSET))(this, PIIPCLCCOIG);
	}
};
