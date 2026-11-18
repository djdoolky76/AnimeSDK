#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraStretchs; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_HBDKBKIFEAH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192305A0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_HBDKBKIFEAH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192305B0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_HBDKBKIFEAH_WRITE_OFFSET UNITYSDK_OFFSET(0x19230680)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_HBDKBKIFEAH__CTOR_OFFSET UNITYSDK_OFFSET(0x19230730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStretchs_HBDKBKIFEAH_TypeDefinitionIndex = 74281;

	class ConfigCameraStretchs_HBDKBKIFEAH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_HBDKBKIFEAH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_HBDKBKIFEAH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraStretchs*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretchs*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_HBDKBKIFEAH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraStretchs*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretchs*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCHS_HBDKBKIFEAH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
