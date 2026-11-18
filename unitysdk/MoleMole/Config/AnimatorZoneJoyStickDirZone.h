#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/AvatarSteerType.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class FCNJNMHEKPD;
class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x165250B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x16524280)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GET_REALJOYSTICKDIRSTATEPARAM_OFFSET UNITYSDK_OFFSET(0x16524290)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16524AF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x16524330)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x16524890)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_SAMPLECURVEVAL_OFFSET UNITYSDK_OFFSET(0x16524D00)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE__CTOR_OFFSET UNITYSDK_OFFSET(0x16525140)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x16525150)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16525220)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x165252E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x16525390)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneJoyStickDirZone_TypeDefinitionIndex = 91161;

	class AnimatorZoneJoyStickDirZone : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::UnityEngine::AnimationCurve* lerpSpeedCurve; // 0x50
		::System::String* JoyStickDirStateParam; // 0x58
		::UnityEngine::AnimationCurve* LerpSpeedCurve; // 0x60
		::System::Single lerpSpeedFactor; // 0x68
		::System::Boolean KeepWhenJoyStickRelease; // 0x6C
		::MoleMole::AvatarSteerType JoyStickDirLerpType; // 0x6D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::String* get_realJoyStickDirStateParam()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GET_REALJOYSTICKDIRSTATEPARAM_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Single SampleCurveVal(::System::Single animNormalizedTime, ::FCNJNMHEKPD* zoneInfo, ::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo curStateInfo)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::FCNJNMHEKPD*, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_SAMPLECURVEVAL_OFFSET))(this, animNormalizedTime, zoneInfo, entity, curStateInfo);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
