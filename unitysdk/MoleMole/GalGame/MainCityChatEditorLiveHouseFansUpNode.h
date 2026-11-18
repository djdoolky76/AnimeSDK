#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x130DB4D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x130DB4C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatEditorLiveHouseFansUpNode_TypeDefinitionIndex = 81874;

	class MainCityChatEditorLiveHouseFansUpNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Int32 headid; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATEDITORLIVEHOUSEFANSUPNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
