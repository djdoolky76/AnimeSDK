#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace ZLinq::Linq
{
	template <typename T>
	struct alignas(8) ArrayWhere_1
	{
		::System::Func_2<T, ::System::Boolean>* _predicate_P; // 0x0
		::Il2CppArray<T>* source; // 0x0
		::System::Int32 index; // 0x0
	};
}
