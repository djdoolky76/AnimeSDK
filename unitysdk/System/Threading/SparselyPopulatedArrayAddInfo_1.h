#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Threading { template <typename T> class SparselyPopulatedArrayFragment_1; }

namespace System::Threading
{
	template <typename T>
	struct alignas(8) SparselyPopulatedArrayAddInfo_1
	{
		::System::Threading::SparselyPopulatedArrayFragment_1<T>* m_source; // 0x0
		::System::Int32 m_index; // 0x0
	};
}
