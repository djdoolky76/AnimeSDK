#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalSetSpecialsNode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALSETSPECIALSNODE_PHLCHDPIJGB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A8F5E60)
#define MOLEMOLE_GALGAME_GALSETSPECIALSNODE_PHLCHDPIJGB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A8F5E70)
#define MOLEMOLE_GALGAME_GALSETSPECIALSNODE_PHLCHDPIJGB_WRITE_OFFSET UNITYSDK_OFFSET(0x1A8F6180)
#define MOLEMOLE_GALGAME_GALSETSPECIALSNODE_PHLCHDPIJGB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F6350)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalSetSpecialsNode_PHLCHDPIJGB_TypeDefinitionIndex = 49419;

	class GalSetSpecialsNode_PHLCHDPIJGB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSETSPECIALSNODE_PHLCHDPIJGB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSETSPECIALSNODE_PHLCHDPIJGB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalSetSpecialsNode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalSetSpecialsNode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSETSPECIALSNODE_PHLCHDPIJGB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalSetSpecialsNode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalSetSpecialsNode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALSETSPECIALSNODE_PHLCHDPIJGB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
