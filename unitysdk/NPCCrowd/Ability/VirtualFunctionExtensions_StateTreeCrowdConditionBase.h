#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NPCCrowd/Ability/StateTreeCrowdConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"

#define NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDCONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x11F9B1B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualFunctionExtensions_StateTreeCrowdConditionBase_TypeDefinitionIndex = 53050;

	class VirtualFunctionExtensions_StateTreeCrowdConditionBase : public ::System::Object
	{
	public:
		static ::System::Boolean TestCondition(::NPCCrowd::Ability::StateTreeCrowdConditionBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::StateTreeCrowdConditionBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALFUNCTIONEXTENSIONS_STATETREECROWDCONDITIONBASE_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
