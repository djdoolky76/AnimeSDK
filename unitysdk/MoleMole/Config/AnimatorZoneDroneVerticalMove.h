#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x16521BD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_GET_ISUPDATEONEFRAME_OFFSET UNITYSDK_OFFSET(0x16520C10)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16521140)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x16520C20)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x16521950)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x16521C60)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x16521C70)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x16521D40)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x16521E00)
#define MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x16521EB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDroneVerticalMove_TypeDefinitionIndex = 70418;

	class AnimatorZoneDroneVerticalMove : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* MinHeightBrakingCurve; // 0x50
		::System::String* MaxHeightBrakingCurve; // 0x58
		::System::Single Acceleration; // 0x60
		::System::Single InPlaceMoveSpeed; // 0x64
		::System::Single Deceleration; // 0x68
		::System::Single Speed; // 0x6C
		::System::Single InPlaceMovePeriod; // 0x70
		::System::Boolean UseInputMagnitude; // 0x74
		::System::Byte _padding0[0x3];
		::System::Single MaxHeightBrakingDistance; // 0x78
		::System::Single MinHeightBrakingDistance; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isUpdateOneFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_GET_ISUPDATEONEFRAME_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnUpdate(::MoleMole::Battle::Entity* entity, ::System::Single deltaTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single animNormalizedTime, ::UnityEngine::AnimatorStateInfo& curStateInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONUPDATE_OFFSET))(this, entity, deltaTime, zoneInfo, animNormalizedTime, curStateInfo);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnUpdate(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3, ::UnityEngine::AnimatorStateInfo& P4)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single, ::UnityEngine::AnimatorStateInfo&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONUPDATE_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDRONEVERTICALMOVE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
