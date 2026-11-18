#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelPauseNormalRowWidgetController; }
namespace MoleMole { class UIInLevelPauseNormalRowWidgetController_Formatter; }

#define MOLEMOLE_UIINLEVELPAUSE_MPONLINEPLAYERDETAILCONTENTWIDGETCONTROLLER_ITEMFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x182DC840)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPause_MPOnlinePlayerDetailContentWidgetController_ItemFormatter_TypeDefinitionIndex = 78633;

	class UIInLevelPause_MPOnlinePlayerDetailContentWidgetController_ItemFormatter : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelPauseNormalRowWidgetController* controller; // 0x10
		::MoleMole::UIInLevelPauseNormalRowWidgetController_Formatter* formatter; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_MPONLINEPLAYERDETAILCONTENTWIDGETCONTROLLER_ITEMFORMATTER__CTOR_OFFSET))(this);
		}
	};
}
