#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int WhereIntAwait_1__WhereAwait_TypeDefinitionIndex = 45734;

	template <typename T>
	class WhereIntAwait_1__WhereAwait : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
		::System::Func_3<T, ::System::Int32, ::Cysharp::Threading::Tasks::UniTask>* predicate; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Int32 state; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* enumerator; // 0x0
		::System::Object* awaiter; // 0x0
		::System::Object* awaiter2; // 0x0
		::System::Action* moveNextAction; // 0x0
		::System::Int32 index; // 0x0
		T _Current_k__BackingField; // 0x0
	};
}
