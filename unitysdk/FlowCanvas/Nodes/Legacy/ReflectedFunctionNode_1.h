#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/Legacy/ReflectedMethodNode.h"

namespace ParadoxNotion { template <typename T> class FunctionCall_1; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedFunctionNode_1_TypeDefinitionIndex = 29452;

	template <typename T>
	class ReflectedFunctionNode_1 : public ::FlowCanvas::Nodes::Legacy::ReflectedMethodNode
	{
	public:
		::ParadoxNotion::FunctionCall_1<T>* call; // 0x0
		T returnValue; // 0x0
	};
}
