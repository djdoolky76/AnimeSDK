#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading
{
	template <typename T>
	class ThreadPoolWorkQueue_SparseArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* m_array; // 0x0
	};
}
