#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_RetargetToPlayer; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_KIIOPBOLODC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFAC9580)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_KIIOPBOLODC_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFAC9590)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_KIIOPBOLODC_WRITE_OFFSET UNITYSDK_OFFSET(0xFAC9720)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_KIIOPBOLODC__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC9840)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_RetargetToPlayer_KIIOPBOLODC_TypeDefinitionIndex = 88432;

	class ConfigSoundAction_RetargetToPlayer_KIIOPBOLODC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_KIIOPBOLODC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_KIIOPBOLODC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_RetargetToPlayer*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RetargetToPlayer*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_KIIOPBOLODC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_RetargetToPlayer*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_RetargetToPlayer*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_RETARGETTOPLAYER_KIIOPBOLODC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
