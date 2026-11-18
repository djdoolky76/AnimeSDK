#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class TransitionWithActionsCfg; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1357E090)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1357E080)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionWithActionsNode_TypeDefinitionIndex = 47260;

	class MainCityChatTransitionWithActionsNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::TransitionWithActionsCfg* Cfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONWITHACTIONSNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
