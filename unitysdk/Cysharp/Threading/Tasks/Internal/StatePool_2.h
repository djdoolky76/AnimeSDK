#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks::Internal { class StateTuple; }
namespace System::Collections::Concurrent { template <typename T> class ConcurrentQueue_1; }

namespace Cysharp::Threading::Tasks::Internal
{
	inline static constexpr unsigned int StatePool_2_TypeDefinitionIndex = 38671;

	template <typename T1, typename T2>
	class StatePool_2 : public ::System::Object
	{
	public:
		static ::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple*>** StaticGet_queue()
		{
			return (::System::Collections::Concurrent::ConcurrentQueue_1<::Cysharp::Threading::Tasks::Internal::StateTuple*>**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "StatePool`2")->GetStaticField(0x0);
		}

	};
}
