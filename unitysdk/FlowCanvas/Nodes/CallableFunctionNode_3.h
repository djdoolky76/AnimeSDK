#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNodeBase.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_3_TypeDefinitionIndex = 30107;

	template <typename T1, typename T2, typename T3>
	class CallableFunctionNode_3 : public ::FlowCanvas::Nodes::CallableFunctionNodeBase
	{
	public:
		T1 result; // 0x0
	};
}
