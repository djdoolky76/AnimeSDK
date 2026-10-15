#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Zip_3__Zip_TypeDefinitionIndex = 45740;

	template <typename T1, typename T2, typename T3>
	class Zip_3__Zip : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T1>* first; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T2>* second; // 0x0
		::System::Func_3<T1, T2, T3>* resultSelector; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T1>* firstEnumerator; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T2>* secondEnumerator; // 0x0
		::System::Object* firstAwaiter; // 0x0
		::System::Object* secondAwaiter; // 0x0
		T3 _Current_k__BackingField; // 0x0
		static ::System::Action** StaticGet_firstMoveNextCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_Zip")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet_secondMoveNextCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_Zip")->GetStaticField(0x0);
		}

	};
}
