#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }

#define MOLEMOLE_UIDOWNLOADPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1668BAD0)
#define MOLEMOLE_UIDOWNLOADPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__SHOWDOWNLOADSUCCESS_B__0_OFFSET UNITYSDK_OFFSET(0x1668BC80)
#define MOLEMOLE_UIDOWNLOADPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__SHOWDOWNLOADSUCCESS_B__1_OFFSET UNITYSDK_OFFSET(0x1668BCB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDownloadPopWindowController___c__DisplayClass25_0_TypeDefinitionIndex = 80212;

	class UIDownloadPopWindowController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MoleMole::UIGeneralTipsPopWindowController* tipsctrl; // 0x10
		::System::Action* okCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOWNLOADPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowDownloadSuccess_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOWNLOADPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__SHOWDOWNLOADSUCCESS_B__0_OFFSET))(this);
		}

		::System::Void _ShowDownloadSuccess_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOWNLOADPOPWINDOWCONTROLLER___C__DISPLAYCLASS25_0__SHOWDOWNLOADSUCCESS_B__1_OFFSET))(this);
		}
	};
}
