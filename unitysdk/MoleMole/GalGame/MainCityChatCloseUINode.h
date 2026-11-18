#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCLOSEUINODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x162C9630)
#define MOLEMOLE_GALGAME_MAINCITYCHATCLOSEUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x162C9620)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatCloseUINode_TypeDefinitionIndex = 59526;

	class MainCityChatCloseUINode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCLOSEUINODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCLOSEUINODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
