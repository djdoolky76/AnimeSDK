#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"

namespace ParadoxNotion { template <typename T1, typename T2, typename T3> class FunctionCall_3; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_3_TypeDefinitionIndex = 29752;

	template <typename T1, typename T2, typename T3>
	class ReflectedFunctionNode_3 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::FunctionCall_3<T1, T2, T3>* call; // 0x0
		T3 returnValue; // 0x0
		T3 instance; // 0x0
	};
}
