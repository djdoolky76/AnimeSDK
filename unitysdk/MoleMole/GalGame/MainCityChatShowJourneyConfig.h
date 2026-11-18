#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class HNOMJDLHAOD;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x12B45690)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x12B456A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x12B45BE0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowJourneyConfig_TypeDefinitionIndex = 74027;

	class MainCityChatShowJourneyConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 startNodeID; // 0x10
		::System::Int32 endNodeID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG__CTOR_OFFSET))(this);
		}

		::MIKOMFIBMBN get_UICtrl()
		{
			return ((::MIKOMFIBMBN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::HNOMJDLHAOD* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::HNOMJDLHAOD*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}
	};
}
