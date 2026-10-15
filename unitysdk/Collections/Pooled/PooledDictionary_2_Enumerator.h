#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledDictionary_2_Enumerator_TypeDefinitionIndex = 5104;

	template <typename T1, typename T2>
	struct alignas(8) PooledDictionary_2_Enumerator
	{
		::Collections::Pooled::PooledDictionary_2<T1, T2>* _dictionary; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _index; // 0x0
		::System::Collections::Generic::KeyValuePair_2<T1, T2> _current; // 0x0
		::System::Int32 _getEnumeratorRetType; // 0x0
		// static const ::System::Object DictEntry; // 0x0
		// static const ::System::Object KeyValuePair; // 0x0
	};
}
