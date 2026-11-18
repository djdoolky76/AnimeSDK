#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SendEvent_1_TypeDefinitionIndex = 29755;

	template <typename T>
	class SendEvent_1
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* eventValue; // 0x0
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* delay; // 0x0
		::System::Boolean sendGlobal; // 0x0
	};
}
