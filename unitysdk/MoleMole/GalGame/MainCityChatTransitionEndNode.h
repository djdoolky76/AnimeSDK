#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONENDNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1357DFE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONENDNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1357DFD0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionEndNode_TypeDefinitionIndex = 50336;

	class MainCityChatTransitionEndNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONENDNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONENDNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
