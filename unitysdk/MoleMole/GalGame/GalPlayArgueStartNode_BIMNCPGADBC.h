#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlayArgueStartNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_BIMNCPGADBC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x139E54E0)
#define MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_BIMNCPGADBC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x139E54F0)
#define MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_BIMNCPGADBC_WRITE_OFFSET UNITYSDK_OFFSET(0x139E5D00)
#define MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_BIMNCPGADBC__CTOR_OFFSET UNITYSDK_OFFSET(0x139E61A0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayArgueStartNode_BIMNCPGADBC_TypeDefinitionIndex = 39940;

	class GalPlayArgueStartNode_BIMNCPGADBC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_BIMNCPGADBC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_BIMNCPGADBC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayArgueStartNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueStartNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_BIMNCPGADBC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayArgueStartNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueStartNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESTARTNODE_BIMNCPGADBC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
