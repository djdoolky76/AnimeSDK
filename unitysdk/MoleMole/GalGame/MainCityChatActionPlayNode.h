#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class MainCityChatActionBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x162C8EF0)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x162C8EE0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatActionPlayNode_TypeDefinitionIndex = 57007;

	class MainCityChatActionPlayNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::MainCityChatActionBase*>* actionList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
