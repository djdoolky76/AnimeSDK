#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/EffLightData.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8D2900)
#define RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xE8D2670)
#define RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_IGHMIDNKOEM_OFFSET UNITYSDK_OFFSET(0xE8D1E60)
#define RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE8D25C0)
#define RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8D1DD0)
#define RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8D1EF0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EffectLightControlBehaviour_TypeDefinitionIndex = 48157;

	class EffectLightControlBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::EffLightData _OriginParameter; // 0x18
		::RPGTools::Timeline::EffLightData lightParameter; // 0x30
		::System::Boolean _FirstFrameHappened; // 0x48
		::System::Byte _padding0[0x7];
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x50
		::System::Boolean AutoReset; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_FBICIDBOIFE_OFFSET))(this);
		}

		::System::Void IGHMIDNKOEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTLIGHTCONTROLBEHAVIOUR_IGHMIDNKOEM_OFFSET))(this);
		}

	};
}
