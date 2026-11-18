#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/BehaviourTrees/BTDecorator.h"
#include "unitysdk/NodeCanvas/Framework/Status.h"

namespace NodeCanvas::Framework { class IBlackboard; }
namespace UnityEngine { class Component; }

#define NODECANVAS_BEHAVIOURTREES_INVERTER_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1E9632E0)
#define NODECANVAS_BEHAVIOURTREES_INVERTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E963440)

namespace NodeCanvas::BehaviourTrees
{
	inline static constexpr unsigned int Inverter_TypeDefinitionIndex = 29182;

	class Inverter : public ::NodeCanvas::BehaviourTrees::BTDecorator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_INVERTER__CTOR_OFFSET))(this);
		}

		::NodeCanvas::Framework::Status OnExecute(::UnityEngine::Component* agent, ::NodeCanvas::Framework::IBlackboard* blackboard)
		{
			return ((::NodeCanvas::Framework::Status(*)(::PVOID, ::UnityEngine::Component*, ::NodeCanvas::Framework::IBlackboard*))((::PBYTE)hIl2Cpp + NODECANVAS_BEHAVIOURTREES_INVERTER_ONEXECUTE_OFFSET))(this, agent, blackboard);
		}
	};
}
