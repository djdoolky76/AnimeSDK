#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/UIRABAutoBattleBase3DModelController_SAssetInfo.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS43_1__CHANGESHOWBUDDY_B__0_OFFSET UNITYSDK_OFFSET(0x15C51F50)
#define MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS43_1__CTOR_OFFSET UNITYSDK_OFFSET(0x15C51F40)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABAutoBattleBase3DModelController___c__DisplayClass43_1_TypeDefinitionIndex = 60595;

	template <typename T>
	class UIRABAutoBattleBase3DModelController___c__DisplayClass43_1 : public ::System::Object
	{
	public:
		::MoleMole::UIRABAutoBattleBase3DModelController_SAssetInfo assetInfo; // 0x10
		::Foundation::AssetPath assetPath; // 0x48
		::System::Object* CS___8__locals1; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS43_1__CTOR_OFFSET))(this);
		}

		::System::Void _ChangeShowBuddy_b__0(::UnityEngine::GameObject* o)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABAUTOBATTLEBASE3DMODELCONTROLLER___C__DISPLAYCLASS43_1__CHANGESHOWBUDDY_B__0_OFFSET))(this, o);
		}
	};
}
