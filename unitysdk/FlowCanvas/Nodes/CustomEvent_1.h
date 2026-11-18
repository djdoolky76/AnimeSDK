#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas { class FlowOutput; }
namespace NodeCanvas::Framework { class GraphOwner; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int CustomEvent_1_TypeDefinitionIndex = 30274;

	template <typename T>
	class CustomEvent_1
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0x0
		::FlowCanvas::FlowOutput* onReceived; // 0x0
		::NodeCanvas::Framework::GraphOwner* sender; // 0x0
		::NodeCanvas::Framework::GraphOwner* receiver; // 0x0
		T receivedValue; // 0x0
	};
}
