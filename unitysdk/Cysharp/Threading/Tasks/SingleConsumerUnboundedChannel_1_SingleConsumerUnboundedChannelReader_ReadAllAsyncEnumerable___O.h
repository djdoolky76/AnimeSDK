#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader_ReadAllAsyncEnumerable___O_TypeDefinitionIndex = 38150;

	template <typename T>
	class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader_ReadAllAsyncEnumerable___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___CancellationCallback1()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>O")->GetStaticField(0x0);
		}

		static ::System::Action** StaticGet__1___CancellationCallback2()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>O")->GetStaticField(0x0);
		}

	};
}
