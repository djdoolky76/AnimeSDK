#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_CCOLHLPOCKN_CJOKOPEOLHA_OFFSET UNITYSDK_OFFSET(0x143B1520)
#define AKAAONCKJJP_CCOLHLPOCKN_OMLFCHIFNEF_OFFSET UNITYSDK_OFFSET(0x143B14B0)
#define AKAAONCKJJP_CCOLHLPOCKN__CTOR_OFFSET UNITYSDK_OFFSET(0x143B14A0)

inline static constexpr unsigned int AKAAONCKJJP_CCOLHLPOCKN_TypeDefinitionIndex = 42200;

class AKAAONCKJJP_CCOLHLPOCKN : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_CCOLHLPOCKN__CTOR_OFFSET))(this);
	}

	::System::Void OMLFCHIFNEF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_CCOLHLPOCKN_OMLFCHIFNEF_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void CJOKOPEOLHA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_CCOLHLPOCKN_CJOKOPEOLHA_OFFSET))(this, PIIPCLCCOIG);
	}
};
