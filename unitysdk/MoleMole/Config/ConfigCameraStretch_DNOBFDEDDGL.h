#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraStretch; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_DNOBFDEDDGL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1652E570)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_DNOBFDEDDGL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1652E580)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_DNOBFDEDDGL_WRITE_OFFSET UNITYSDK_OFFSET(0x1652FB90)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_DNOBFDEDDGL__CTOR_OFFSET UNITYSDK_OFFSET(0x165307F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStretch_DNOBFDEDDGL_TypeDefinitionIndex = 58036;

	class ConfigCameraStretch_DNOBFDEDDGL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_DNOBFDEDDGL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_DNOBFDEDDGL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraStretch*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_DNOBFDEDDGL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraStretch*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStretch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTRETCH_DNOBFDEDDGL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
