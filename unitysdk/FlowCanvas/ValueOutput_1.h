#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/ValueOutput.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }

namespace FlowCanvas
{
	inline static constexpr unsigned int ValueOutput_1_TypeDefinitionIndex = 30556;

	template <typename T>
	class ValueOutput_1 : public ::FlowCanvas::ValueOutput
	{
	public:
		::FlowCanvas::ValueHandler_1<T>* _getter_k__BackingField; // 0x0
	};
}
