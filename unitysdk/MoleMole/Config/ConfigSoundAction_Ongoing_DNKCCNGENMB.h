#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_Ongoing; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_DNKCCNGENMB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1653DEE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_DNKCCNGENMB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1653DEF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_DNKCCNGENMB_WRITE_OFFSET UNITYSDK_OFFSET(0x1653E140)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_DNKCCNGENMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1653E2C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Ongoing_DNKCCNGENMB_TypeDefinitionIndex = 75341;

	class ConfigSoundAction_Ongoing_DNKCCNGENMB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_DNKCCNGENMB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_DNKCCNGENMB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Ongoing*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Ongoing*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_DNKCCNGENMB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Ongoing*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Ongoing*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_ONGOING_DNKCCNGENMB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
