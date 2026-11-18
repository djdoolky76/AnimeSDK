#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableDictionary_2_View_1___c__DisplayClass4_0_TypeDefinitionIndex = 28091;

	template <typename T1, typename T2>
	class ObservableDictionary_2_View_1___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Func_2<::System::Collections::Generic::KeyValuePair_2<T1, T2>, T2>* selector; // 0x0
	};
}
