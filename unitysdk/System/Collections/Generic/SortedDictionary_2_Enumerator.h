#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

namespace System::Collections::Generic
{
	inline static constexpr unsigned int SortedDictionary_2_Enumerator_TypeDefinitionIndex = 3958;

	template <typename T1, typename T2>
	struct alignas(8) SortedDictionary_2_Enumerator
	{
		// static const ::System::Int32 KeyValuePair = 0x1; // 0x0
		// static const ::System::Int32 DictEntry = 0x2; // 0x0
		::System::Object* _treeEnum; // 0x0
		::System::Int32 _getEnumeratorRetType; // 0x0
	};
}
