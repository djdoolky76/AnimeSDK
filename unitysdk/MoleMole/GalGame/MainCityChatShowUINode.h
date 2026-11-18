#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class MainCityChatBranchItem; }
namespace MoleMole::GalGame { class MainCityChatShowUIConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1357DF20)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1357DF10)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUINode_TypeDefinitionIndex = 63509;

	class MainCityChatShowUINode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::MainCityChatShowUIConfig* Config; // 0x18
		::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatBranchItem*>* transitionList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
