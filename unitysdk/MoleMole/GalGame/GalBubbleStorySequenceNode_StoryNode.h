#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETNPCSTIMULUSID_OFFSET UNITYSDK_OFFSET(0x124624F0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETSPEAKER_OFFSET UNITYSDK_OFFSET(0x12462650)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETTEXT_OFFSET UNITYSDK_OFFSET(0x12462500)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETVOICEOREVENT_OFFSET UNITYSDK_OFFSET(0x12462520)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETVOICE_OFFSET UNITYSDK_OFFSET(0x12462510)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x12462660)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStorySequenceNode_StoryNode_TypeDefinitionIndex = 65344;

	class GalBubbleStorySequenceNode_StoryNode : public ::System::Object
	{
	public:
		::System::String* EventA; // 0x10
		::System::Int32 NPCStimulusID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* Speaker; // 0x20
		::System::String* Text; // 0x28
		::System::String* Voice; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_GetNPCStimulusID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETNPCSTIMULUSID_OFFSET))(this);
		}

		::System::String* get_GetText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETTEXT_OFFSET))(this);
		}

		::System::String* get_GetVoice()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETVOICE_OFFSET))(this);
		}

		::System::String* get_GetVoiceOrEvent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETVOICEOREVENT_OFFSET))(this);
		}

		::System::String* get_GetSpeaker()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_GET_GETSPEAKER_OFFSET))(this);
		}
	};
}
