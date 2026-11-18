#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_RESOURCEDELETECHECKNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x1466C480)
#define MOLEMOLE_GALGAME_RESOURCEDELETECHECKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1466C410)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ResourceDeleteCheckNode_TypeDefinitionIndex = 64310;

	class ResourceDeleteCheckNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* ResTags; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_RESOURCEDELETECHECKNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_RESOURCEDELETECHECKNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
