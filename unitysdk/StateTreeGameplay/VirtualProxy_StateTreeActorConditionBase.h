#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/VirtualProxy_StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"

#define STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORCONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x1C6BEDB0)
#define STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORCONDITIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6BEE50)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualProxy_StateTreeActorConditionBase_TypeDefinitionIndex = 74872;

	class VirtualProxy_StateTreeActorConditionBase : public ::StateTreeCore::VirtualProxy_StateTreeConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORCONDITIONBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean TestCondition(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALPROXY_STATETREEACTORCONDITIONBASE_TESTCONDITION_OFFSET))(this, self, context);
		}
	};
}
