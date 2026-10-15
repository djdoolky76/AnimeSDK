#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Action; }
namespace System { class Object; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UniTaskCompletionSourceCore_1_TypeDefinitionIndex = 38393;

	template <typename T>
	struct alignas(8) UniTaskCompletionSourceCore_1
	{
		T result; // 0x0
		::System::Object* error; // 0x0
		::System::Int16 version; // 0x0
		::System::Boolean hasUnhandledError; // 0x0
		::System::Int32 completedCount; // 0x0
		::System::Action* continuation; // 0x0
		::System::Object* continuationState; // 0x0
	};
}
