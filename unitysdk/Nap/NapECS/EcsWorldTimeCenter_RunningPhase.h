#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTimeCenter_RunningPhase_TypeDefinitionIndex = 35936;

	enum class EcsWorldTimeCenter_RunningPhase : ::System::Byte
	{
		Error = 5,
		Stopped = 4,
		Destroyed = 6,
		Paused = 3,
		Running = 2,
		Initialized = 1,
		None = 0,
	};
}
