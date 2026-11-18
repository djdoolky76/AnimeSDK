#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSystemSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_MPCINMNBMCI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1924FDF0)
#define MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_MPCINMNBMCI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1924FE00)
#define MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_MPCINMNBMCI_WRITE_OFFSET UNITYSDK_OFFSET(0x1924FF90)
#define MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_MPCINMNBMCI__CTOR_OFFSET UNITYSDK_OFFSET(0x192500B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSystemSetting_MPCINMNBMCI_TypeDefinitionIndex = 68648;

	class ConfigSystemSetting_MPCINMNBMCI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_MPCINMNBMCI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_MPCINMNBMCI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSystemSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSystemSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_MPCINMNBMCI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSystemSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSystemSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSYSTEMSETTING_MPCINMNBMCI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
