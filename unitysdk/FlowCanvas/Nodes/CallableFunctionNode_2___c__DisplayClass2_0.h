#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T1, typename T2> class CallableFunctionNode_2; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_2___c__DisplayClass2_0_TypeDefinitionIndex = 30166;

	template <typename T1, typename T2>
	class CallableFunctionNode_2___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::CallableFunctionNode_2<T1, T2>* __4__this; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p1; // 0x0
	};
}
