#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigBuddyMisc; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_NOFFDBFMMMH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA26B50)
#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_NOFFDBFMMMH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA26B60)
#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_NOFFDBFMMMH_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA26FC0)
#define MOLEMOLE_CONFIG_CONFIGBUDDYMISC_NOFFDBFMMMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA27260)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuddyMisc_NOFFDBFMMMH_TypeDefinitionIndex = 53802;

	class ConfigBuddyMisc_NOFFDBFMMMH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_NOFFDBFMMMH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_NOFFDBFMMMH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigBuddyMisc*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigBuddyMisc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_NOFFDBFMMMH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigBuddyMisc*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigBuddyMisc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBUDDYMISC_NOFFDBFMMMH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
