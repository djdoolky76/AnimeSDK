#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }

namespace System::Collections::Immutable
{
	template <typename T1, typename T2>
	struct alignas(8) ImmutableDictionary_2_HashBucket
	{
		::System::Collections::Generic::KeyValuePair* _firstValue; // 0x0
		::System::Object* _additionalElements; // 0x0
	};
}
