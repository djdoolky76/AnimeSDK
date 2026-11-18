#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::GalGame { class TagGroupAniPair; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_GALGAME_TAGGROUPANIPAIR_MNEPMEKNHIL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x13EE4B30)
#define MOLEMOLE_GALGAME_TAGGROUPANIPAIR_MNEPMEKNHIL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x13EE4B40)
#define MOLEMOLE_GALGAME_TAGGROUPANIPAIR_MNEPMEKNHIL_WRITE_OFFSET UNITYSDK_OFFSET(0x13EE4CD0)
#define MOLEMOLE_GALGAME_TAGGROUPANIPAIR_MNEPMEKNHIL__CTOR_OFFSET UNITYSDK_OFFSET(0x13EE4DF0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int TagGroupAniPair_MNEPMEKNHIL_TypeDefinitionIndex = 73155;

	class TagGroupAniPair_MNEPMEKNHIL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPANIPAIR_MNEPMEKNHIL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPANIPAIR_MNEPMEKNHIL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::GalGame::TagGroupAniPair*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::GalGame::TagGroupAniPair*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPANIPAIR_MNEPMEKNHIL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::GalGame::TagGroupAniPair*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::TagGroupAniPair*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_TAGGROUPANIPAIR_MNEPMEKNHIL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
