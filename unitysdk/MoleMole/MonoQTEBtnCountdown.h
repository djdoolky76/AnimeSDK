#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole { class MonoQTESwitchAvatarPanel; }

#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTEFADEINOVERANIMEVENT_OFFSET UNITYSDK_OFFSET(0x18103A10)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTEFADEOUTOVERANIMEVENT_OFFSET UNITYSDK_OFFSET(0x18103B90)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTETWEENBARANIMEVENT_OFFSET UNITYSDK_OFFSET(0x18103870)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN_SETMONOQTESWITCHAVATARPANEL_OFFSET UNITYSDK_OFFSET(0x18103820)
#define MOLEMOLE_MONOQTEBTNCOUNTDOWN__CTOR_OFFSET UNITYSDK_OFFSET(0x18103D30)

namespace MoleMole
{
	inline static constexpr unsigned int MonoQTEBtnCountdown_TypeDefinitionIndex = 72389;

	class MonoQTEBtnCountdown : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::MonoQTESwitchAvatarPanel* CJIMKPHNLFN; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNCOUNTDOWN__CTOR_OFFSET))(this);
		}

		::System::Void SetMonoQTESwitchAvatarPanel(::MoleMole::MonoQTESwitchAvatarPanel* FMMIJOCCIAG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoQTESwitchAvatarPanel*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNCOUNTDOWN_SETMONOQTESWITCHAVATARPANEL_OFFSET))(this, FMMIJOCCIAG);
		}

		::System::Void PlayQTETweenBarAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTETWEENBARANIMEVENT_OFFSET))(this);
		}

		::System::Void PlayQTEFadeInOverAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTEFADEINOVERANIMEVENT_OFFSET))(this);
		}

		::System::Void PlayQTEFadeOutOverAnimEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOQTEBTNCOUNTDOWN_PLAYQTEFADEOUTOVERANIMEVENT_OFFSET))(this);
		}
	};
}
