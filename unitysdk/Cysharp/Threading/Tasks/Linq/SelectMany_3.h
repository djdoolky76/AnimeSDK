#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T1, typename T2, typename T3>
	class SelectMany_3 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source; // 0x0
		::System::Func_2<T1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>* selector1; // 0x0
		::System::Func_3<T1, ::System::Int32, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>* selector2; // 0x0
		::System::Func_3<T1, T2, T3>* resultSelector; // 0x0
	};
}
