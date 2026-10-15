#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System::Collections::Immutable
{
	template <typename T>
	struct alignas(8) ImmutableHashSet_1_HashBucket
	{
		T _firstValue; // 0x0
		::System::Object* _additionalElements; // 0x0
	};
}
