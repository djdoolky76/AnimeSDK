#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableFunctionNodeBase.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_1_TypeDefinitionIndex = 30452;

	template <typename T>
	class CallableFunctionNode_1 : public ::FlowCanvas::Nodes::CallableFunctionNodeBase
	{
	public:
		T result; // 0x0
	};
}
