#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Cameras/CameraMoveModeData_MoveModeDataPriority.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/CameraDelayMoveMode.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x19228560)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x19227EE0)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x19228450)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x192285F0)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x19228600)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x192286D0)
#define MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x19228780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneCameraMovementConfigMode_TypeDefinitionIndex = 48879;

	class AnimatorZoneCameraMovementConfigMode : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::MoleMole::Config::CameraDelayMoveMode targetMode; // 0x50
		::System::Boolean RestoreOnExit; // 0x54
		::MoleMole::Cameras::CameraMoveModeData_MoveModeDataPriority OverridePriority; // 0x55
		::System::Boolean EnableOverridePriority; // 0x56

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONECAMERAMOVEMENTCONFIGMODE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
