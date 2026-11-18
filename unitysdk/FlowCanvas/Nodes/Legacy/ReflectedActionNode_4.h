#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"

namespace ParadoxNotion { template <typename T1, typename T2, typename T3, typename T4> class ActionCall_4; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode_4_TypeDefinitionIndex = 29265;

	template <typename T1, typename T2, typename T3, typename T4>
	class ReflectedActionNode_4 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::ActionCall_4<T1, T2, T3, T4>* call; // 0x0
		T4 instance; // 0x0
	};
}
