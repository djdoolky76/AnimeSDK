#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
namespace System { class Object; }
namespace System::Threading::Tasks { class Task; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskExtensions__Unwrap_d__65_1_TypeDefinitionIndex = 38431;

	template <typename T>
	struct alignas(8) UniTaskExtensions__Unwrap_d__65_1
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x0
		::System::Threading::Tasks::Task* task; // 0x0
		::System::Boolean continueOnCapturedContext; // 0x0
		::System::Object* __u__1; // 0x0
		::System::Object* __u__2; // 0x0
	};
}
