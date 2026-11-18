#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_CHECKRESOURCETITLEACTIONNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x10D1ECF0)
#define MOLEMOLE_GALGAME_CHECKRESOURCETITLEACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1ECE0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int CheckResourceTitleActionNode_TypeDefinitionIndex = 83649;

	class CheckResourceTitleActionNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* ResourceTitleID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHECKRESOURCETITLEACTIONNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHECKRESOURCETITLEACTIONNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
