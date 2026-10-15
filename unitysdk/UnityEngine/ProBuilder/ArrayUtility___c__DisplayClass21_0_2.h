#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int ArrayUtility___c__DisplayClass21_0_2_TypeDefinitionIndex = 44331;

	template <typename T1, typename T2>
	class ArrayUtility___c__DisplayClass21_0_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<T1>* knownKeys; // 0x0
		::System::Func_2<T2, T1>* keySelector; // 0x0
	};
}
