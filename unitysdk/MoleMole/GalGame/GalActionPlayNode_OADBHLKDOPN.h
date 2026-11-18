#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalActionPlayNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALACTIONPLAYNODE_OADBHLKDOPN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x162456B0)
#define MOLEMOLE_GALGAME_GALACTIONPLAYNODE_OADBHLKDOPN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x162456C0)
#define MOLEMOLE_GALGAME_GALACTIONPLAYNODE_OADBHLKDOPN_WRITE_OFFSET UNITYSDK_OFFSET(0x162459D0)
#define MOLEMOLE_GALGAME_GALACTIONPLAYNODE_OADBHLKDOPN__CTOR_OFFSET UNITYSDK_OFFSET(0x16245BA0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalActionPlayNode_OADBHLKDOPN_TypeDefinitionIndex = 70061;

	class GalActionPlayNode_OADBHLKDOPN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALACTIONPLAYNODE_OADBHLKDOPN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALACTIONPLAYNODE_OADBHLKDOPN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalActionPlayNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalActionPlayNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALACTIONPLAYNODE_OADBHLKDOPN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalActionPlayNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalActionPlayNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALACTIONPLAYNODE_OADBHLKDOPN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
