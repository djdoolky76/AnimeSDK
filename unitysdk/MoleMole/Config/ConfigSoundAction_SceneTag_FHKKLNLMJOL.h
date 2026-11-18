#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_SceneTag; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_FHKKLNLMJOL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B1DFE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_FHKKLNLMJOL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B1DFF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_FHKKLNLMJOL_WRITE_OFFSET UNITYSDK_OFFSET(0x19B1E240)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_FHKKLNLMJOL__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1E3C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SceneTag_FHKKLNLMJOL_TypeDefinitionIndex = 48520;

	class ConfigSoundAction_SceneTag_FHKKLNLMJOL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_FHKKLNLMJOL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_FHKKLNLMJOL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_SceneTag*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SceneTag*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_FHKKLNLMJOL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_SceneTag*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SceneTag*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SCENETAG_FHKKLNLMJOL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
