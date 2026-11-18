#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraZoom; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_JAJNBLJJCCM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x131DE520)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_JAJNBLJJCCM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x131DE530)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_JAJNBLJJCCM_WRITE_OFFSET UNITYSDK_OFFSET(0x131DEF30)
#define MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_JAJNBLJJCCM__CTOR_OFFSET UNITYSDK_OFFSET(0x131DF4E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraZoom_JAJNBLJJCCM_TypeDefinitionIndex = 67192;

	class ConfigCameraZoom_JAJNBLJJCCM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_JAJNBLJJCCM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_JAJNBLJJCCM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraZoom*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraZoom*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_JAJNBLJJCCM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraZoom*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraZoom*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERAZOOM_JAJNBLJJCCM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
