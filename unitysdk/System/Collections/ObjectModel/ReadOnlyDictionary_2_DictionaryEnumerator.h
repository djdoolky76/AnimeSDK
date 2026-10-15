#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::ObjectModel
{
	template <typename T1, typename T2>
	struct alignas(8) ReadOnlyDictionary_2_DictionaryEnumerator
	{
		::System::Collections::Generic::IDictionary_2<T1, T2>* m_dictionary; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair*>* m_enumerator; // 0x0
	};
}
