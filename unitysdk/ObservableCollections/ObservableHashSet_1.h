#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableHashSet_1_TypeDefinitionIndex = 28284;

	template <typename T>
	class ObservableHashSet_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<T>* set; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T>* CollectionChanged; // 0x0
	};
}
