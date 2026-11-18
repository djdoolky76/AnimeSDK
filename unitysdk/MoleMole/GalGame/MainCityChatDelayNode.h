#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x130DB3B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x130DB3A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatDelayNode_TypeDefinitionIndex = 92600;

	class MainCityChatDelayNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Single delayTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
