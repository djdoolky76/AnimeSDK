#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ObservableCollections
{
	template <typename T>
	class ObservableList_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* list; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T>* CollectionChanged; // 0x0
	};
}
