#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class HNOMJDLHAOD;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x1357DD10)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x1357DD20)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1357DF00)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowTriDiceMissionConfig_TypeDefinitionIndex = 88028;

	class MainCityChatShowTriDiceMissionConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 startNodeID; // 0x10
		::System::Int32 endNodeID; // 0x14
		::System::Int32 questID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG__CTOR_OFFSET))(this);
		}

		::MIKOMFIBMBN get_UICtrl()
		{
			return ((::MIKOMFIBMBN(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::HNOMJDLHAOD* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::HNOMJDLHAOD*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWTRIDICEMISSIONCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}
	};
}
