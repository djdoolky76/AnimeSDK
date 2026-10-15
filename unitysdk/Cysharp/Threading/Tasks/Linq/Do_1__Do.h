#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int Do_1__Do_TypeDefinitionIndex = 45353;

	template <typename T>
	class Do_1__Do : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
		::System::Action_1<T>* onNext; // 0x0
		::System::Action_1<::System::Exception*>* onError; // 0x0
		::System::Action* onCompleted; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* enumerator; // 0x0
		::System::Object* awaiter; // 0x0
		T _Current_k__BackingField; // 0x0
		static ::System::Action_1<::System::Object*>** StaticGet_MoveNextCoreDelegate()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_Do")->GetStaticField(0x0);
		}

	};
}
