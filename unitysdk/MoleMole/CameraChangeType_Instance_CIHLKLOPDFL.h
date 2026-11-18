#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class CameraChangeType_Instance; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CIHLKLOPDFL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x163E1E60)
#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CIHLKLOPDFL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x163E1E70)
#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CIHLKLOPDFL_WRITE_OFFSET UNITYSDK_OFFSET(0x163E1E80)
#define MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CIHLKLOPDFL__CTOR_OFFSET UNITYSDK_OFFSET(0x163E1E90)

namespace MoleMole
{
	inline static constexpr unsigned int CameraChangeType_Instance_CIHLKLOPDFL_TypeDefinitionIndex = 91202;

	class CameraChangeType_Instance_CIHLKLOPDFL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CIHLKLOPDFL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CIHLKLOPDFL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CameraChangeType_Instance*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CameraChangeType_Instance*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CIHLKLOPDFL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::CameraChangeType_Instance*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CameraChangeType_Instance*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERACHANGETYPE_INSTANCE_CIHLKLOPDFL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
