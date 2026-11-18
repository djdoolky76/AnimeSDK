#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class CameraOverrideTrackEntry; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_DGJJLOGKEJJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x163E1F90)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_DGJJLOGKEJJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x163E1FA0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_DGJJLOGKEJJ_WRITE_OFFSET UNITYSDK_OFFSET(0x163E27C0)
#define MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_DGJJLOGKEJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x163E2C60)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraOverrideTrackEntry_DGJJLOGKEJJ_TypeDefinitionIndex = 47871;

	class CameraOverrideTrackEntry_DGJJLOGKEJJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_DGJJLOGKEJJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_DGJJLOGKEJJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::CameraOverrideTrackEntry*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraOverrideTrackEntry*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_DGJJLOGKEJJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Cameras::CameraOverrideTrackEntry*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraOverrideTrackEntry*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAOVERRIDETRACKENTRY_DGJJLOGKEJJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
