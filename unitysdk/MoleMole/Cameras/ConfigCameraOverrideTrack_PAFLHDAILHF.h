#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class ConfigCameraOverrideTrack; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_PAFLHDAILHF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x107977E0)
#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_PAFLHDAILHF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x107977F0)
#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_PAFLHDAILHF_WRITE_OFFSET UNITYSDK_OFFSET(0x107978C0)
#define MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_PAFLHDAILHF__CTOR_OFFSET UNITYSDK_OFFSET(0x10797970)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int ConfigCameraOverrideTrack_PAFLHDAILHF_TypeDefinitionIndex = 41161;

	class ConfigCameraOverrideTrack_PAFLHDAILHF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_PAFLHDAILHF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_PAFLHDAILHF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::ConfigCameraOverrideTrack*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraOverrideTrack*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_PAFLHDAILHF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Cameras::ConfigCameraOverrideTrack*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::ConfigCameraOverrideTrack*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CONFIGCAMERAOVERRIDETRACK_PAFLHDAILHF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
