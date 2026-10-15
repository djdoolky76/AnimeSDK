#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Collections::Concurrent
{
	template <typename T>
	class ConcurrentStack_1_Node : public ::System::Object
	{
	public:
		T _value; // 0x0
		::System::Object* _next; // 0x0
	};
}
