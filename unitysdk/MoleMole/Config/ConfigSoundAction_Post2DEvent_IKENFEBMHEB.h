#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSoundAction_Post2DEvent; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_IKENFEBMHEB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B92A180)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_IKENFEBMHEB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B92A190)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_IKENFEBMHEB_WRITE_OFFSET UNITYSDK_OFFSET(0x1B92A3E0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_IKENFEBMHEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B92A560)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Post2DEvent_IKENFEBMHEB_TypeDefinitionIndex = 69561;

	class ConfigSoundAction_Post2DEvent_IKENFEBMHEB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_IKENFEBMHEB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_IKENFEBMHEB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSoundAction_Post2DEvent*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Post2DEvent*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_IKENFEBMHEB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSoundAction_Post2DEvent*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSoundAction_Post2DEvent*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_POST2DEVENT_IKENFEBMHEB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
