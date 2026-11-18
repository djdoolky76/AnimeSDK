#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatSyncServerDataConfig.h"

namespace System { class Action; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x12464C00)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_STARTSYNC_OFFSET UNITYSDK_OFFSET(0x12464C10)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12464F90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncMessageConfig_TypeDefinitionIndex = 70027;

	class MainCityChatSyncMessageConfig : public ::MoleMole::GalGame::MainCityChatSyncServerDataConfig
	{
	public:
		::System::Int32 MessageGroupId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG__CTOR_OFFSET))(this);
		}

		::MIKOMFIBMBN get_UICtrl()
		{
			return ((::MIKOMFIBMBN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void StartSync(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_STARTSYNC_OFFSET))(this, callback);
		}
	};
}
