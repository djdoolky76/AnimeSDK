#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	struct alignas(4) ParticleSystem_PlaybackState_Trail
	{
		::System::Single m_Timer; // 0x10
	};
}
