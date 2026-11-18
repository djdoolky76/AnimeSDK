#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class AttachEffectCfg; }

#define MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x130D9470)
#define MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x130D9460)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatAttachEffectNode_TypeDefinitionIndex = 80104;

	class ChatAttachEffectNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::AttachEffectCfg* Cfg; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATATTACHEFFECTNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
