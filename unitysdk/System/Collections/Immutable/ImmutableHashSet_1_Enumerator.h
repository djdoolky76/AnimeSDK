#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System::Collections::Immutable
{
	template <typename T>
	struct alignas(8) ImmutableHashSet_1_Enumerator
	{
		::System::Object* _builder; // 0x0
		::System::Object* _mapEnumerator; // 0x0
		::System::Object* _bucketEnumerator; // 0x0
		::System::Int32 _enumeratingBuilderVersion; // 0x0
	};
}
