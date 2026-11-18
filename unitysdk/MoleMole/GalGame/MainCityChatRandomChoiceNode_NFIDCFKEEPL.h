#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatRandomChoiceNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_NFIDCFKEEPL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A8F6BA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_NFIDCFKEEPL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A8F6BB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_NFIDCFKEEPL_WRITE_OFFSET UNITYSDK_OFFSET(0x1A8F6E00)
#define MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_NFIDCFKEEPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F6F80)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatRandomChoiceNode_NFIDCFKEEPL_TypeDefinitionIndex = 70222;

	class MainCityChatRandomChoiceNode_NFIDCFKEEPL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_NFIDCFKEEPL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_NFIDCFKEEPL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatRandomChoiceNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_NFIDCFKEEPL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatRandomChoiceNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatRandomChoiceNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATRANDOMCHOICENODE_NFIDCFKEEPL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
