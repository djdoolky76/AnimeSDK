#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/LightParameter.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE935410)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xE934990)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_IGHMIDNKOEM_OFFSET UNITYSDK_OFFSET(0xE9337E0)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE9348E0)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE933750)
#define RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE933880)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SceneLightControlBehaviour_TypeDefinitionIndex = 48160;

	class SceneLightControlBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::LightParameter _OriginParameter; // 0x18
		::RPGTools::Timeline::LightParameter lightParameter; // 0x48
		::System::Boolean _FirstFrameHappened; // 0x78
		::System::Byte _padding0[0x7];
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x80
		::System::Boolean AutoReset; // 0x88
		::System::Boolean UseReference; // 0x89
		::System::Byte _padding1[0x6];
		::UnityEngine::Transform* ReferenceObject; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_FBICIDBOIFE_OFFSET))(this);
		}

		::System::Void IGHMIDNKOEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SCENELIGHTCONTROLBEHAVIOUR_IGHMIDNKOEM_OFFSET))(this);
		}

	};
}
