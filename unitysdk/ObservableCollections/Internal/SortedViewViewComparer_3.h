#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedViewFilter_2; }
namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int SortedViewViewComparer_3_TypeDefinitionIndex = 28191;

	template <typename T1, typename T2, typename T3>
	class SortedViewViewComparer_3 : public ::System::Object
	{
	public:
		::ObservableCollections::IObservableCollection_1<T1>* source; // 0x0
		::System::Func_2<T1, T2>* transform; // 0x0
		::System::Func_2<T1, T3>* identitySelector; // 0x0
		::System::Collections::Generic::Dictionary_2<T3, T2>* viewMap; // 0x0
		::System::Collections::Generic::SortedList_2<::System::ValueTuple_2<T2, T3>, ::System::ValueTuple_2<T1, T2>>* list; // 0x0
		::ObservableCollections::ISynchronizedViewFilter_2<T1, T2>* filter; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T1>* RoutingCollectionChanged; // 0x0
		::System::Action_1<::System::Collections::Specialized::NotifyCollectionChangedAction>* CollectionStateChanged; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
	};
}
