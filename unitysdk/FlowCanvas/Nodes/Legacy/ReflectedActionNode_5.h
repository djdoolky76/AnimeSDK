#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"

namespace ParadoxNotion { template <typename T1, typename T2, typename T3, typename T4, typename T5> class ActionCall_5; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode_5_TypeDefinitionIndex = 30564;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class ReflectedActionNode_5 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::ActionCall_5<T1, T2, T3, T4, T5>* call; // 0x0
		T5 instance; // 0x0
	};
}
