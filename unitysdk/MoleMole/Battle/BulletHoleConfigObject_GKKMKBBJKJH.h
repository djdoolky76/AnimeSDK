#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Battle { class BulletHoleConfigObject; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_GKKMKBBJKJH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5AA6C0)
#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_GKKMKBBJKJH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C5AA6D0)
#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_GKKMKBBJKJH_WRITE_OFFSET UNITYSDK_OFFSET(0x1C5AAB30)
#define MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_GKKMKBBJKJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AADD0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int BulletHoleConfigObject_GKKMKBBJKJH_TypeDefinitionIndex = 74075;

	class BulletHoleConfigObject_GKKMKBBJKJH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_GKKMKBBJKJH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_GKKMKBBJKJH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Battle::BulletHoleConfigObject*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::BulletHoleConfigObject*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_GKKMKBBJKJH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Battle::BulletHoleConfigObject*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::BulletHoleConfigObject*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_BULLETHOLECONFIGOBJECT_GKKMKBBJKJH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
