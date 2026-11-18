#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T1, typename T2, typename T3> class CallableFunctionNode_3; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CallableFunctionNode_3___c__DisplayClass2_0_TypeDefinitionIndex = 30108;

	template <typename T1, typename T2, typename T3>
	class CallableFunctionNode_3___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::CallableFunctionNode_3<T1, T2, T3>* __4__this; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p1; // 0x0
		::FlowCanvas::ValueInput_1<T3>* p2; // 0x0
	};
}
