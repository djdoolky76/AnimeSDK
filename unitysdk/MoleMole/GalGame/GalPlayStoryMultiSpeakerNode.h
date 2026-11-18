#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GalGame/GalPlayableNodeBase.h"

namespace MoleMole::GalGame { class ArgueStoryNodeConfig; }
namespace MoleMole::GalGame { class AudioEventItem; }
namespace MoleMole::GalGame { class GalSingleSpeakerData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GALGAME_GALPLAYSTORYMULTISPEAKERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11918E10)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayStoryMultiSpeakerNode_TypeDefinitionIndex = 80853;

	class GalPlayStoryMultiSpeakerNode : public ::MoleMole::GalGame::GalPlayableNodeBase
	{
	public:
		::MoleMole::GalGame::ArgueStoryNodeConfig* argueStoryNodeConfig; // 0x20
		::System::String* dialogueKey; // 0x28
		::System::String* externalVoiceKey; // 0x30
		::System::String* soundKey; // 0x38
		::System::Collections::Generic::List_1<::MoleMole::GalGame::GalSingleSpeakerData*>* SpeakerDataList; // 0x40
		::System::Collections::Generic::List_1<::MoleMole::GalGame::AudioEventItem*>* audioEventItems; // 0x48
		::System::String* speakerName; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYSTORYMULTISPEAKERNODE__CTOR_OFFSET))(this);
		}
	};
}
