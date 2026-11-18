#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_Sequence; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_LMJLOCLEDOA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190A6C30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_LMJLOCLEDOA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190A6C40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_LMJLOCLEDOA_WRITE_OFFSET UNITYSDK_OFFSET(0x190A6E90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_LMJLOCLEDOA__CTOR_OFFSET UNITYSDK_OFFSET(0x190A7010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Sequence_LMJLOCLEDOA_TypeDefinitionIndex = 51803;

	class ConfigSoundAction_Sequence_LMJLOCLEDOA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_LMJLOCLEDOA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_LMJLOCLEDOA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Sequence*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Sequence*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_LMJLOCLEDOA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Sequence*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Sequence*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SEQUENCE_LMJLOCLEDOA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
