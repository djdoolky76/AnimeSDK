#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class HNOMJDLHAOD;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x10D21320)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x10D21330)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D21630)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowTriDiceInfoDialogConfig_TypeDefinitionIndex = 72845;

	class MainCityChatShowTriDiceInfoDialogConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 startNodeID; // 0x10
		::System::Int32 endNodeID; // 0x14
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG__CTOR_OFFSET))(this);
		}

		::MIKOMFIBMBN get_UICtrl()
		{
			return ((::MIKOMFIBMBN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::HNOMJDLHAOD* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::HNOMJDLHAOD*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEINFODIALOGCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}
	};
}
