#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas::Nodes::Legacy { template <typename T> class ReflectedActionNode_1; }

namespace FlowCanvas::Nodes::Legacy
{
	inline static constexpr unsigned int ReflectedActionNode_1___c__DisplayClass3_0_TypeDefinitionIndex = 30551;

	template <typename T>
	class ReflectedActionNode_1___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::Legacy::ReflectedActionNode_1<T>* __4__this; // 0x0
		::FlowCanvas::ValueInput_1<T>* p1; // 0x0
		::FlowCanvas::FlowOutput* o; // 0x0
	};
}
