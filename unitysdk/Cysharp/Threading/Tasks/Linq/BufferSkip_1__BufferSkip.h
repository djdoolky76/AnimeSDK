#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/MoveNextSource.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerable_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class IUniTaskAsyncEnumerator_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

namespace Cysharp::Threading::Tasks::Linq
{
	inline static constexpr unsigned int BufferSkip_1__BufferSkip_TypeDefinitionIndex = 45272;

	template <typename T>
	class BufferSkip_1__BufferSkip : public ::Cysharp::Threading::Tasks::MoveNextSource
	{
	public:
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* source; // 0x0
		::System::Int32 count; // 0x0
		::System::Int32 skip; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* enumerator; // 0x0
		::System::Object* awaiter; // 0x0
		::System::Boolean continueNext; // 0x0
		::System::Boolean completed; // 0x0
		::System::Collections::Generic::Queue_1<::System::Collections::Generic::List_1<T>*>* buffers; // 0x0
		::System::Int32 index; // 0x0
		::System::Collections::Generic::IList_1<T>* _Current_k__BackingField; // 0x0
		static ::System::Action** StaticGet_MoveNextCoreDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks.Linq", "_BufferSkip")->GetStaticField(0x0);
		}

	};
}
