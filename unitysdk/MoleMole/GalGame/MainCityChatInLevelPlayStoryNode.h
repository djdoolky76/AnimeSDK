#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/InLevelChatEntitySlot.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::Battle { class AnimatorParamControl; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x124638B0)
#define MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x124638A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatInLevelPlayStoryNode_TypeDefinitionIndex = 91893;

	class MainCityChatInLevelPlayStoryNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::MoleMole::Battle::AnimatorParamControl* animatorParamControl; // 0x18
		::System::String* dialogueKey; // 0x20
		::System::String* showName; // 0x28
		::System::Single time; // 0x30
		::System::Int32 actionDelay; // 0x34
		::MoleMole::GalGame::InLevelChatEntitySlot ChatEntitySlot; // 0x38
		::System::Single speakSpeed; // 0x3C
		::System::Boolean triggerOnFinish; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATINLEVELPLAYSTORYNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
