#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/EventNode.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int RouterEventNode_1_TypeDefinitionIndex = 29662;

	template <typename T>
	class RouterEventNode_1 : public ::FlowCanvas::Nodes::EventNode
	{
	public:
		::System::Object* targetMode; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* target; // 0x0
		::NodeCanvas::Framework::BBParameter_1<::System::Collections::Generic::List_1<T>*>* targets; // 0x0
	};
}
