#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatActionPlayNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_IKJGFKLGGMN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180EC460)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_IKJGFKLGGMN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180EC470)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_IKJGFKLGGMN_WRITE_OFFSET UNITYSDK_OFFSET(0x180EC6C0)
#define MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_IKJGFKLGGMN__CTOR_OFFSET UNITYSDK_OFFSET(0x180EC840)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatActionPlayNode_IKJGFKLGGMN_TypeDefinitionIndex = 57008;

	class MainCityChatActionPlayNode_IKJGFKLGGMN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_IKJGFKLGGMN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_IKJGFKLGGMN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatActionPlayNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatActionPlayNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_IKJGFKLGGMN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatActionPlayNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatActionPlayNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATACTIONPLAYNODE_IKJGFKLGGMN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
