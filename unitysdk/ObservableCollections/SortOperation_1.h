#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace ObservableCollections
{
	template <typename T>
	struct alignas(8) SortOperation_1
	{
		::System::Int32 Index; // 0x0
		::System::Int32 Count; // 0x0
		::System::Collections::Generic::IComparer_1<T>* Comparer; // 0x0
	};
}
