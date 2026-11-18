#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableQueue_1_TypeDefinitionIndex = 28075;

	template <typename T>
	class ObservableQueue_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<T>* queue; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T>* CollectionChanged; // 0x0
	};
}
