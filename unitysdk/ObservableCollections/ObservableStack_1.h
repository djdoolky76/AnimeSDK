#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableStack_1_TypeDefinitionIndex = 28325;

	template <typename T>
	class ObservableStack_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<T>* stack; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T>* CollectionChanged; // 0x0
	};
}
