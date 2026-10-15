#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int SelectAwait_2__SelectAwait_TypeDefinitionIndex = 45556;

	template <typename T1, typename T2>
	class SelectAwait_2__SelectAwait : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source; // 0x0
		::System::Func_2<T1, ::Cysharp::Threading::Tasks::UniTask>* selector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Int32 state; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* enumerator; // 0x0
		::System::Object* awaiter; // 0x0
		::System::Object* awaiter2; // 0x0
		::System::Action* moveNextAction; // 0x0
		T2 _Current_k__BackingField; // 0x0
	};
}
