#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableDictionary_2_Enumerator_TypeDefinitionIndex = 6623;

	template <typename T1, typename T2>
	struct alignas(8) ImmutableDictionary_2_Enumerator
	{
		::System::Object* _builder; // 0x0
		::System::Object* _mapEnumerator; // 0x0
		::System::Object* _bucketEnumerator; // 0x0
		::System::Int32 _enumeratingBuilderVersion; // 0x0
	};
}
