#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_SetState; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_BIKBCDEGPAG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A76A060)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_BIKBCDEGPAG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A76A070)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_BIKBCDEGPAG_WRITE_OFFSET UNITYSDK_OFFSET(0x1A76A2C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_BIKBCDEGPAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A76A440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_SetState_BIKBCDEGPAG_TypeDefinitionIndex = 67204;

	class ConfigSoundAction_SetState_BIKBCDEGPAG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_BIKBCDEGPAG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_BIKBCDEGPAG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_SetState*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetState*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_BIKBCDEGPAG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_SetState*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_SetState*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_SETSTATE_BIKBCDEGPAG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
