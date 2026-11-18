#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CustomObjectWrapper.h"

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomObjectWrapper_1_TypeDefinitionIndex = 29931;

	template <typename T>
	class CustomObjectWrapper_1 : public ::FlowCanvas::Nodes::CustomObjectWrapper
	{
	public:
		T _target; // 0x0
	};
}
