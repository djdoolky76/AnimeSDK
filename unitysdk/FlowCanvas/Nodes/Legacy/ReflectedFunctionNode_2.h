#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"

namespace ParadoxNotion { template <typename T1, typename T2> class FunctionCall_2; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_2_TypeDefinitionIndex = 29377;

	template <typename T1, typename T2>
	class ReflectedFunctionNode_2 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::FunctionCall_2<T1, T2>* call; // 0x0
		T2 returnValue; // 0x0
		T2 instance; // 0x0
	};
}
