#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class ELOPDAHLHMH;
class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA1F480)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONEVTHITTINGOTHERINSTANTLY_OFFSET UNITYSDK_OFFSET(0x1BA1F510)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BA1EDE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BA1F140)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1FF10)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x1BA1FFA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1BA20070)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1BA20120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneParrySolo_TypeDefinitionIndex = 54530;

	class AnimatorZoneParrySolo : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* actionGroupList; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void onEvtHittingOtherInstantly(::ELOPDAHLHMH* evt, ::MoleMole::Battle::Entity* attackee)
		{
			return ((::System::Void(*)(::PVOID, ::ELOPDAHLHMH*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO_ONEVTHITTINGOTHERINSTANTLY_OFFSET))(this, evt, attackee);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYSOLO___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
