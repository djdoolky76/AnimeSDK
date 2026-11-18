#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNodeBase.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_4_TypeDefinitionIndex = 29615;

	template <typename T1, typename T2, typename T3, typename T4>
	class CallableFunctionNode_4 : public ::FlowCanvas::Nodes::CallableFunctionNodeBase
	{
	public:
		T1 result; // 0x0
	};
}
