#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace ZLinq::Internal { template <typename T> class RentedArrayBox_1; }
namespace ZLinq::Linq { template <typename T1, typename T2> class OrderByComparable_2; }
namespace ZLinq::Linq { template <typename T> class IOrderByComparable_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int OrderBy_3_TypeDefinitionIndex = 6121;

	template <typename T1, typename T2, typename T3>
	struct alignas(8) OrderBy_3
	{
		::System::Func_2<T1, T2>* _keySelector_P; // 0x0
		::System::Collections::Generic::IComparer_1<T2>* _comparer_P; // 0x0
		::ZLinq::Linq::IOrderByComparable_1<T1>* _parent_P; // 0x0
		::System::Boolean _descending_P; // 0x0
		T3 source; // 0x0
		::ZLinq::Linq::OrderByComparable_2<T1, T2>* comparable; // 0x0
		::ZLinq::Internal::RentedArrayBox_1<T1>* buffer; // 0x0
		::System::Int32 index; // 0x0
	};
}
