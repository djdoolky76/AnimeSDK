#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckEventValue_1_TypeDefinitionIndex = 30763;

	template <typename T>
	class CheckEventValue_1
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0x0
		::NodeCanvas::Framework::BBParameter_1<T>* value; // 0x0
	};
}
