#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x12B423D0)
#define MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B423C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatChangeEffectStateNode_TypeDefinitionIndex = 50470;

	class ChatChangeEffectStateNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* StateKey; // 0x18
		::System::String* MemberID; // 0x20
		::System::Int32 NpcTagID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_CHATCHANGEEFFECTSTATENODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
