#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Concurrent
{
	inline static constexpr unsigned int ConcurrentDictionary_2_DictionaryEnumerator_TypeDefinitionIndex = 1517;

	template <typename T1, typename T2>
	class ConcurrentDictionary_2_DictionaryEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>* _enumerator; // 0x0
	};
}
