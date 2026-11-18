#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_STATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1F959390)
#define MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_STATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F959410)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameSkillButtonSwitchChildWindowController_State_TypeDefinitionIndex = 95153;

	class UIBallGameSkillButtonSwitchChildWindowController_State : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::Single>* CoolDown; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_STATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMESKILLBUTTONSWITCHCHILDWINDOWCONTROLLER_STATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
