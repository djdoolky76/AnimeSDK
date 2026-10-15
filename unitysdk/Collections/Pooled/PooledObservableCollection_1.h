#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

namespace Collections::Pooled
{
	inline static constexpr unsigned int PooledObservableCollection_1_TypeDefinitionIndex = 5119;

	template <typename T>
	class PooledObservableCollection_1
	{
	public:
		::System::Object* _monitor; // 0x0
		::System::Int32 _blockReentrancyCount; // 0x0
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* CollectionChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x0
	};
}
