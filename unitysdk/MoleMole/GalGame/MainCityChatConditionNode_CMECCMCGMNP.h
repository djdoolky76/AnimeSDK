#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MainCityChatConditionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CMECCMCGMNP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14AEA590)
#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CMECCMCGMNP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14AEA5A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CMECCMCGMNP_WRITE_OFFSET UNITYSDK_OFFSET(0x14AEA950)
#define MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CMECCMCGMNP__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEAB80)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatConditionNode_CMECCMCGMNP_TypeDefinitionIndex = 69456;

	class MainCityChatConditionNode_CMECCMCGMNP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CMECCMCGMNP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CMECCMCGMNP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MainCityChatConditionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MainCityChatConditionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CMECCMCGMNP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MainCityChatConditionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MainCityChatConditionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATCONDITIONNODE_CMECCMCGMNP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
