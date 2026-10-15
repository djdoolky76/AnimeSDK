#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace Collections::Pooled
{
	template <typename T>
	struct alignas(8) PooledList_1_Enumerator
	{
		::System::Object* _processor; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _version; // 0x0
		::System::Boolean _cachedIsClass; // 0x0
		T _current; // 0x0
	};
}
