#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }

#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONSTARTNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x13EE37D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONSTARTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE37C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatTransitionStartNode_TypeDefinitionIndex = 59763;

	class MainCityChatTransitionStartNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::Boolean IsBegin; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONSTARTNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATTRANSITIONSTARTNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
