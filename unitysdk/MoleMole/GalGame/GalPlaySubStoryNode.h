#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class GalSwitchPoseRelatedParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x130DA5B0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlaySubStoryNode_TypeDefinitionIndex = 44392;

	class GalPlaySubStoryNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x20
		::System::String* avatarPoseKey; // 0x28
		::System::String* avatarShowingKey; // 0x30
		::MoleMole::GalGame::GalSwitchPoseRelatedParam* switchPoseRelatedParam; // 0x38
		::System::String* avatarFacialKey; // 0x40
		::System::String* whiteScreenShakeAudioEventID; // 0x48
		::System::String* soundKey; // 0x50
		::System::Boolean enableWhiteScreenShaking; // 0x58
		::System::Byte _padding0[0x3];
		::System::Int32 actorId; // 0x5C
		::MoleMole::GalGame::GalNPCLocation npcLocation; // 0x60
		::System::Single whiteScreenShakeDelay; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSUBSTORYNODE__CTOR_OFFSET))(this);
		}
	};
}
