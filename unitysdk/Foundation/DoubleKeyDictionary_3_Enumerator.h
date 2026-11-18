#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Foundation
{
	inline static constexpr unsigned int DoubleKeyDictionary_3_Enumerator_TypeDefinitionIndex = 8011;

	template <typename T1, typename T2, typename T3>
	class DoubleKeyDictionary_3_Enumerator : public ::System::Object
	{
	public:
		::Foundation::DoubleKeyDictionary_3<T1, T2, T3>* m_oOwner; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<T1, ::System::Collections::Generic::Dictionary_2<T2, T3>*>>* m_oEnumerator1; // 0x0
		::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<T2, T3>>* m_oEnumerator2; // 0x0
	};
}
