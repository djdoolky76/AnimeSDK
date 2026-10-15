#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { template <typename T> class ChannelReader_1; }
namespace Cysharp::Threading::Tasks { template <typename T> class ChannelWriter_1; }

namespace Cysharp::Threading::Tasks
{
	template <typename T1, typename T2>
	class Channel_2 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::ChannelReader_1<T1>* _Reader_k__BackingField; // 0x0
		::Cysharp::Threading::Tasks::ChannelWriter_1<T2>* _Writer_k__BackingField; // 0x0
	};
}
