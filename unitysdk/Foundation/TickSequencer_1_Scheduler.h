#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T> class TickFunction_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace Foundation
{
	inline static constexpr unsigned int TickSequencer_1_Scheduler_TypeDefinitionIndex = 8803;

	template <typename T>
	class TickSequencer_1_Scheduler : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Foundation::TickFunction_1<T>*>* _functionList; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* _headers; // 0x0
		::System::Collections::Generic::List_1<::System::Object*>* _nodes; // 0x0
		::System::Collections::Generic::Stack_1<::System::Int32>* _stack; // 0x0
	};
}
