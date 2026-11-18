#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SendMessage_1_TypeDefinitionIndex = 30469;

	template <typename T>
	class SendMessage_1
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* methodName; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* argument; // 0x0
	};
}
