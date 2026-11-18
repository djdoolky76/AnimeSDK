#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1191B9B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1191B9A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSetExitChatTransitionNode_TypeDefinitionIndex = 44184;

	class MainCityChatSetExitChatTransitionNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Int32 TransitionID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSETEXITCHATTRANSITIONNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
