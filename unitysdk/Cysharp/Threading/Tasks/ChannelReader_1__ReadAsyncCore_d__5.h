#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
namespace Cysharp::Threading::Tasks { template <typename T> class ChannelReader_1; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	struct alignas(8) ChannelReader_1__ReadAsyncCore_d__5
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::Cysharp::Threading::Tasks::ChannelReader_1<T1>* __4__this; // 0x0
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Object* __u__1; // 0x0
	};
}
