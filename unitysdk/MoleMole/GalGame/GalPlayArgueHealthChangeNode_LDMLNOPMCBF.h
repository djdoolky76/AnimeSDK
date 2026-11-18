#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlayArgueHealthChangeNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_LDMLNOPMCBF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x139E4BC0)
#define MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_LDMLNOPMCBF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x139E4BD0)
#define MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_LDMLNOPMCBF_WRITE_OFFSET UNITYSDK_OFFSET(0x139E5160)
#define MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_LDMLNOPMCBF__CTOR_OFFSET UNITYSDK_OFFSET(0x139E54A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayArgueHealthChangeNode_LDMLNOPMCBF_TypeDefinitionIndex = 60956;

	class GalPlayArgueHealthChangeNode_LDMLNOPMCBF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_LDMLNOPMCBF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_LDMLNOPMCBF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayArgueHealthChangeNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueHealthChangeNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_LDMLNOPMCBF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayArgueHealthChangeNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueHealthChangeNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUEHEALTHCHANGENODE_LDMLNOPMCBF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
