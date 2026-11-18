#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlayBGMNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALPLAYBGMNODE_DGNFKJILNJG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180EA6C0)
#define MOLEMOLE_GALGAME_GALPLAYBGMNODE_DGNFKJILNJG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180EA6D0)
#define MOLEMOLE_GALGAME_GALPLAYBGMNODE_DGNFKJILNJG_WRITE_OFFSET UNITYSDK_OFFSET(0x180EAA80)
#define MOLEMOLE_GALGAME_GALPLAYBGMNODE_DGNFKJILNJG__CTOR_OFFSET UNITYSDK_OFFSET(0x180EACB0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayBGMNode_DGNFKJILNJG_TypeDefinitionIndex = 46701;

	class GalPlayBGMNode_DGNFKJILNJG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYBGMNODE_DGNFKJILNJG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYBGMNODE_DGNFKJILNJG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayBGMNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayBGMNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYBGMNODE_DGNFKJILNJG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayBGMNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayBGMNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYBGMNODE_DGNFKJILNJG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
