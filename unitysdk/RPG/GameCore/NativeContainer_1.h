#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBGOLJBHEHA.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NativeContainer_1_TypeDefinitionIndex = 10874;

	template <typename T>
	class NativeContainer_1 : public ::MBGOLJBHEHA
	{
	public:
		::Il2CppArray<T>* _ManagedArray; // 0x0
		::Unity::Collections::NativeArray_1<T> _NativeArray; // 0x0
	};
}
