#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraShake; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_DLCEEHOGLBP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E89F20)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_DLCEEHOGLBP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E89F30)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_DLCEEHOGLBP_WRITE_OFFSET UNITYSDK_OFFSET(0x11E8B180)
#define MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_DLCEEHOGLBP__CTOR_OFFSET UNITYSDK_OFFSET(0x11E8BBD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraShake_DLCEEHOGLBP_TypeDefinitionIndex = 66005;

	class ConfigCameraShake_DLCEEHOGLBP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_DLCEEHOGLBP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_DLCEEHOGLBP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraShake*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraShake*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_DLCEEHOGLBP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraShake*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraShake*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASHAKE_DLCEEHOGLBP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
