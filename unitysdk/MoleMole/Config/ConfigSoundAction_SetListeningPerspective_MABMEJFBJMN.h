#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_SetListeningPerspective; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_MABMEJFBJMN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1653ED40)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_MABMEJFBJMN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1653ED50)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_MABMEJFBJMN_WRITE_OFFSET UNITYSDK_OFFSET(0x1653EEE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_MABMEJFBJMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1653F000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetListeningPerspective_MABMEJFBJMN_TypeDefinitionIndex = 55397;

	class ConfigSoundAction_SetListeningPerspective_MABMEJFBJMN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_MABMEJFBJMN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_MABMEJFBJMN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_SetListeningPerspective*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetListeningPerspective*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_MABMEJFBJMN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_SetListeningPerspective*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetListeningPerspective*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETLISTENINGPERSPECTIVE_MABMEJFBJMN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
