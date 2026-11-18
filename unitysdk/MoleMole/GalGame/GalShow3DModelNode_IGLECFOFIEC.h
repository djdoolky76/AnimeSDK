#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalShow3DModelNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_IGLECFOFIEC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130DA610)
#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_IGLECFOFIEC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130DA620)
#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_IGLECFOFIEC_WRITE_OFFSET UNITYSDK_OFFSET(0x130DA9D0)
#define MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_IGLECFOFIEC__CTOR_OFFSET UNITYSDK_OFFSET(0x130DAC00)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalShow3DModelNode_IGLECFOFIEC_TypeDefinitionIndex = 49440;

	class GalShow3DModelNode_IGLECFOFIEC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_IGLECFOFIEC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_IGLECFOFIEC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalShow3DModelNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalShow3DModelNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_IGLECFOFIEC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalShow3DModelNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalShow3DModelNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSHOW3DMODELNODE_IGLECFOFIEC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
