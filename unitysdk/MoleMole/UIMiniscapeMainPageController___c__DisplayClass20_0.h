#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LDHFICMIAHM;
namespace MoleMole { class UIMiniscapeMainPageController; }
namespace System { class Action; }

#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1796B410)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__PLAYLEVELUPGRADE_B__0_OFFSET UNITYSDK_OFFSET(0x1796B420)
#define MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__PLAYLEVELUPGRADE_B__2_OFFSET UNITYSDK_OFFSET(0x1796B6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeMainPageController___c__DisplayClass20_0_TypeDefinitionIndex = 65266;

	class UIMiniscapeMainPageController___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::LDHFICMIAHM* model; // 0x10
		::System::Action* __9__2; // 0x18
		::MoleMole::UIMiniscapeMainPageController* __4__this; // 0x20
		::System::Int32 curExp; // 0x28
		::System::Int32 curLevel; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayLevelUpgrade_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__PLAYLEVELUPGRADE_B__0_OFFSET))(this);
		}

		::System::Void _PlayLevelUpgrade_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPEMAINPAGECONTROLLER___C__DISPLAYCLASS20_0__PLAYLEVELUPGRADE_B__2_OFFSET))(this);
		}
	};
}
