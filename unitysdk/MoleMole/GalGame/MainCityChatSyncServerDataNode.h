#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class MainCityChatSyncServerDataConfig; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x130DBE90)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE__CTOR_OFFSET UNITYSDK_OFFSET(0x130DBE80)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncServerDataNode_TypeDefinitionIndex = 55626;

	class MainCityChatSyncServerDataNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::MainCityChatSyncServerDataConfig* Config; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
