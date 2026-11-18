#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"

namespace ParadoxNotion { template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> class FunctionCall_6; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_6_TypeDefinitionIndex = 30340;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
	class ReflectedFunctionNode_6 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::FunctionCall_6<T1, T2, T3, T4, T5, T6>* call; // 0x0
		T6 returnValue; // 0x0
		T6 instance; // 0x0
	};
}
