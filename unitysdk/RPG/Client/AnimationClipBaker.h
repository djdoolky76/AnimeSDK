#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_ANIMATIONCLIPBAKER_CTOR_OFFSET UNITYSDK_OFFSET(0xCFD98D0)

namespace RPG::Client
{
	inline static constexpr unsigned int AnimationClipBaker_TypeDefinitionIndex = 70300;

	class AnimationClipBaker : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Object StartTime; // 0x0
		// static const ::System::Object EndTime; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ANIMATIONCLIPBAKER_CTOR_OFFSET))(this);
		}

	};
}
