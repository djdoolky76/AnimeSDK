#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"

#define UNITYENGINE_AUDIOBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C2F20)

namespace UnityEngine
{
	class AudioBehaviour : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_AUDIOBEHAVIOUR_CTOR_OFFSET))(this);
		}

	};
}
