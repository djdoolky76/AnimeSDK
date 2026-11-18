#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_When; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GJGHHAJKHPH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA3CE00)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GJGHHAJKHPH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA3CE10)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GJGHHAJKHPH_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA3D060)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GJGHHAJKHPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3D1E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_When_GJGHHAJKHPH_TypeDefinitionIndex = 62429;

	class ConfigSoundAction_When_GJGHHAJKHPH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GJGHHAJKHPH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GJGHHAJKHPH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_When*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_When*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GJGHHAJKHPH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_When*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_When*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_WHEN_GJGHHAJKHPH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
