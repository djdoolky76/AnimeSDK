#pragma once
#include "unitysdk/unitysdk.h"
namespace Cysharp::Threading::Tasks::CompilerServices { class IStateMachineRunnerPromise; }
namespace System { class Exception; }

namespace Cysharp::Threading::Tasks::CompilerServices
{
	template <typename T>
	struct alignas(8) AsyncUniTaskMethodBuilder_1
	{
		::Cysharp::Threading::Tasks::CompilerServices::IStateMachineRunnerPromise* runnerPromise; // 0x0
		::System::Exception* ex; // 0x0
		T result; // 0x0
	};
}
