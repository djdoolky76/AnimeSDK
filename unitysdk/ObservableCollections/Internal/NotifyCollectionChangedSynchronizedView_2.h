#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ObservableCollections { class ICollectionEventDispatcher; }
namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedViewFilter_2; }
namespace ObservableCollections { template <typename T1, typename T2> class ISynchronizedView_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventArgs; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int NotifyCollectionChangedSynchronizedView_2_TypeDefinitionIndex = 28205;

	template <typename T1, typename T2>
	class NotifyCollectionChangedSynchronizedView_2 : public ::System::Object
	{
	public:
		static ::System::ComponentModel::PropertyChangedEventArgs** StaticGet_CountPropertyChangedEventArgs()
		{
			return (::System::ComponentModel::PropertyChangedEventArgs**)Il2CppClass::FromTypeDefinitionIndex(NotifyCollectionChangedSynchronizedView_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Action_1<::System::Collections::Specialized::NotifyCollectionChangedEventArgs*>** StaticGet_raiseChangedEventInvoke()
		{
			return (::System::Action_1<::System::Collections::Specialized::NotifyCollectionChangedEventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(NotifyCollectionChangedSynchronizedView_2_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::ObservableCollections::ISynchronizedView_2<T1, T2>* parent; // 0x0
		::ObservableCollections::ISynchronizedViewFilter_2<T1, T2>* currentFilter; // 0x0
		::ObservableCollections::ICollectionEventDispatcher* eventDispatcher; // 0x0
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* CollectionChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x0
	};
}
