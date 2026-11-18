#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigGlobalSoundAction; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_BPGPKHNGDLP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFAC67F0)
#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_BPGPKHNGDLP_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFAC6800)
#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_BPGPKHNGDLP_WRITE_OFFSET UNITYSDK_OFFSET(0xFAC68D0)
#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_BPGPKHNGDLP__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC6980)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGlobalSoundAction_BPGPKHNGDLP_TypeDefinitionIndex = 53276;

	class ConfigGlobalSoundAction_BPGPKHNGDLP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_BPGPKHNGDLP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_BPGPKHNGDLP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigGlobalSoundAction*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigGlobalSoundAction*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_BPGPKHNGDLP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigGlobalSoundAction*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGlobalSoundAction*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTION_BPGPKHNGDLP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
