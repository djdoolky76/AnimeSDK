#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Events
{
	enum class UnityEventCallState : ::System::Int32
	{
		Off = 0,
		EditorAndRuntime = 1,
		RuntimeOnly = 2,
	};
}
