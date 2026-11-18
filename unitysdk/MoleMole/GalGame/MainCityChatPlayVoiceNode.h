#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x130DBBB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x130DBBA0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayVoiceNode_TypeDefinitionIndex = 79637;

	class MainCityChatPlayVoiceNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* voiceKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYVOICENODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
