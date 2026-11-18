#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigLinkZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGLINKZONE_GHEPCEDHKPO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E97E70)
#define MOLEMOLE_CONFIG_CONFIGLINKZONE_GHEPCEDHKPO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E97E80)
#define MOLEMOLE_CONFIG_CONFIGLINKZONE_GHEPCEDHKPO_WRITE_OFFSET UNITYSDK_OFFSET(0x11E981A0)
#define MOLEMOLE_CONFIG_CONFIGLINKZONE_GHEPCEDHKPO__CTOR_OFFSET UNITYSDK_OFFSET(0x11E98380)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigLinkZone_GHEPCEDHKPO_TypeDefinitionIndex = 86944;

	class ConfigLinkZone_GHEPCEDHKPO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_GHEPCEDHKPO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_GHEPCEDHKPO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigLinkZone*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigLinkZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_GHEPCEDHKPO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigLinkZone*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLinkZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGLINKZONE_GHEPCEDHKPO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
