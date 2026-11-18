#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Cameras { class CameraMiscSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CMGJFAPEKPL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C5AE0E0)
#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CMGJFAPEKPL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C5AE0F0)
#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CMGJFAPEKPL_WRITE_OFFSET UNITYSDK_OFFSET(0x1C5AE420)
#define MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CMGJFAPEKPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5AE620)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int CameraMiscSetting_CMGJFAPEKPL_TypeDefinitionIndex = 92881;

	class CameraMiscSetting_CMGJFAPEKPL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CMGJFAPEKPL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CMGJFAPEKPL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Cameras::CameraMiscSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Cameras::CameraMiscSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CMGJFAPEKPL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Cameras::CameraMiscSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::CameraMiscSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_CAMERAMISCSETTING_CMGJFAPEKPL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
