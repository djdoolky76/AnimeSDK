#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayStoryNode_SwitchContinuousShakeType.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class ArgueStoryNodeConfig; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE1590)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayStoryNode_TypeDefinitionIndex = 44660;

	class GalPlayStoryNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::ArgueStoryNodeConfig* argueStoryNodeConfig; // 0x20
		::System::String* singleShakeKey; // 0x28
		::System::String* externalVoiceKey; // 0x30
		::System::String* avatarPoseKey; // 0x38
		::MoleMole::GalGame::GalSwitchPoseRelatedParam* switchPoseRelatedParam; // 0x40
		::System::String* dialogueKey; // 0x48
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x50
		::System::String* avatarName; // 0x58
		::System::String* avatarFacialKey; // 0x60
		::System::String* avatarShowingKey; // 0x68
		::System::String* soundKey; // 0x70
		::System::String* whiteScreenShakeAudioEventID; // 0x78
		::System::Single whiteScreenShakeDelay; // 0x80
		::System::Int32 actorId; // 0x84
		::System::Boolean isChangingShakeMode; // 0x88
		::System::Boolean enableWhiteScreenShaking; // 0x89
		::System::Byte _padding0[0x2];
		::MoleMole::GalGame::GalPlayStoryNode_SwitchContinuousShakeType switchContinuousShakeType; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSTORYNODE__CTOR_OFFSET))(this);
		}
	};
}
