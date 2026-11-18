#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalPlayPictureStoryNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_LLDOCMCNOFN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180EACF0)
#define MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_LLDOCMCNOFN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180EAD00)
#define MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_LLDOCMCNOFN_WRITE_OFFSET UNITYSDK_OFFSET(0x180EB290)
#define MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_LLDOCMCNOFN__CTOR_OFFSET UNITYSDK_OFFSET(0x180EB5D0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayPictureStoryNode_LLDOCMCNOFN_TypeDefinitionIndex = 91651;

	class GalPlayPictureStoryNode_LLDOCMCNOFN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_LLDOCMCNOFN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_LLDOCMCNOFN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalPlayPictureStoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalPlayPictureStoryNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_LLDOCMCNOFN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalPlayPictureStoryNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalPlayPictureStoryNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALPLAYPICTURESTORYNODE_LLDOCMCNOFN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
