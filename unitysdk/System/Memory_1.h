#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System
{
	inline static constexpr unsigned int Memory_1_TypeDefinitionIndex = 4967;

	template <typename T>
	struct alignas(8) Memory_1
	{
		::System::Object* _object; // 0x0
		::System::Int32 _index; // 0x0
		::System::Int32 _length; // 0x0
	};
}
