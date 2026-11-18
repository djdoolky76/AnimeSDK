#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/CameraOrbit.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CAMERAORBIT_EAKCGLKBIEK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10796FF0)
#define MOLEMOLE_CAMERAORBIT_EAKCGLKBIEK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10797000)
#define MOLEMOLE_CAMERAORBIT_EAKCGLKBIEK_WRITE_OFFSET UNITYSDK_OFFSET(0x10797180)
#define MOLEMOLE_CAMERAORBIT_EAKCGLKBIEK__CTOR_OFFSET UNITYSDK_OFFSET(0x10797290)

namespace MoleMole
{
	inline static constexpr unsigned int CameraOrbit_EAKCGLKBIEK_TypeDefinitionIndex = 73122;

	class CameraOrbit_EAKCGLKBIEK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAORBIT_EAKCGLKBIEK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAORBIT_EAKCGLKBIEK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::CameraOrbit& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::CameraOrbit&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAORBIT_EAKCGLKBIEK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::CameraOrbit& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::CameraOrbit&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAORBIT_EAKCGLKBIEK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
