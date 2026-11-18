#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalBubbleStorySequenceNode_StoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_LELLJMNPDPE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A8F4EB0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_LELLJMNPDPE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A8F4EC0)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_LELLJMNPDPE_WRITE_OFFSET UNITYSDK_OFFSET(0x1A8F5270)
#define MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_LELLJMNPDPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F54A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalBubbleStorySequenceNode_StoryNode_LELLJMNPDPE_TypeDefinitionIndex = 65345;

	class GalBubbleStorySequenceNode_StoryNode_LELLJMNPDPE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_LELLJMNPDPE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_LELLJMNPDPE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_LELLJMNPDPE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalBubbleStorySequenceNode_StoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALBUBBLESTORYSEQUENCENODE_STORYNODE_LELLJMNPDPE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
