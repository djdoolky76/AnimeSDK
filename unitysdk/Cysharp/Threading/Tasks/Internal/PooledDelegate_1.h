#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Cysharp::Threading::Tasks { class TaskPool; }
namespace Cysharp::Threading::Tasks::Internal { template <typename T> class PooledDelegate_1; }
namespace System { class Action; }

namespace Cysharp::Threading::Tasks::Internal
{
	template <typename T>
	class PooledDelegate_1 : public ::System::Object
	{
	public:
		::Cysharp::Threading::Tasks::Internal::PooledDelegate_1<T>* nextNode; // 0x0
		::System::Action* runDelegate; // 0x0
		::System::Action* continuation; // 0x0
		static ::Cysharp::Threading::Tasks::TaskPool** StaticGet_pool()
		{
			return (::Cysharp::Threading::Tasks::TaskPool**)UnitySDK::FromName("Cysharp.Threading.Tasks.Internal", "PooledDelegate`1")->GetStaticField(0x0);
		}

	};
}
