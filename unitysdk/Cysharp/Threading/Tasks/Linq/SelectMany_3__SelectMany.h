#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int SelectMany_3__SelectMany_TypeDefinitionIndex = 45564;

	template <typename T1, typename T2, typename T3>
	class SelectMany_3__SelectMany : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* source; // 0x0
		::System::Func_2<T1, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>* selector1; // 0x0
		::System::Func_3<T1, ::System::Int32, ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>*>* selector2; // 0x0
		::System::Func_3<T1, T2, T3>* resultSelector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		T3 sourceCurrent; // 0x0
		::System::Int32 sourceIndex; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* sourceEnumerator; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>* selectedEnumerator; // 0x0
		::System::Object* sourceAwaiter; // 0x0
		::System::Object* selectedAwaiter; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter selectedDisposeAsyncAwaiter; // 0x0
		T3 _Current_k__BackingField; // 0x0
		static ::System::Action** StaticGet_sourceMoveNextCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_SelectMany")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_selectedSourceMoveNextCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_SelectMany")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_selectedEnumeratorDisposeAsyncCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_SelectMany")->GetStaticField(0x0);
		}

	};
}
