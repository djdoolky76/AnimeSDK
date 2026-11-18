#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"

namespace ParadoxNotion { template <typename T1, typename T2, typename T3, typename T4> class FunctionCall_4; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_4_TypeDefinitionIndex = 30764;

	template <typename T1, typename T2, typename T3, typename T4>
	class ReflectedFunctionNode_4 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::FunctionCall_4<T1, T2, T3, T4>* call; // 0x0
		T4 returnValue; // 0x0
		T4 instance; // 0x0
	};
}
