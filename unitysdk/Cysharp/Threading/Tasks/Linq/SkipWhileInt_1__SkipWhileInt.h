#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int SkipWhileInt_1__SkipWhileInt_TypeDefinitionIndex = 45591;

	template <typename T>
	class SkipWhileInt_1__SkipWhileInt
	{
	public:
		::System::Func_3<T, ::System::Int32, ::System::Boolean>* predicate; // 0x0
		::System::Int32 index; // 0x0
	};
}
