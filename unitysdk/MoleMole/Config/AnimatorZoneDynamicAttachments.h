#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorZone.h"
#include "unitysdk/MoleMole/Config/ConfigDynamicAttachmentAnimSync.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"

class PKMJPMFCNBK;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigDynamicAttachItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x131D2510)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x131D1DF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x131D2230)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0x131D25A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_CREATEZONEINFOINSTANCE_OFFSET UNITYSDK_OFFSET(0x131D25B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_ONZONEENTER_OFFSET UNITYSDK_OFFSET(0x131D2680)
#define MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_ONZONEEXIT_OFFSET UNITYSDK_OFFSET(0x131D2730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDynamicAttachments_TypeDefinitionIndex = 56616;

	class AnimatorZoneDynamicAttachments : public ::MoleMole::Config::AnimatorZone
	{
	public:
		::System::String* syncAttachmentAnimState; // 0x50
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachItem*>* attachmentGroupList; // 0x58
		::System::String* syncParentAnimState; // 0x60
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigDynamicAttachmentAnimSync>* animSyncs; // 0x68
		::System::Boolean isFollow; // 0x70
		::System::Byte _padding0[0x3];
		::System::Single endNormalizedTime; // 0x74
		::System::Single startNormalizedTime; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS__CTOR_OFFSET))(this);
		}

		::System::Void OnZoneEnter(::MoleMole::Battle::Entity* entity, ::UnityEngine::AnimatorStateInfo& curStateInfo, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_ONZONEENTER_OFFSET))(this, entity, curStateInfo, zoneInfo, deltaTime);
		}

		::System::Void OnZoneExit(::MoleMole::Battle::Entity* entity, ::System::Single stateNormalizedTime, ::PKMJPMFCNBK* zoneInfo, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_ONZONEEXIT_OFFSET))(this, entity, stateNormalizedTime, zoneInfo, deltaTime);
		}

		::PKMJPMFCNBK* CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::PKMJPMFCNBK* __base_CreateZoneInfoInstance()
		{
			return ((::PKMJPMFCNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_CREATEZONEINFOINSTANCE_OFFSET))(this);
		}

		::System::Void __base_OnZoneEnter(::MoleMole::Battle::Entity* P0, ::UnityEngine::AnimatorStateInfo& P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::AnimatorStateInfo&, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_ONZONEENTER_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnZoneExit(::MoleMole::Battle::Entity* P0, ::System::Single P1, ::PKMJPMFCNBK* P2, ::System::Single P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single, ::PKMJPMFCNBK*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDYNAMICATTACHMENTS___BASE_ONZONEEXIT_OFFSET))(this, P0, P1, P2, P3);
		}
	};
}
