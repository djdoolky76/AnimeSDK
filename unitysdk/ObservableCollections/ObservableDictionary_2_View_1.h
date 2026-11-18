#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedViewFilter_2; }
namespace ObservableCollections { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableDictionary_2_View_1_TypeDefinitionIndex = 28088;

	template <typename T1, typename T2>
	class ObservableDictionary_2_View_1 : public ::System::Object
	{
	public:
		::ObservableCollections::ObservableDictionary_2<T1, T2>* source; // 0x0
		::System::Func_2<::System::Collections::Generic::KeyValuePair_2<T1, T2>, T2>* selector; // 0x0
		::ObservableCollections::ISynchronizedViewFilter_2<::System::Collections::Generic::KeyValuePair_2<T1, T2>, T2>* filter; // 0x0
		::System::Collections::Generic::Dictionary_2<T1, ::System::ValueTuple_2<T2, T2>>* dict; // 0x0
		::System::Object* _SyncRoot_k__BackingField; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<::System::Collections::Generic::KeyValuePair_2<T1, T2>>* RoutingCollectionChanged; // 0x0
		::System::Action_1<::System::Collections::Specialized::NotifyCollectionChangedAction>* CollectionStateChanged; // 0x0
	};
}
