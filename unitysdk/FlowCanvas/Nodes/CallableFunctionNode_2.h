#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNodeBase.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_2_TypeDefinitionIndex = 30165;

	template <typename T1, typename T2>
	class CallableFunctionNode_2 : public ::FlowCanvas::Nodes::CallableFunctionNodeBase
	{
	public:
		T1 result; // 0x0
	};
}
