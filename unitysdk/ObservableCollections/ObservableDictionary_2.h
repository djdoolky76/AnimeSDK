#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableDictionary_2_TypeDefinitionIndex = 28087;

	template <typename T1, typename T2>
	class ObservableDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<T1, T2>* dictionary; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>* CollectionChanged; // 0x0
	};
}
