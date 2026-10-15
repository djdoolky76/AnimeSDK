#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader___O_TypeDefinitionIndex = 38151;

	template <typename T>
	class SingleConsumerUnboundedChannel_1_SingleConsumerUnboundedChannelReader___O : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet__0___CancellationCallback()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "<>O")->GetStaticField(0x0);
		}

	};
}
