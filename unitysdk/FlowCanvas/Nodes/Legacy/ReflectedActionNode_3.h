#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"

namespace ParadoxNotion { template <typename T1, typename T2, typename T3> class ActionCall_3; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode_3_TypeDefinitionIndex = 30271;

	template <typename T1, typename T2, typename T3>
	class ReflectedActionNode_3 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::ActionCall_3<T1, T2, T3>* call; // 0x0
		T3 instance; // 0x0
	};
}
