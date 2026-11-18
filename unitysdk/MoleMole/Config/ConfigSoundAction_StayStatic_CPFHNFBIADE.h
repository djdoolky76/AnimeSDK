#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_StayStatic; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CPFHNFBIADE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8A95E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CPFHNFBIADE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8A95F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CPFHNFBIADE_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8A9780)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CPFHNFBIADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A98A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_StayStatic_CPFHNFBIADE_TypeDefinitionIndex = 68070;

	class ConfigSoundAction_StayStatic_CPFHNFBIADE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CPFHNFBIADE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CPFHNFBIADE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_StayStatic*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_StayStatic*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CPFHNFBIADE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_StayStatic*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_StayStatic*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_STAYSTATIC_CPFHNFBIADE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
