#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/VirtualProxy_StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/UnrealTypes/FReadOnlyStructView.h"

#define NPCCROWD_ABILITY_VIRTUALPROXY_STATETREECROWDCONDITIONBASE_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0xB2D1670)
#define NPCCROWD_ABILITY_VIRTUALPROXY_STATETREECROWDCONDITIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D1660)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int VirtualProxy_StateTreeCrowdConditionBase_TypeDefinitionIndex = 64041;

	class VirtualProxy_StateTreeCrowdConditionBase : public ::StateTreeCore::VirtualProxy_StateTreeConditionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_STATETREECROWDCONDITIONBASE__CTOR_OFFSET))(this);
		}

		::System::Boolean TestCondition(::UnrealTypes::FReadOnlyStructView& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnrealTypes::FReadOnlyStructView&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_VIRTUALPROXY_STATETREECROWDCONDITIONBASE_TESTCONDITION_OFFSET))(this, self, context);
		}
	};
}
