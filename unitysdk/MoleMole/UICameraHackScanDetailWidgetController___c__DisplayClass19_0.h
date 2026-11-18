#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class HackEntrySubSystem_HackTarget; }
namespace MoleMole { class UICameraHackScanDetailWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET UNITYSDK_OFFSET(0x188FF0F0)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__DISPLAYCLASS19_0__SHOWORREFRESH_B__0_OFFSET UNITYSDK_OFFSET(0x188FF100)

namespace MoleMole
{
	inline static constexpr unsigned int UICameraHackScanDetailWidgetController___c__DisplayClass19_0_TypeDefinitionIndex = 85785;

	class UICameraHackScanDetailWidgetController___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::MoleMole::UICameraHackScanDetailWidgetController* __4__this; // 0x10
		::System::Action* onFadeInFinished; // 0x18
		::MoleMole::HackEntrySubSystem_HackTarget* target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__DISPLAYCLASS19_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowOrRefresh_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__DISPLAYCLASS19_0__SHOWORREFRESH_B__0_OFFSET))(this);
		}
	};
}
