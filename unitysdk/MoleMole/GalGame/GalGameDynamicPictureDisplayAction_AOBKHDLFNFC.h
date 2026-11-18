#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class GalGameDynamicPictureDisplayAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_AOBKHDLFNFC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12B424D0)
#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_AOBKHDLFNFC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12B424E0)
#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_AOBKHDLFNFC_WRITE_OFFSET UNITYSDK_OFFSET(0x12B42930)
#define MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_AOBKHDLFNFC__CTOR_OFFSET UNITYSDK_OFFSET(0x12B42BC0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalGameDynamicPictureDisplayAction_AOBKHDLFNFC_TypeDefinitionIndex = 89380;

	class GalGameDynamicPictureDisplayAction_AOBKHDLFNFC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_AOBKHDLFNFC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_AOBKHDLFNFC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_AOBKHDLFNFC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalGameDynamicPictureDisplayAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_GALGAMEDYNAMICPICTUREDISPLAYACTION_AOBKHDLFNFC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
