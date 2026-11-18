#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_PGIECOKDOEE_BKGNNKCNANK_OFFSET UNITYSDK_OFFSET(0x16D8BCE0)
#define AKAAONCKJJP_PGIECOKDOEE_MCMIHNLEBMA_OFFSET UNITYSDK_OFFSET(0x16D8BCF0)
#define AKAAONCKJJP_PGIECOKDOEE__CTOR_OFFSET UNITYSDK_OFFSET(0x16D8BCD0)

inline static constexpr unsigned int AKAAONCKJJP_PGIECOKDOEE_TypeDefinitionIndex = 42180;

class AKAAONCKJJP_PGIECOKDOEE : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_PGIECOKDOEE__CTOR_OFFSET))(this);
	}

	::System::Void BKGNNKCNANK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_PGIECOKDOEE_BKGNNKCNANK_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void MCMIHNLEBMA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_PGIECOKDOEE_MCMIHNLEBMA_OFFSET))(this, PIIPCLCCOIG);
	}
};
