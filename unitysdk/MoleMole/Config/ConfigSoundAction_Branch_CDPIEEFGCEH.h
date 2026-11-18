#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_Branch; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CDPIEEFGCEH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8A53C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CDPIEEFGCEH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8A53D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CDPIEEFGCEH_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8A56E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CDPIEEFGCEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A58B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Branch_CDPIEEFGCEH_TypeDefinitionIndex = 92132;

	class ConfigSoundAction_Branch_CDPIEEFGCEH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CDPIEEFGCEH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CDPIEEFGCEH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Branch*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Branch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CDPIEEFGCEH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Branch*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Branch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_BRANCH_CDPIEEFGCEH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
