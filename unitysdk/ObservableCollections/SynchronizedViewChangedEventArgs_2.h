#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Specialized/NotifyCollectionChangedAction.h"
#include "unitysdk/System/ValueType.h"

namespace ObservableCollections
{
	inline static constexpr unsigned int SynchronizedViewChangedEventArgs_2_TypeDefinitionIndex = 28249;

	template <typename T1, typename T2>
	struct alignas(8) SynchronizedViewChangedEventArgs_2
	{
		::System::Collections::Specialized::NotifyCollectionChangedAction Action; // 0x0
		T1 NewValue; // 0x0
		T1 OldValue; // 0x0
		T2 NewView; // 0x0
		T2 OldView; // 0x0
		::System::Int32 NewViewIndex; // 0x0
		::System::Int32 OldViewIndex; // 0x0
	};
}
