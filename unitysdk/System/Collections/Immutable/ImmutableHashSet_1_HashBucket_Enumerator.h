#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System::Collections::Immutable
{
	template <typename T>
	struct alignas(8) ImmutableHashSet_1_HashBucket_Enumerator
	{
		::System::Object* _bucket; // 0x0
		::System::Boolean _disposed; // 0x0
		::System::Object* _currentPosition; // 0x0
		::System::Object* _additionalEnumerator; // 0x0
	};
}
