#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"

template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_UIBALLGAMEROLEHUDCHILDWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x1FB88A00)
#define MOLEMOLE_UIBALLGAMEROLEHUDCHILDWINDOWCONTROLLER_UISTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB88B20)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallGameRoleHudChildWindowController_UIState_TypeDefinitionIndex = 94936;

	class UIBallGameRoleHudChildWindowController_UIState : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::Single>* MaxHp; // 0x88
		::LJHFMILANJA_1<::System::Single>* CurSp; // 0x90
		::LJHFMILANJA_1<::System::Single>* ArrowPosition; // 0x98
		::LJHFMILANJA_1<::System::Single>* MaxSp; // 0xA0
		::LJHFMILANJA_1<::System::Single>* CurHp; // 0xA8
		::LJHFMILANJA_1<::System::Single>* TargetSp; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLEHUDCHILDWINDOWCONTROLLER_UISTATE__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLGAMEROLEHUDCHILDWINDOWCONTROLLER_UISTATE_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
