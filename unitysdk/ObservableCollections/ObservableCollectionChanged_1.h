#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace ObservableCollections { template <typename T> class IObservableCollection_1; }

namespace ObservableCollections
{
	inline static constexpr unsigned int ObservableCollectionChanged_1_TypeDefinitionIndex = 41365;

	template <typename T>
	class ObservableCollectionChanged_1
	{
	public:
		::ObservableCollections::IObservableCollection_1<T>* _collection_P; // 0x0
		::System::Threading::CancellationToken _cancellationToken_P; // 0x0
	};
}
