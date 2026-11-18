#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraZooms; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_JCKJNPODAIK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19230770)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_JCKJNPODAIK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19230780)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_JCKJNPODAIK_WRITE_OFFSET UNITYSDK_OFFSET(0x19230850)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_JCKJNPODAIK__CTOR_OFFSET UNITYSDK_OFFSET(0x19230900)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraZooms_JCKJNPODAIK_TypeDefinitionIndex = 74216;

	class ConfigCameraZooms_JCKJNPODAIK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_JCKJNPODAIK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_JCKJNPODAIK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraZooms*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraZooms*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_JCKJNPODAIK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraZooms*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraZooms*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOMS_JCKJNPODAIK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
