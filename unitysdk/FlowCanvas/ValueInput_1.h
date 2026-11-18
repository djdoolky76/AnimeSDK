#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/ValueInput.h"

namespace FlowCanvas { template <typename T> class ValueHandler_1; }
namespace System { template <typename T> class Action_1; }

namespace FlowCanvas
{
	inline static constexpr unsigned int ValueInput_1_TypeDefinitionIndex = 29751;

	template <typename T>
	class ValueInput_1 : public ::FlowCanvas::ValueInput
	{
	public:
		::FlowCanvas::ValueHandler_1<T>* getter; // 0x0
		::System::Action_1<T>* callback; // 0x0
		T _value; // 0x0
		T _defaultValue; // 0x0
	};
}
