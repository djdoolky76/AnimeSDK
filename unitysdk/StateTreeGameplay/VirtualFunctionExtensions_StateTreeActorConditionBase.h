#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeGameplay/StateTreeActorConditionBase.h"

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORCONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1D9E4C30)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_StateTreeActorConditionBase_TypeDefinitionIndex = 77947;

	class VirtualFunctionExtensions_StateTreeActorConditionBase : public ::System::Object
	{
	public:
		static ::System::Boolean TestCondition(::StateTreeGameplay::StateTreeActorConditionBase& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::StateTreeGameplay::StateTreeActorConditionBase&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_STATETREEACTORCONDITIONBASE_TESTCONDITION_OFFSET))(self, context);
		}
	};
}
