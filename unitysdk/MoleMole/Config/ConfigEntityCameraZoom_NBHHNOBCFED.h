#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityCameraZoom; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_NBHHNOBCFED_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA2AE50)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_NBHHNOBCFED_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA2AE60)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_NBHHNOBCFED_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA2AFF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_NBHHNOBCFED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2B110)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityCameraZoom_NBHHNOBCFED_TypeDefinitionIndex = 41358;

	class ConfigEntityCameraZoom_NBHHNOBCFED
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_NBHHNOBCFED__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_NBHHNOBCFED_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityCameraZoom*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityCameraZoom*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_NBHHNOBCFED_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityCameraZoom*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityCameraZoom*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYCAMERAZOOM_NBHHNOBCFED_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
