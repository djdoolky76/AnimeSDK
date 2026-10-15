#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int DictionaryEnumerator_2_TypeDefinitionIndex = 6588;

	template <typename T1, typename T2>
	class DictionaryEnumerator_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>* _inner; // 0x0
	};
}
