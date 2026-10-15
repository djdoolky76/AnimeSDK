#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace ZLinq::Linq
{
	template <typename T1, typename T2>
	struct alignas(8) ArraySelectWhere_2
	{
		::Il2CppArray<T1>* source; // 0x0
		::System::Func_2<T1, T2>* selector; // 0x0
		::System::Func_2<T2, ::System::Boolean>* predicate; // 0x0
		::System::Int32 index; // 0x0
	};
}
