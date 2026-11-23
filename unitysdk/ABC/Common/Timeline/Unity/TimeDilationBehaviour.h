#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"

#define ABC_COMMON_TIMELINE_UNITY_TIMEDILATIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x21C67D0)

namespace ABC::Common::Timeline::Unity
{
	inline static constexpr unsigned int TimeDilationBehaviour_TypeDefinitionIndex = 8905;

	class TimeDilationBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Single timeScale; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_COMMON_TIMELINE_UNITY_TIMEDILATIONBEHAVIOUR__CTOR_OFFSET))(this);
		}
	};
}
