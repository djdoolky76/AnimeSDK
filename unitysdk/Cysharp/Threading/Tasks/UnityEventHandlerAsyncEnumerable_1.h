#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::Events { class UnityEvent; }

namespace Cysharp::Threading::Tasks
{
	inline static constexpr unsigned int UnityEventHandlerAsyncEnumerable_1_TypeDefinitionIndex = 38485;

	template <typename T>
	class UnityEventHandlerAsyncEnumerable_1 : public ::System::Object
	{
	public:
		::UnityEngine::Events::UnityEvent* unityEvent; // 0x0
		::System::Threading::CancellationToken cancellationToken1; // 0x0
	};
}
