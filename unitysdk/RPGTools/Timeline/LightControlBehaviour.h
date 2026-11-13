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

#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_CODABHKJHCA_OFFSET UNITYSDK_OFFSET(0x1C748790)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0x1C74A200)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_FBICIDBOIFE_OFFSET UNITYSDK_OFFSET(0x1C748740)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_GET_ISCLOSECHARACTERSHADOW_OFFSET UNITYSDK_OFFSET(0x1C74A1E0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_GHNABJFIJJP_OFFSET UNITYSDK_OFFSET(0x1C746B70)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_IGHMIDNKOEM_OFFSET UNITYSDK_OFFSET(0x1C745160)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_JGKDBPPOKHI_OFFSET UNITYSDK_OFFSET(0x1C7483B0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_MAKAEMNEBPG_OFFSET UNITYSDK_OFFSET(0x1C745390)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_MMOCAFDLOBH_OFFSET UNITYSDK_OFFSET(0x1C74A0D0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0x1C748420)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1C7450C0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1C7452E0)
#define RPGTOOLS_TIMELINE_LIGHTCONTROLBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C745200)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LightControlBehaviour_TypeDefinitionIndex = 49482;

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
			return (::System::Boolean*)UnitySDK::FromName("RPGTools.Timeline", "LightControlBehaviour")->GetStaticField(0xA60);
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
