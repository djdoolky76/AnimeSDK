#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatSyncServerDataNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_HPHAGIJLFDD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1466BED0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_HPHAGIJLFDD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1466BEE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_HPHAGIJLFDD_WRITE_OFFSET UNITYSDK_OFFSET(0x1466C130)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_HPHAGIJLFDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1466C2B0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncServerDataNode_HPHAGIJLFDD_TypeDefinitionIndex = 55627;

	class MainCityChatSyncServerDataNode_HPHAGIJLFDD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_HPHAGIJLFDD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_HPHAGIJLFDD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatSyncServerDataNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSyncServerDataNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_HPHAGIJLFDD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatSyncServerDataNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatSyncServerDataNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCSERVERDATANODE_HPHAGIJLFDD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
