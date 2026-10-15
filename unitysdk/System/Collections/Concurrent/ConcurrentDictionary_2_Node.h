#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Collections::Concurrent
{
	template <typename T1, typename T2>
	class ConcurrentDictionary_2_Node : public ::System::Object
	{
	public:
		T1 _key; // 0x0
		T2 _value; // 0x0
		::System::Object* _next; // 0x0
		::System::Int32 _hashcode; // 0x0
	};
}
