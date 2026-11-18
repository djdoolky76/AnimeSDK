#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCameraStoryDatas; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_HLPNKJLPEAG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA27390)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_HLPNKJLPEAG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA273A0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_HLPNKJLPEAG_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA276B0)
#define MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_HLPNKJLPEAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA27880)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraStoryDatas_HLPNKJLPEAG_TypeDefinitionIndex = 71811;

	class ConfigCameraStoryDatas_HLPNKJLPEAG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_HLPNKJLPEAG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_HLPNKJLPEAG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCameraStoryDatas*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCameraStoryDatas*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_HLPNKJLPEAG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigCameraStoryDatas*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraStoryDatas*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERASTORYDATAS_HLPNKJLPEAG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
