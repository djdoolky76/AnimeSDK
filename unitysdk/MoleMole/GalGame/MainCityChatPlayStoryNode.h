#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatPlayableNodeBase.h"

class BAPNBOCDBHM;
namespace MoleMole { class UIBaseChatPlayController; }
namespace MoleMole { class UIMainCityChatPlayContext; }
namespace MoleMole::GalGame { class SpeakerActionCfg; }
namespace System { class String; }

#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_INSTANTIATE_OFFSET UNITYSDK_OFFSET(0x10D20D10)
#define MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10D20CF0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatPlayStoryNode_TypeDefinitionIndex = 91289;

	class MainCityChatPlayStoryNode : public ::MoleMole::GalGame::MainCityChatPlayableNodeBase
	{
	public:
		::System::String* avatarName; // 0x18
		::System::String* soundEvent; // 0x20
		::System::String* dialogueKey; // 0x28
		::System::String* externalVoiceKey; // 0x30
		::System::String* avatarShowingKey; // 0x38
		::MoleMole::GalGame::SpeakerActionCfg* speakerCfg; // 0x40
		::System::String* soundAction; // 0x48
		::System::Int32 actionDelay; // 0x50
		::System::Int32 avatarId; // 0x54
		::MoleMole::GalGame::MainCityChatNPCLocation npcLocation; // 0x58
		::System::Int32 soundEventType; // 0x5C
		::System::Boolean hideAvatarName; // 0x60
		::System::Boolean autoDoNext; // 0x61
		::System::Boolean triggerOnFinish; // 0x62
		::System::Boolean showBlackMask; // 0x63
		::System::Single speakSpeed; // 0x64
		::System::Single time; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE__CTOR_OFFSET))(this);
		}

		::BAPNBOCDBHM* Instantiate(::MoleMole::UIBaseChatPlayController* controller, ::MoleMole::UIMainCityChatPlayContext* context)
		{
			return ((::BAPNBOCDBHM*(*)(::PVOID, ::MoleMole::UIBaseChatPlayController*, ::MoleMole::UIMainCityChatPlayContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATPLAYSTORYNODE_INSTANTIATE_OFFSET))(this, controller, context);
		}
	};
}
