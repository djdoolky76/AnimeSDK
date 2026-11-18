#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_Delay; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_NFDKNIJDOFK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12783C70)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_NFDKNIJDOFK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12783C80)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_NFDKNIJDOFK_WRITE_OFFSET UNITYSDK_OFFSET(0x127840D0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_NFDKNIJDOFK__CTOR_OFFSET UNITYSDK_OFFSET(0x12784360)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Delay_NFDKNIJDOFK_TypeDefinitionIndex = 50616;

	class ConfigSoundAction_Delay_NFDKNIJDOFK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_NFDKNIJDOFK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_NFDKNIJDOFK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Delay*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Delay*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_NFDKNIJDOFK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Delay*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Delay*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY_NFDKNIJDOFK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
