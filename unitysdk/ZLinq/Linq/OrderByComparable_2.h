#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace ZLinq::Linq { template <typename T> class IOrderByComparable_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int OrderByComparable_2_TypeDefinitionIndex = 6125;

	template <typename T1, typename T2>
	class OrderByComparable_2 : public ::System::Object
	{
	public:
		::System::Func_2<T1, T2>* _keySelector_P; // 0x0
		::ZLinq::Linq::IOrderByComparable_1<T1>* _parent_P; // 0x0
		::System::Boolean _descending_P; // 0x0
		::System::Collections::Generic::IComparer_1<T2>* comparer; // 0x0
	};
}
