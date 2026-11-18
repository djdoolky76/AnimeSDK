#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class CameraTrackSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_AJIMGAJCOJH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12758450)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_AJIMGAJCOJH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12758460)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_AJIMGAJCOJH_WRITE_OFFSET UNITYSDK_OFFSET(0x12758770)
#define MOLEMOLE_CAMERAS_CAMERATRACKSETTING_AJIMGAJCOJH__CTOR_OFFSET UNITYSDK_OFFSET(0x12758950)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraTrackSetting_AJIMGAJCOJH_TypeDefinitionIndex = 41903;

	class CameraTrackSetting_AJIMGAJCOJH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_AJIMGAJCOJH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_AJIMGAJCOJH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::CameraTrackSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraTrackSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_AJIMGAJCOJH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Cameras::CameraTrackSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraTrackSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERATRACKSETTING_AJIMGAJCOJH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
