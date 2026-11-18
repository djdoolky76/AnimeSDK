#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class NLNIIPDCABP;
class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONINIT_OFFSET UNITYSDK_OFFSET(0x1276B1C0)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1276B330)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1276B400)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1276B4E0)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONINIT_OFFSET UNITYSDK_OFFSET(0x1276B570)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x1276B600)
#define MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x1276B6B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneTags_TypeDefinitionIndex = 87601;

	class AnimatorZoneTags : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* AnimatorStateTags; // 0x50
		::System::Boolean IsExportFromAnimator; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS__CTOR_OFFSET))(this);
		}

		::System::Void OnInit(::NLNIIPDCABP* animatorComponent)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONINIT_OFFSET))(this, animatorComponent);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::System::Void __base_OnInit(::NLNIIPDCABP* P0)
		{
			return ((::System::Void(*)(::PVOID, ::NLNIIPDCABP*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONINIT_OFFSET))(this, P0);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONETAGS___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
