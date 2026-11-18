#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/SpecialDamageTextType.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelDamageTextContainerChildWindowController; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS98_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18CE10A0)
#define MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS98_0__REFRESHSPECIALDAMAGETEXTV3CACHE_B__0_OFFSET UNITYSDK_OFFSET(0x18CE10B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDamageTextContainerChildWindowController___c__DisplayClass98_0_TypeDefinitionIndex = 69645;

	class UIInLevelDamageTextContainerChildWindowController___c__DisplayClass98_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelDamageTextContainerChildWindowController* __4__this; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::MoleMole::Config::SpecialDamageTextType, ::Foundation::AssetPath> kv; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS98_0__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshSpecialDamageTextV3Cache_b__0(::Foundation::AssetPath p, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDAMAGETEXTCONTAINERCHILDWINDOWCONTROLLER___C__DISPLAYCLASS98_0__REFRESHSPECIALDAMAGETEXTV3CACHE_B__0_OFFSET))(this, p, go);
		}
	};
}
