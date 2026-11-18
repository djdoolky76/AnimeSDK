#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_KHMGDHLCNPD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x121A07F0)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_KHMGDHLCNPD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x121A0800)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_KHMGDHLCNPD_WRITE_OFFSET UNITYSDK_OFFSET(0x121A0990)
#define MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_KHMGDHLCNPD__CTOR_OFFSET UNITYSDK_OFFSET(0x121A0AB0)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraTrackBlending_KHMGDHLCNPD_TypeDefinitionIndex = 64993;

	class CameraTrackBlending_KHMGDHLCNPD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_KHMGDHLCNPD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_KHMGDHLCNPD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::CameraTrackBlending*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_KHMGDHLCNPD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Cameras::CameraTrackBlending*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackBlending*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKBLENDING_KHMGDHLCNPD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
