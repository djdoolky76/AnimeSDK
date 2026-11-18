#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class UIInLevelQTEBtnPanelChildWindowController; }

#define MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTEFADEINOVERANIMEVENT_OFFSET UNITYSDK_OFFSET(0x12B74D70)
#define MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTEFADEOUTOVERANIMEVENT_OFFSET UNITYSDK_OFFSET(0x12B74EF0)
#define MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTETWEENBARANIMEVENT_OFFSET UNITYSDK_OFFSET(0x12B74BD0)
#define MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_SETMONOQTESWITCHAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x12B74B80)
#define MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B75090)

namespace MoleMole
{
	inline static constexpr unsigned int MonoQTEBtnAnimEvtsHandler_TypeDefinitionIndex = 85993;

	class MonoQTEBtnAnimEvtsHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::UIInLevelQTEBtnPanelChildWindowController* LLFGEGNNFIB; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void SetMonoQTESwitchAvatarPanel(::MoleMole::UIInLevelQTEBtnPanelChildWindowController* FMMIJOCCIAG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelQTEBtnPanelChildWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_SETMONOQTESWITCHAVATARPANEL_OFFSET))(this, FMMIJOCCIAG);
		}

		::System::Void PlayQTETweenBarAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTETWEENBARANIMEVENT_OFFSET))(this);
		}

		::System::Void PlayQTEFadeInOverAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTEFADEINOVERANIMEVENT_OFFSET))(this);
		}

		::System::Void PlayQTEFadeOutOverAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNANIMEVTSHANDLER_PLAYQTEFADEOUTOVERANIMEVENT_OFFSET))(this);
		}
	};
}
