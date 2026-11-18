#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes { template <typename T1, typename T2, typename T3> class PureFunctionNode_3; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int PureFunctionNode_3___c__DisplayClass1_0_TypeDefinitionIndex = 30301;

	template <typename T1, typename T2, typename T3>
	class PureFunctionNode_3___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::PureFunctionNode_3<T1, T2, T3>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T2>* p1; // 0x0
		::FlowCanvas::ValueInput_1<T3>* p2; // 0x0
	};
}
