#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

namespace ZLinq::Linq
{
	template <typename T>
	struct alignas(8) FromLinkedList_1
	{
		::System::Collections::Generic::LinkedList_1<T>* _source_P; // 0x0
		::System::Boolean isInit; // 0x0
		::System::Object* enumerator; // 0x0
	};
}
