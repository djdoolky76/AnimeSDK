#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatDelayNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_HJDLADAFMAC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13EE1C10)
#define MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_HJDLADAFMAC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13EE1C20)
#define MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_HJDLADAFMAC_WRITE_OFFSET UNITYSDK_OFFSET(0x13EE1E70)
#define MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_HJDLADAFMAC__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE1FF0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatDelayNode_HJDLADAFMAC_TypeDefinitionIndex = 92601;

	class MainCityChatDelayNode_HJDLADAFMAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_HJDLADAFMAC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_HJDLADAFMAC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatDelayNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatDelayNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_HJDLADAFMAC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatDelayNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatDelayNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATDELAYNODE_HJDLADAFMAC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
