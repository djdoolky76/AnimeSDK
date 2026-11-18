#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckEvent_1_TypeDefinitionIndex = 29832;

	template <typename T>
	class CheckEvent_1
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* saveEventValue; // 0x0
	};
}
