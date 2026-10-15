#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBGOLJBHEHA.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace RPG::GameCore
{
	template <typename T>
	class NativeContainer_1 : public ::MBGOLJBHEHA
	{
	public:
		::Il2CppArray<T>* _ManagedArray; // 0x0
		::Unity::Collections::NativeArray_1<T> _NativeArray; // 0x0
	};
}
