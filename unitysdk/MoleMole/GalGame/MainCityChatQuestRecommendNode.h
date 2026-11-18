#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x139E6720)
#define MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x139E6710)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatQuestRecommendNode_TypeDefinitionIndex = 56202;

	class MainCityChatQuestRecommendNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATQUESTRECOMMENDNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
