#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlayArgueSettleNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_EOAHJDKACIN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x124626C0)
#define MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_EOAHJDKACIN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x124626D0)
#define MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_EOAHJDKACIN_WRITE_OFFSET UNITYSDK_OFFSET(0x12462C60)
#define MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_EOAHJDKACIN__CTOR_OFFSET UNITYSDK_OFFSET(0x12462FA0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayArgueSettleNode_EOAHJDKACIN_TypeDefinitionIndex = 87402;

	class GalPlayArgueSettleNode_EOAHJDKACIN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_EOAHJDKACIN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_EOAHJDKACIN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayArgueSettleNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueSettleNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_EOAHJDKACIN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayArgueSettleNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayArgueSettleNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYARGUESETTLENODE_EOAHJDKACIN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
