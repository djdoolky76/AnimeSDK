#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTaskCompletionSourceCore_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions_AttachExternalCancellationSource_1_TypeDefinitionIndex = 38404;

	template <typename T>
	class UniTaskExtensions_AttachExternalCancellationSource_1 : public ::System::Object
	{
	public:
		::System::Threading::CancellationToken cancellationToken; // 0x0
		::System::Threading::CancellationTokenRegistration tokenRegistration; // 0x0
		::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> core; // 0x0
		static ::System::Action_1<::System::Object*>** StaticGet_cancellationCallbackDelegate()
		{
			return (::System::Action_1<::System::Object*>**)UnitySDK::FromName("Cysharp.Threading.Tasks", "AttachExternalCancellationSource`1")->GetStaticField(0x0);
		}

	};
}
