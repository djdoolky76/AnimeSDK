#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ReadOnlyObservableCollection_1_TypeDefinitionIndex = 3010;

	template <typename T>
	class ReadOnlyObservableCollection_1
	{
	public:
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* CollectionChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x0
	};
}
