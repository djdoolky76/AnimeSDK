#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class ChatPlusInitCfg; }

#define MOLEMOLE_GALGAME_CHATPLUSINITNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x14AE9520)
#define MOLEMOLE_GALGAME_CHATPLUSINITNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE9510)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatPlusInitNode_TypeDefinitionIndex = 42216;

	class ChatPlusInitNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::ChatPlusInitCfg* Cfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATPLUSINITNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
