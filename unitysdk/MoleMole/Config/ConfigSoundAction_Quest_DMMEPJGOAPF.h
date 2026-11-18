#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_Quest; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_DMMEPJGOAPF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x127861A0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_DMMEPJGOAPF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x127861B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_DMMEPJGOAPF_WRITE_OFFSET UNITYSDK_OFFSET(0x12786400)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_DMMEPJGOAPF__CTOR_OFFSET UNITYSDK_OFFSET(0x12786580)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Quest_DMMEPJGOAPF_TypeDefinitionIndex = 74630;

	class ConfigSoundAction_Quest_DMMEPJGOAPF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_DMMEPJGOAPF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_DMMEPJGOAPF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Quest*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Quest*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_DMMEPJGOAPF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Quest*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Quest*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_QUEST_DMMEPJGOAPF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
