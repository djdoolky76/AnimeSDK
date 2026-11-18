#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatRandomNextNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_JJMJJIKAANE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1191B580)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_JJMJJIKAANE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1191B590)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_JJMJJIKAANE_WRITE_OFFSET UNITYSDK_OFFSET(0x1191B7E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_JJMJJIKAANE__CTOR_OFFSET UNITYSDK_OFFSET(0x1191B960)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatRandomNextNode_JJMJJIKAANE_TypeDefinitionIndex = 79930;

	class MainCityChatRandomNextNode_JJMJJIKAANE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_JJMJJIKAANE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_JJMJJIKAANE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatRandomNextNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomNextNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_JJMJJIKAANE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatRandomNextNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomNextNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMNEXTNODE_JJMJJIKAANE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
