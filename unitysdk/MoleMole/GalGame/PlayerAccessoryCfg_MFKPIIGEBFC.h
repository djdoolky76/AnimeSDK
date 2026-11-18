#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class PlayerAccessoryCfg; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_PLAYERACCESSORYCFG_MFKPIIGEBFC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x180ECF70)
#define MOLEMOLE_GALGAME_PLAYERACCESSORYCFG_MFKPIIGEBFC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x180ECF80)
#define MOLEMOLE_GALGAME_PLAYERACCESSORYCFG_MFKPIIGEBFC_WRITE_OFFSET UNITYSDK_OFFSET(0x180ED1D0)
#define MOLEMOLE_GALGAME_PLAYERACCESSORYCFG_MFKPIIGEBFC__CTOR_OFFSET UNITYSDK_OFFSET(0x180ED350)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int PlayerAccessoryCfg_MFKPIIGEBFC_TypeDefinitionIndex = 67545;

	class PlayerAccessoryCfg_MFKPIIGEBFC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYERACCESSORYCFG_MFKPIIGEBFC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYERACCESSORYCFG_MFKPIIGEBFC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::PlayerAccessoryCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::PlayerAccessoryCfg*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYERACCESSORYCFG_MFKPIIGEBFC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::PlayerAccessoryCfg*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::PlayerAccessoryCfg*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_PLAYERACCESSORYCFG_MFKPIIGEBFC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
