#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { class KeyValuePair; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int MapField_2_DictionaryEnumerator_TypeDefinitionIndex = 5580;

	template <typename T1, typename T2>
	class MapField_2_DictionaryEnumerator : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair*>* enumerator; // 0x0
	};
}
