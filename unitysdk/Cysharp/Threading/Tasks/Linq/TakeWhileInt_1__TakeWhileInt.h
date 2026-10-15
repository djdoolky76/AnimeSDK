#pragma once
#include "unitysdk/unitysdk.h"
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int TakeWhileInt_1__TakeWhileInt_TypeDefinitionIndex = 45662;

	template <typename T>
	class TakeWhileInt_1__TakeWhileInt
	{
	public:
		::System::Func_3<T, ::System::Int32, ::System::Boolean>* predicate; // 0x0
		::System::Int32 index; // 0x0
	};
}
