#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define AKAAONCKJJP_IFPBPLNKGJP_JKDGIFKPAKA_OFFSET UNITYSDK_OFFSET(0x1820AA80)
#define AKAAONCKJJP_IFPBPLNKGJP_MPKLIOPGNAD_OFFSET UNITYSDK_OFFSET(0x1820AA70)
#define AKAAONCKJJP_IFPBPLNKGJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1820AA60)

inline static constexpr unsigned int AKAAONCKJJP_IFPBPLNKGJP_TypeDefinitionIndex = 42188;

class AKAAONCKJJP_IFPBPLNKGJP : public ::System::Object
{
public:
	::System::Action* IFKOKLCPMNF; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAAONCKJJP_IFPBPLNKGJP__CTOR_OFFSET))(this);
	}

	::System::Void MPKLIOPGNAD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_IFPBPLNKGJP_MPKLIOPGNAD_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void JKDGIFKPAKA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + AKAAONCKJJP_IFPBPLNKGJP_JKDGIFKPAKA_OFFSET))(this, PIIPCLCCOIG);
	}
};
