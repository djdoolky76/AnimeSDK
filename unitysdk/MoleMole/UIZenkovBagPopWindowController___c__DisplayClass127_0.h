#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIZenkovBagPopWindowController; }

#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS127_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18F688F0)
#define MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS127_0__ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_B__0_OFFSET UNITYSDK_OFFSET(0x18F68900)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovBagPopWindowController___c__DisplayClass127_0_TypeDefinitionIndex = 91347;

	class UIZenkovBagPopWindowController___c__DisplayClass127_0 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovBagPopWindowController* __4__this; // 0x10
		::MoleMole::MonoGamepadModule* contentModule; // 0x18
		::System::Int32 tabIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS127_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnGamepadModuleTryOverrideNavigateTarget_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVBAGPOPWINDOWCONTROLLER___C__DISPLAYCLASS127_0__ONGAMEPADMODULETRYOVERRIDENAVIGATETARGET_B__0_OFFSET))(this);
		}
	};
}
