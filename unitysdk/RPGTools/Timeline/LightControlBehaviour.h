#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/LightParameter.h"
#include "unitysdk/RPGTools/Timeline/RecoverablePlayableBehaviour.h"
#include "unitysdk/RPGTools/Timeline/RimLightParameter.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::Client { class EnvironmentSystem; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_CODABHKJHCA_OFFSET UNITYSDK_OFFSET(0xE908400)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE909E70)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0xE9083B0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_GET_ISCLOSECHARACTERSHADOW_OFFSET UNITYSDK_OFFSET(0xE909E50)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_GHNABJFIJJP_OFFSET UNITYSDK_OFFSET(0xE906A20)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_IGHMIDNKOEM_OFFSET UNITYSDK_OFFSET(0xE905010)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_JGKDBPPOKHI_OFFSET UNITYSDK_OFFSET(0xE908260)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_MAKAEMNEBPG_OFFSET UNITYSDK_OFFSET(0xE905240)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_MMOCAFDLOBH_OFFSET UNITYSDK_OFFSET(0xE909D40)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE9082D0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE904F70)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xE905190)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE9050B0)

namespace RPGTools::Timeline
{
	class LightControlBehaviour : public ::RPGTools::Timeline::RecoverablePlayableBehaviour
	{
	public:
		::System::Boolean enableDisableLocalMainLight; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single disableLocalMainLight; // 0x1C
		::System::Single _OriginDisableLocalMainLight; // 0x20
		::RPGTools::Timeline::LightParameter lightParameter; // 0x24
		::RPGTools::Timeline::LightParameter _OriginParameter; // 0x54
		::RPGTools::Timeline::RimLightParameter RimParameter; // 0x84
		::RPGTools::Timeline::RimLightParameter _OriginRimParameter; // 0xBC
		::UnityEngine::Vector3 _OriginMonsterDir; // 0xF4
		::System::Single CharacterShadowFactor; // 0x100
		::System::Boolean CharacterShadowFactorEnableInShaowProbe; // 0x104
		::System::Byte _padding1[0x3];
		::System::Single _OriCharacterShadowFactor; // 0x108
		::System::Single CharacterAngleLimit; // 0x10C
		::System::Single _OriCharacterAngleLimit; // 0x110
		::System::Boolean _FirstFrame; // 0x114
		::System::Byte _padding2[0x3];
		::RPG::Client::EnvironmentSystem* _EnvSystem; // 0x118
		::System::Int32 _TargetPriority; // 0x120
		::System::Boolean AutoReset; // 0x124
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector3 position; // 0x128
		::System::Byte _padding4[0x4];
		::UnityEngine::GameObject* _CharacterGo; // 0x138
		static ::System::Boolean* StaticGet__LightControlBehaviourActive()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPGTools.Timeline", "LightControlBehaviour")->GetStaticField(0x15B80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void JGKDBPPOKHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_JGKDBPPOKHI_OFFSET))(this);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void FBICIDBOIFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_FBICIDBOIFE_OFFSET))(this);
		}

		::System::Void GHNABJFIJJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_GHNABJFIJJP_OFFSET))(this);
		}

		::System::Void MAKAEMNEBPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_MAKAEMNEBPG_OFFSET))(this);
		}

		::System::Void CODABHKJHCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_CODABHKJHCA_OFFSET))(this);
		}

		::System::Void IGHMIDNKOEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_IGHMIDNKOEM_OFFSET))(this);
		}

		::System::Boolean MMOCAFDLOBH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_MMOCAFDLOBH_OFFSET))(this);
		}

		::System::Boolean get_IsCloseCharacterShadow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_GET_ISCLOSECHARACTERSHADOW_OFFSET))(this);
		}

	};
}
