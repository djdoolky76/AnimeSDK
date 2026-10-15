#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_DictionaryEnumerator_TypeDefinitionIndex = 35859;

	template <typename T1, typename T2>
	class MapField_2_DictionaryEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>* enumerator; // 0x0
	};
}
