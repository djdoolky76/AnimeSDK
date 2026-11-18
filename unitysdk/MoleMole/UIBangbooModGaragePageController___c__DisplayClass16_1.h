#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET UNITYSDK_OFFSET(0x17ECD490)
#define MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__DISPLAYCLASS16_1__ONFAVORITEBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x17ECD4A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooModGaragePageController___c__DisplayClass16_1_TypeDefinitionIndex = 90045;

	template <typename T>
	class UIBangbooModGaragePageController___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x10
		::System::Object* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__DISPLAYCLASS16_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnFavoriteBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOMODGARAGEPAGECONTROLLER___C__DISPLAYCLASS16_1__ONFAVORITEBTNCLICKED_B__0_OFFSET))(this);
		}
	};
}
