#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ObservableCollection_1_TypeDefinitionIndex = 3008;

	template <typename T>
	class ObservableCollection_1
	{
	public:
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* CollectionChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* PropertyChanged; // 0x0
		::System::Object* _monitor; // 0x0
	};
}
