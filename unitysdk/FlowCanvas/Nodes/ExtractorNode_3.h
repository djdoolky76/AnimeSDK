#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/ExtractorNode.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int ExtractorNode_3_TypeDefinitionIndex = 30355;

	template <typename T1, typename T2, typename T3>
	class ExtractorNode_3 : public ::FlowCanvas::Nodes::ExtractorNode
	{
	public:
		T1 a; // 0x0
		T2 b; // 0x0
	};
}
