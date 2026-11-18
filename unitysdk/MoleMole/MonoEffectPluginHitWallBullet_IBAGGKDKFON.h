#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class MonoEffectPluginHitWallBullet; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_IBAGGKDKFON_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x14AFC260)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_IBAGGKDKFON_READMEMBER_OFFSET UNITYSDK_OFFSET(0x14AFC270)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_IBAGGKDKFON_WRITE_OFFSET UNITYSDK_OFFSET(0x14AFC400)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_IBAGGKDKFON__CTOR_OFFSET UNITYSDK_OFFSET(0x14AFC520)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginHitWallBullet_IBAGGKDKFON_TypeDefinitionIndex = 68947;

	class MonoEffectPluginHitWallBullet_IBAGGKDKFON
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_IBAGGKDKFON__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_IBAGGKDKFON_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::MonoEffectPluginHitWallBullet*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallBullet*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_IBAGGKDKFON_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::MonoEffectPluginHitWallBullet*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoEffectPluginHitWallBullet*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALLBULLET_IBAGGKDKFON_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
