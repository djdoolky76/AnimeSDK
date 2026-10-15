#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace ObservableCollections { template <typename T> class IObservableCollection_1; }
namespace ObservableCollections { template <typename T> class NotifyCollectionChangedEventHandler_1; }
namespace R3 { template <typename T> class Observer_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableCollectionObserverBase_2_TypeDefinitionIndex = 41367;

	template <typename T1, typename T2>
	class ObservableCollectionObserverBase_2 : public ::System::Object
	{
	public:
		::ObservableCollections::IObservableCollection_1<T1>* collection; // 0x0
		::R3::Observer_1<T2>* observer; // 0x0
		::System::Threading::CancellationTokenRegistration cancellationTokenRegistration; // 0x0
		::ObservableCollections::NotifyCollectionChangedEventHandler_1<T1>* handlerDelegate; // 0x0
	};
}
