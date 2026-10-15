#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/EnvironmentSyetem/EnvSysFogParam.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8F7E20)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xE8F7900)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_IGHMIDNKOEM_OFFSET UNITYSDK_OFFSET(0xE8F4580)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_MMKDGKLPDHA_OFFSET UNITYSDK_OFFSET(0xE8F5B90)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_NPDCIDAIFHI_OFFSET UNITYSDK_OFFSET(0xE8F4620)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE8F59E0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8F3CC0)
#define RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8F5A80)

namespace RPGTools::Timeline::EnvironmentSyetem
{
	inline static constexpr unsigned int EnviroSysFogBehaviour_TypeDefinitionIndex = 48638;

	class EnviroSysFogBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam OrignEnvSysFogParameter; // 0x18
		::System::Int64 tk; // 0x60
		::System::Boolean SceneUseFogV2; // 0x68
		::System::Byte _padding0[0x3];
		::System::Single V2FogDensity; // 0x6C
		::System::Single V2HightFogDensity; // 0x70
		::System::Byte _padding1[0x4];
		::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam EnvSysFogParameter; // 0x78
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0xC0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_FBICIDBOIFE_OFFSET))(this);
		}

		::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam NPDCIDAIFHI()
		{
			return ((::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_NPDCIDAIFHI_OFFSET))(this);
		}

		::System::Void MMKDGKLPDHA(::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EnvironmentSyetem::EnvSysFogParam))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_MMKDGKLPDHA_OFFSET))(this, a1);
		}

		::System::Void IGHMIDNKOEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ENVIRONMENTSYETEM_ENVIROSYSFOGBEHAVIOUR_IGHMIDNKOEM_OFFSET))(this);
		}

	};
}
