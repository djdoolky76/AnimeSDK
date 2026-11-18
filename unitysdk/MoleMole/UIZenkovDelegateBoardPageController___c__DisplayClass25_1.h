#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZenkovDelegateBoardPageController; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS25_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE53DC20)
#define MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS25_1__ONCLICKHANDIN_B__2_OFFSET UNITYSDK_OFFSET(0xE53DC30)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardPageController___c__DisplayClass25_1_TypeDefinitionIndex = 51357;

	template <typename T>
	class UIZenkovDelegateBoardPageController___c__DisplayClass25_1 : public ::System::Object
	{
	public:
		::MoleMole::UIZenkovDelegateBoardPageController* __4__this; // 0x10
		::System::UInt32 selectedQuestId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS25_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnClickHandIn_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDPAGECONTROLLER___C__DISPLAYCLASS25_1__ONCLICKHANDIN_B__2_OFFSET))(this);
		}
	};
}
