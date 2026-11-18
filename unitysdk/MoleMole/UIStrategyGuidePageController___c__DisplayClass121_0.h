#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRoleSelectPageContext; }
namespace System { class Action; }

#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS121_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185A4A30)
#define MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS121_0__JUMPTOROLEINFOPAGE_B__0_OFFSET UNITYSDK_OFFSET(0x185A4A40)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuidePageController___c__DisplayClass121_0_TypeDefinitionIndex = 52243;

	class UIStrategyGuidePageController___c__DisplayClass121_0 : public ::System::Object
	{
	public:
		::MoleMole::UIRoleSelectPageContext* roleSelectContext; // 0x10
		::System::Action* afterJump; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS121_0__CTOR_OFFSET))(this);
		}

		::System::Void _JumpToRoleInfoPage_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEPAGECONTROLLER___C__DISPLAYCLASS121_0__JUMPTOROLEINFOPAGE_B__0_OFFSET))(this);
		}
	};
}
