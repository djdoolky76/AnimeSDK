#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	template <typename T>
	class UniTaskExtensions_AttachExternalCancellationSource_1 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration tokenRegistration; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
		static ::System::Action** StaticGet_cancellationCallbackDelegate()
		{
			return (::System::Action**)UnitySDK::FromName("Cysharp.Threading.Tasks", "AttachExternalCancellationSource`1")->GetStaticField(0x0);
		}

	};
}
