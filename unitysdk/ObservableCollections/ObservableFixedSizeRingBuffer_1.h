#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace ObservableCollections { template <typename T> class RingBuffer_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableFixedSizeRingBuffer_1_TypeDefinitionIndex = 28123;

	template <typename T>
	class ObservableFixedSizeRingBuffer_1 : public ::System::Object
	{
	public:
		::ObservableCollections::RingBuffer_1<T>* buffer; // 0x0
		::System::Int32 capacity; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T>* CollectionChanged; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
	};
}
