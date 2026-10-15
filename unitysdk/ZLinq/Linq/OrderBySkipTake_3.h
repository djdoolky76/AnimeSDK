#pragma once
#include "unitysdk/unitysdk.h"
namespace ZLinq::Internal { template <typename T> class RentedArrayBox_1; }
namespace ZLinq::Linq { template <typename T1, typename T2> class OrderByComparable_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int OrderBySkipTake_3_TypeDefinitionIndex = 6122;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) OrderBySkipTake_3
	{
		T1 source; // 0x0
		::ZLinq::Linq::OrderByComparable_2<T2, T3>* comparable; // 0x0
		::System::Int32 minIndexInclusive; // 0x0
		::System::Int32 maxIndexInclusive; // 0x0
		::ZLinq::Internal::RentedArrayBox_1<T2>* buffer; // 0x0
		::ZLinq::Internal::RentedArrayBox_1<::System::Int32>* indexMap; // 0x0
		::System::Int32 maxIndex; // 0x0
		::System::Int32 index; // 0x0
	};
}
