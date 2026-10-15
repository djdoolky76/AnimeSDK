#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace InControl
{
	template <typename T>
	class ThreadSafeQueue_1 : public ::System::Object
	{
	public:
		::System::Object* sync; // 0x0
		::System::Collections::Generic::Queue_1<T>* data; // 0x0
	};
}
