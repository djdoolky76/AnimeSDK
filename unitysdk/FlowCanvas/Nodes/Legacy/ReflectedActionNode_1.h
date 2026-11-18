#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"

namespace ParadoxNotion { template <typename T> class ActionCall_1; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode_1_TypeDefinitionIndex = 30550;

	template <typename T>
	class ReflectedActionNode_1 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::ActionCall_1<T>* call; // 0x0
		T instance; // 0x0
	};
}
