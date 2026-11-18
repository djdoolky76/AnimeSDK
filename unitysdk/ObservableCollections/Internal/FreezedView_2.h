#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedViewFilter_2; }
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int FreezedView_2_TypeDefinitionIndex = 28134;

	template <typename T1, typename T2>
	class FreezedView_2 : public ::System::Object
	{
	public:
		::System::Boolean reverse; // 0x0
		::System::Collections::Generic::List_1<::System::ValueTuple_2<T1, T2>>* list; // 0x0
		::ObservableCollections::ISynchronizedViewFilter_2<T1, T2>* filter; // 0x0
		::System::Action_1<::System::Collections::Specialized::NotifyCollectionChangedAction>* CollectionStateChanged; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T1>* RoutingCollectionChanged; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
	};
}
