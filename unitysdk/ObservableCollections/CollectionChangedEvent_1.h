#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ObservableCollections/SortOperation_1.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"

namespace ObservableCollections
{
	template <typename T>
	struct alignas(8) CollectionChangedEvent_1
	{
		::System::Collections::Specialized::NotifyCollectionChangedAction Action; // 0x0
		T NewItem; // 0x0
		T OldItem; // 0x0
		::System::Int32 NewStartingIndex; // 0x0
		::System::Int32 OldStartingIndex; // 0x0
		::ObservableCollections::SortOperation_1<T> SortOperation; // 0x0
	};
}
