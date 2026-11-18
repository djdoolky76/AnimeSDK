#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_TogglePlayMix; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_FOEHKBCFFJL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x127879B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_FOEHKBCFFJL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x127879C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_FOEHKBCFFJL_WRITE_OFFSET UNITYSDK_OFFSET(0x12787CD0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_FOEHKBCFFJL__CTOR_OFFSET UNITYSDK_OFFSET(0x12787EB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_TogglePlayMix_FOEHKBCFFJL_TypeDefinitionIndex = 55516;

	class ConfigSoundAction_TogglePlayMix_FOEHKBCFFJL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_FOEHKBCFFJL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_FOEHKBCFFJL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_TogglePlayMix*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_TogglePlayMix*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_FOEHKBCFFJL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_TogglePlayMix*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_TogglePlayMix*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_TOGGLEPLAYMIX_FOEHKBCFFJL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
