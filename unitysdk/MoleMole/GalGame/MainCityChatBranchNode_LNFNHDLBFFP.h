#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatBranchNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_LNFNHDLBFFP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11919BE0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_LNFNHDLBFFP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11919BF0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_LNFNHDLBFFP_WRITE_OFFSET UNITYSDK_OFFSET(0x11919FA0)
#define MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_LNFNHDLBFFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1191A1D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatBranchNode_LNFNHDLBFFP_TypeDefinitionIndex = 87676;

	class MainCityChatBranchNode_LNFNHDLBFFP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_LNFNHDLBFFP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_LNFNHDLBFFP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatBranchNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBranchNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_LNFNHDLBFFP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatBranchNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatBranchNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATBRANCHNODE_LNFNHDLBFFP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
