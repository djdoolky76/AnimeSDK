#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBangkovHandInNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_GOCKKHOIGOO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11918E80)
#define MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_GOCKKHOIGOO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11918E90)
#define MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_GOCKKHOIGOO_WRITE_OFFSET UNITYSDK_OFFSET(0x11919240)
#define MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_GOCKKHOIGOO__CTOR_OFFSET UNITYSDK_OFFSET(0x11919470)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBangkovHandInNode_GOCKKHOIGOO_TypeDefinitionIndex = 73338;

	class MainCityChatBangkovHandInNode_GOCKKHOIGOO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_GOCKKHOIGOO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_GOCKKHOIGOO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatBangkovHandInNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBangkovHandInNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_GOCKKHOIGOO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatBangkovHandInNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBangkovHandInNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBANGKOVHANDINNODE_GOCKKHOIGOO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
