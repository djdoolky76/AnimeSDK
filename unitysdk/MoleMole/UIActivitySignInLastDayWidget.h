#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class AOJKLCGGPAK;
class CJIEIHEDMME;
namespace MoleMole { class UIActivitySignInPopWindowController; }

#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_REFRESHLASTDAYINFO_OFFSET UNITYSDK_OFFSET(0x1A2121F0)
#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETDAYDATA_OFFSET UNITYSDK_OFFSET(0x1A212230)
#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETPOPCONTROLLER_OFFSET UNITYSDK_OFFSET(0x1A2121A0)
#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A212280)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInLastDayWidget_TypeDefinitionIndex = 83586;

	class UIActivitySignInLastDayWidget : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET__CTOR_OFFSET))(this);
		}

		::System::Void SetPopController(::MoleMole::UIActivitySignInPopWindowController* popController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivitySignInPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETPOPCONTROLLER_OFFSET))(this, popController);
		}

		::System::Void RefreshLastDayInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_REFRESHLASTDAYINFO_OFFSET))(this);
		}

		::System::Void SetDayData(::AOJKLCGGPAK* task, ::CJIEIHEDMME* activityBaseData)
		{
			return ((::System::Void(*)(::PVOID, ::AOJKLCGGPAK*, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETDAYDATA_OFFSET))(this, task, activityBaseData);
		}
	};
}
