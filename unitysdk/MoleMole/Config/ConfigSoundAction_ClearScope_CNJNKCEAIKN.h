#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_ClearScope; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_CNJNKCEAIKN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A769250)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_CNJNKCEAIKN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A769260)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_CNJNKCEAIKN_WRITE_OFFSET UNITYSDK_OFFSET(0x1A7693F0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_CNJNKCEAIKN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A769510)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_ClearScope_CNJNKCEAIKN_TypeDefinitionIndex = 90840;

	class ConfigSoundAction_ClearScope_CNJNKCEAIKN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_CNJNKCEAIKN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_CNJNKCEAIKN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_ClearScope*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_ClearScope*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_CNJNKCEAIKN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_ClearScope*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_ClearScope*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_CLEARSCOPE_CNJNKCEAIKN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
