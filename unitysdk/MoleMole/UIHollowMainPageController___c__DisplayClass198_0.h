#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIHollowMainPageController; }
namespace MoleMole::Config { class ConfigHollowChessboardSystem; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__CTOR_OFFSET UNITYSDK_OFFSET(0x176A4E70)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__UPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x176A4E80)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__UPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x176A4EC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController___c__DisplayClass198_0_TypeDefinitionIndex = 84607;

	class UIHollowMainPageController___c__DisplayClass198_0 : public ::System::Object
	{
	public:
		::MoleMole::UIHollowMainPageController* __4__this; // 0x10
		::MoleMole::Config::ConfigHollowChessboardSystem* config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__CTOR_OFFSET))(this);
		}

		::System::Void _Update_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__UPDATE_B__0_OFFSET))(this);
		}

		::System::Void _Update_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER___C__DISPLAYCLASS198_0__UPDATE_B__1_OFFSET))(this);
		}
	};
}
