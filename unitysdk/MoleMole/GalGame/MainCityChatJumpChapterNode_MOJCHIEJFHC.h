#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatJumpChapterNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_MOJCHIEJFHC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180EC880)
#define MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_MOJCHIEJFHC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180EC890)
#define MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_MOJCHIEJFHC_WRITE_OFFSET UNITYSDK_OFFSET(0x180ECBA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_MOJCHIEJFHC__CTOR_OFFSET UNITYSDK_OFFSET(0x180ECD80)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatJumpChapterNode_MOJCHIEJFHC_TypeDefinitionIndex = 54516;

	class MainCityChatJumpChapterNode_MOJCHIEJFHC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_MOJCHIEJFHC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_MOJCHIEJFHC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatJumpChapterNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatJumpChapterNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_MOJCHIEJFHC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatJumpChapterNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatJumpChapterNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATJUMPCHAPTERNODE_MOJCHIEJFHC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
