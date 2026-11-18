#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigUIVirtualJoystick; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_EELLINAAPAK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1641E9D0)
#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_EELLINAAPAK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1641E9E0)
#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_EELLINAAPAK_WRITE_OFFSET UNITYSDK_OFFSET(0x1641EC30)
#define MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_EELLINAAPAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1641EDB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIVirtualJoystick_EELLINAAPAK_TypeDefinitionIndex = 56533;

	class ConfigUIVirtualJoystick_EELLINAAPAK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_EELLINAAPAK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_EELLINAAPAK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUIVirtualJoystick*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUIVirtualJoystick*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_EELLINAAPAK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigUIVirtualJoystick*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIVirtualJoystick*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIVIRTUALJOYSTICK_EELLINAAPAK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
