#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System
{
	template <typename T>
	struct alignas(8) ReadOnlyMemory_1
	{
		::System::Object* _object; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _length; // 0x0
	};
}
