#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCoopVFXConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGCOOPVFXCONFIG_MACAPMJHAEE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x131DF890)
#define MOLEMOLE_CONFIG_CONFIGCOOPVFXCONFIG_MACAPMJHAEE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x131DF8A0)
#define MOLEMOLE_CONFIG_CONFIGCOOPVFXCONFIG_MACAPMJHAEE_WRITE_OFFSET UNITYSDK_OFFSET(0x131DFC50)
#define MOLEMOLE_CONFIG_CONFIGCOOPVFXCONFIG_MACAPMJHAEE__CTOR_OFFSET UNITYSDK_OFFSET(0x131DFE80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCoopVFXConfig_MACAPMJHAEE_TypeDefinitionIndex = 80801;

	class ConfigCoopVFXConfig_MACAPMJHAEE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOOPVFXCONFIG_MACAPMJHAEE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOOPVFXCONFIG_MACAPMJHAEE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCoopVFXConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCoopVFXConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOOPVFXCONFIG_MACAPMJHAEE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigCoopVFXConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCoopVFXConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOOPVFXCONFIG_MACAPMJHAEE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
