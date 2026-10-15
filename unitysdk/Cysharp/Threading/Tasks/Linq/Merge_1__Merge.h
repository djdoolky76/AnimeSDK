#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueTuple.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	template <typename T>
	class Merge_1__Merge : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::System::Int32 length; // 0x0
		::Il2CppArray<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>* enumerators; // 0x0
		::Il2CppArray<::System::Object*>* states; // 0x0
		::System::Collections::Generic::Queue_1<::System::ValueTuple>* queuedResult; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Int32 moveNextCompleted; // 0x0
		T _Current_k__BackingField; // 0x0
		static ::System::Action** StaticGet_GetResultAtAction()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_Merge")->GetStaticField(0x0);
		}

	};
}
