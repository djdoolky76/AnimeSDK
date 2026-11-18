#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class MiniGameRecordNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_MINIGAMERECORDNODE_GNJLIPMINBM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x130DC0C0)
#define MOLEMOLE_GALGAME_MINIGAMERECORDNODE_GNJLIPMINBM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x130DC0D0)
#define MOLEMOLE_GALGAME_MINIGAMERECORDNODE_GNJLIPMINBM_WRITE_OFFSET UNITYSDK_OFFSET(0x130DC3E0)
#define MOLEMOLE_GALGAME_MINIGAMERECORDNODE_GNJLIPMINBM__CTOR_OFFSET UNITYSDK_OFFSET(0x130DC5C0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MiniGameRecordNode_GNJLIPMINBM_TypeDefinitionIndex = 55543;

	class MiniGameRecordNode_GNJLIPMINBM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MINIGAMERECORDNODE_GNJLIPMINBM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MINIGAMERECORDNODE_GNJLIPMINBM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::MiniGameRecordNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::MiniGameRecordNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MINIGAMERECORDNODE_GNJLIPMINBM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::MiniGameRecordNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::MiniGameRecordNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MINIGAMERECORDNODE_GNJLIPMINBM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
