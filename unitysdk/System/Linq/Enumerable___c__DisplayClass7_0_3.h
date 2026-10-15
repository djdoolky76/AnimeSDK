#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { template <typename T1, typename T2> class Func_2; }

namespace System::Linq
{
	inline static constexpr unsigned int Enumerable___c__DisplayClass7_0_3_TypeDefinitionIndex = 3144;

	template <typename T1, typename T2, typename T3>
	class Enumerable___c__DisplayClass7_0_3 : public ::System::Object
	{
	public:
		::System::Func_2<T1, T2>* selector2; // 0x0
		::System::Func_2<T3, T1>* selector1; // 0x0
	};
}
