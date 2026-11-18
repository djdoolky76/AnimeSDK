#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalSubNarratorNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALSUBNARRATORNODE_BALHJLIGEOG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10423870)
#define MOLEMOLE_GALGAME_GALSUBNARRATORNODE_BALHJLIGEOG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10423880)
#define MOLEMOLE_GALGAME_GALSUBNARRATORNODE_BALHJLIGEOG_WRITE_OFFSET UNITYSDK_OFFSET(0x10423E10)
#define MOLEMOLE_GALGAME_GALSUBNARRATORNODE_BALHJLIGEOG__CTOR_OFFSET UNITYSDK_OFFSET(0x10424150)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSubNarratorNode_BALHJLIGEOG_TypeDefinitionIndex = 90189;

	class GalSubNarratorNode_BALHJLIGEOG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSUBNARRATORNODE_BALHJLIGEOG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSUBNARRATORNODE_BALHJLIGEOG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSubNarratorNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSubNarratorNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSUBNARRATORNODE_BALHJLIGEOG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalSubNarratorNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSubNarratorNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSUBNARRATORNODE_BALHJLIGEOG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
