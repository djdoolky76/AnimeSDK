#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Sofa::Core { template <typename T1, typename T2> class ObservableDictionary_2; }
namespace System::Collections::Specialized { class NotifyCollectionChangedEventHandler; }
namespace System::ComponentModel { class PropertyChangedEventHandler; }

namespace RPG::Client
{
	template <typename T>
	class GridFightGridContainer_1 : public ::System::Object
	{
	public:
		::System::Collections::Specialized::NotifyCollectionChangedEventHandler* CollectionChanged; // 0x0
		::System::ComponentModel::PropertyChangedEventHandler* ItemPropertyChanged; // 0x0
		::Sofa::Core::ObservableDictionary_2<::System::UInt32, T>* __Items_k__BackingField; // 0x0
	};
}
