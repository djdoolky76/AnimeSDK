#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int FreezedSortableView_2_TViewComparer_TypeDefinitionIndex = 28271;

	template <typename T1, typename T2>
	class FreezedSortableView_2_TViewComparer : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<T1>* comparer; // 0x0
	};
}
