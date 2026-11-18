#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatShowUINode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_OICEGPPFECK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1191BAB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_OICEGPPFECK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1191BAC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_OICEGPPFECK_WRITE_OFFSET UNITYSDK_OFFSET(0x1191BDD0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_OICEGPPFECK__CTOR_OFFSET UNITYSDK_OFFSET(0x1191BFB0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowUINode_OICEGPPFECK_TypeDefinitionIndex = 63510;

	class MainCityChatShowUINode_OICEGPPFECK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_OICEGPPFECK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_OICEGPPFECK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatShowUINode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUINode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_OICEGPPFECK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatShowUINode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatShowUINode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWUINODE_OICEGPPFECK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
