#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalSoundActionNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_PHNJPBMHOCK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10423320)
#define MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_PHNJPBMHOCK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10423330)
#define MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_PHNJPBMHOCK_WRITE_OFFSET UNITYSDK_OFFSET(0x10423640)
#define MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_PHNJPBMHOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x10423810)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSoundActionNode_PHNJPBMHOCK_TypeDefinitionIndex = 56721;

	class GalSoundActionNode_PHNJPBMHOCK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_PHNJPBMHOCK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_PHNJPBMHOCK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSoundActionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSoundActionNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_PHNJPBMHOCK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalSoundActionNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSoundActionNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSOUNDACTIONNODE_PHNJPBMHOCK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
