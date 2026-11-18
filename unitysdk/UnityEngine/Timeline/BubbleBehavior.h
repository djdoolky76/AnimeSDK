#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define UNITYENGINE_TIMELINE_BUBBLEBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x200238C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int BubbleBehavior_TypeDefinitionIndex = 32387;

	class BubbleBehavior : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_BUBBLEBEHAVIOR__CTOR_OFFSET))(this);
		}
	};
}
