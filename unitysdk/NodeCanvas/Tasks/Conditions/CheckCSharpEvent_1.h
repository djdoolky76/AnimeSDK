#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Framework/ConditionTask.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion::Serialization { class SerializedEventInfo; }
namespace System { class Delegate; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckCSharpEvent_1_TypeDefinitionIndex = 29357;

	template <typename T>
	class CheckCSharpEvent_1 : public ::NodeCanvas::Framework::ConditionTask
	{
	public:
		::ParadoxNotion::Serialization::SerializedEventInfo* eventInfo; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* saveAs; // 0x0
		::System::Delegate* handler; // 0x0
	};
}
