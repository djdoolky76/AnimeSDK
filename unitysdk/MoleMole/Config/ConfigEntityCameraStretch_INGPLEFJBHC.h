#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityCameraStretch; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_INGPLEFJBHC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1923CFE0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_INGPLEFJBHC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1923CFF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_INGPLEFJBHC_WRITE_OFFSET UNITYSDK_OFFSET(0x1923D180)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_INGPLEFJBHC__CTOR_OFFSET UNITYSDK_OFFSET(0x1923D2A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCameraStretch_INGPLEFJBHC_TypeDefinitionIndex = 71554;

	class ConfigEntityCameraStretch_INGPLEFJBHC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_INGPLEFJBHC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_INGPLEFJBHC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityCameraStretch*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityCameraStretch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_INGPLEFJBHC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityCameraStretch*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCameraStretch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERASTRETCH_INGPLEFJBHC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
