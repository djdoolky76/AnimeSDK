#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatChangeNpcNameNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_AGBMOOLLOFB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A8F6660)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_AGBMOOLLOFB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A8F6670)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_AGBMOOLLOFB_WRITE_OFFSET UNITYSDK_OFFSET(0x1A8F6980)
#define MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_AGBMOOLLOFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F6B60)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatChangeNpcNameNode_AGBMOOLLOFB_TypeDefinitionIndex = 70055;

	class MainCityChatChangeNpcNameNode_AGBMOOLLOFB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_AGBMOOLLOFB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_AGBMOOLLOFB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatChangeNpcNameNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatChangeNpcNameNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_AGBMOOLLOFB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatChangeNpcNameNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatChangeNpcNameNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCHANGENPCNAMENODE_AGBMOOLLOFB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
