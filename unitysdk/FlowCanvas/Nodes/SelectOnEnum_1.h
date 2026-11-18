#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"

namespace ParadoxNotion::Serialization { class SerializedTypeInfo; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SelectOnEnum_1_TypeDefinitionIndex = 29460;

	template <typename T>
	class SelectOnEnum_1 : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::ParadoxNotion::Serialization::SerializedTypeInfo* _type; // 0x0
	};
}
