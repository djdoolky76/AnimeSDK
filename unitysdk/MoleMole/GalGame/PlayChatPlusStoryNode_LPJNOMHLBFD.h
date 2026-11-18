#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class PlayChatPlusStoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_LPJNOMHLBFD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13EE38E0)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_LPJNOMHLBFD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13EE38F0)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_LPJNOMHLBFD_WRITE_OFFSET UNITYSDK_OFFSET(0x13EE4430)
#define MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_LPJNOMHLBFD__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE4A90)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int PlayChatPlusStoryNode_LPJNOMHLBFD_TypeDefinitionIndex = 63497;

	class PlayChatPlusStoryNode_LPJNOMHLBFD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_LPJNOMHLBFD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_LPJNOMHLBFD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::PlayChatPlusStoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::PlayChatPlusStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_LPJNOMHLBFD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::PlayChatPlusStoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::PlayChatPlusStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYCHATPLUSSTORYNODE_LPJNOMHLBFD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
