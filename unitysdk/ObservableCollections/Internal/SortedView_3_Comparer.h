#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace ObservableCollections::Internal
{
	inline static constexpr unsigned int SortedView_3_Comparer_TypeDefinitionIndex = 28267;

	template <typename T1, typename T2, typename T3>
	class SortedView_3_Comparer : public ::System::Object
	{
	public:
		::System::Collections::Generic::IComparer_1<T1>* comparer; // 0x0
	};
}
