#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_Prepare; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_KKNMGEPBMGD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12785B70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_KKNMGEPBMGD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12785B80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_KKNMGEPBMGD_WRITE_OFFSET UNITYSDK_OFFSET(0x12785F30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_KKNMGEPBMGD__CTOR_OFFSET UNITYSDK_OFFSET(0x12786160)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Prepare_KKNMGEPBMGD_TypeDefinitionIndex = 64422;

	class ConfigSoundAction_Prepare_KKNMGEPBMGD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_KKNMGEPBMGD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_KKNMGEPBMGD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Prepare*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Prepare*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_KKNMGEPBMGD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Prepare*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Prepare*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_PREPARE_KKNMGEPBMGD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
