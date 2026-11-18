#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }

#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS103_1__CTOR_OFFSET UNITYSDK_OFFSET(0x168FCEC0)
#define MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS103_1__ONFAVORITEBTNCLICKED_B__0_OFFSET UNITYSDK_OFFSET(0x168FCED0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageController___c__DisplayClass103_1_TypeDefinitionIndex = 59208;

	template <typename T>
	class UIRoleSelectPageController___c__DisplayClass103_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MoleMole::UIGeneralTipsPopWindowController* ctrl; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS103_1__CTOR_OFFSET))(this);
		}

		::System::Void _OnFavoriteBtnClicked_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTROLLER___C__DISPLAYCLASS103_1__ONFAVORITEBTNCLICKED_B__0_OFFSET))(this);
		}
	};
}
