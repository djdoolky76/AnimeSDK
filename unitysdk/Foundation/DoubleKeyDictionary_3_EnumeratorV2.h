#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/SDoubleKeyValue_3.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation { template <typename T1, typename T2, typename T3> class DoubleKeyDictionary_3; }
namespace System { class Object; }

namespace Foundation
{
	inline static constexpr unsigned int DoubleKeyDictionary_3_EnumeratorV2_TypeDefinitionIndex = 8012;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) DoubleKeyDictionary_3_EnumeratorV2
	{
		::Foundation::DoubleKeyDictionary_3<T1, T2, T3>* _owner; // 0x0
		::System::Object* _outerEnumerator; // 0x0
		::System::Object* _innerEnumerator; // 0x0
		::System::Boolean _initialized; // 0x0
		::System::Boolean _outerMoved; // 0x0
		::Foundation::SDoubleKeyValue_3<T1, T2, T3> _Current_k__BackingField; // 0x0
	};
}
