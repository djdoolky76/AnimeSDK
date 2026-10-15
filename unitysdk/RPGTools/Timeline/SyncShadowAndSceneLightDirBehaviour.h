#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }

#define RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE93DD50)
#define RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR_IGHMIDNKOEM_OFFSET UNITYSDK_OFFSET(0xE93DCC0)
#define RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE93DC20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SyncShadowAndSceneLightDirBehaviour_TypeDefinitionIndex = 48347;

	class SyncShadowAndSceneLightDirBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Boolean IsSync; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void IGHMIDNKOEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SYNCSHADOWANDSCENELIGHTDIRBEHAVIOUR_IGHMIDNKOEM_OFFSET))(this);
		}

	};
}
