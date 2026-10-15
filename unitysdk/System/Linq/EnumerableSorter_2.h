#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Linq { template <typename T> class EnumerableSorter_1; }

namespace System::Linq
{
	inline static constexpr unsigned int EnumerableSorter_2_TypeDefinitionIndex = 3181;

	template <typename T1, typename T2>
	class EnumerableSorter_2
	{
	public:
		::System::Func_2<T1, T2>* keySelector; // 0x0
		::System::Collections::Generic::IComparer_1<T2>* comparer; // 0x0
		::System::Boolean descending; // 0x0
		::System::Linq::EnumerableSorter_1<T1>* next; // 0x0
		::Il2CppArray<T2>* keys; // 0x0
	};
}
