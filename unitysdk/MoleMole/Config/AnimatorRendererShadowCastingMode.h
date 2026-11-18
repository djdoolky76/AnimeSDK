#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class GIGFDLPMNND;
class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x18B84660)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x18B83A70)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x18B840B0)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_POPRENDERERSHADOWCASTINGBYZONE_OFFSET UNITYSDK_OFFSET(0x18B83F40)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_PUSHRENDERERSHADOWCASTINGBYZONE_OFFSET UNITYSDK_OFFSET(0x18B83860)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x18B846F0)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x18B84780)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x18B84850)
#define MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x18B84900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorRendererShadowCastingMode_TypeDefinitionIndex = 80099;

	class AnimatorRendererShadowCastingMode : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* Paths; // 0x50
		::System::Int32 ShadowCastMode; // 0x58
		::System::Boolean ApplyAllRenderers; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE__CTOR_OFFSET))(this);
		}

		::System::Void PushRendererShadowCastingByZone(::GIGFDLPMNND* matComponent, ::PKMJPMFCNBK* zoneInfo, ::UnityEngine::Renderer* renderer, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::GIGFDLPMNND*, ::PKMJPMFCNBK*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_PUSHRENDERERSHADOWCASTINGBYZONE_OFFSET))(this, matComponent, zoneInfo, renderer, path);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void PopRendererShadowCastingByZone(::GIGFDLPMNND* matComponent, ::PKMJPMFCNBK* zoneInfo, ::UnityEngine::Renderer* renderer, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::GIGFDLPMNND*, ::PKMJPMFCNBK*, ::UnityEngine::Renderer*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_POPRENDERERSHADOWCASTINGBYZONE_OFFSET))(this, matComponent, zoneInfo, renderer, path);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORRENDERERSHADOWCASTINGMODE___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
