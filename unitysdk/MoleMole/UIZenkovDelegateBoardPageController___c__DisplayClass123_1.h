#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadModule; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS123_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10574C40)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS123_1__FOCUSLEFTPANELGAMEPADMODULE_G__DOSELECTONREADY_2_OFFSET UNITYSDK_OFFSET(0x10574C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass123_1_TypeDefinitionIndex = 51356;

	template <typename T>
	class UIZenkovDelegateBoardPageController___c__DisplayClass123_1 : public ::System::Object
	{
	public:
		::MoleMole::MonoGamepadModule* rightContent; // 0x10
		::System::Object* CS___8__locals1; // 0x18
		::System::Boolean handled; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS123_1__CTOR_OFFSET))(this);
		}

		::System::Void _FocusLeftPanelGamepadModule_g__DoSelectOnReady_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS123_1__FOCUSLEFTPANELGAMEPADMODULE_G__DOSELECTONREADY_2_OFFSET))(this);
		}
	};
}
