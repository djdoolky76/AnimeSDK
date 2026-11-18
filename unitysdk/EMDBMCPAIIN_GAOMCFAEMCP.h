#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define EMDBMCPAIIN_GAOMCFAEMCP_MNLGLBAJCFO_OFFSET UNITYSDK_OFFSET(0x10F44EF0)
#define EMDBMCPAIIN_GAOMCFAEMCP__CTOR_OFFSET UNITYSDK_OFFSET(0x10F44EE0)

inline static constexpr unsigned int EMDBMCPAIIN_GAOMCFAEMCP_TypeDefinitionIndex = 88336;

class EMDBMCPAIIN_GAOMCFAEMCP : public ::System::Object
{
public:
	::System::Action* DMPEOJCCCLO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMDBMCPAIIN_GAOMCFAEMCP__CTOR_OFFSET))(this);
	}

	::System::Void MNLGLBAJCFO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + EMDBMCPAIIN_GAOMCFAEMCP_MNLGLBAJCFO_OFFSET))(this, PIIPCLCCOIG);
	}
};
