#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class QTECameraInfo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_QTECAMERAINFO_DBKNKDLIDKG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x146A7B80)
#define MOLEMOLE_QTECAMERAINFO_DBKNKDLIDKG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x146A7B90)
#define MOLEMOLE_QTECAMERAINFO_DBKNKDLIDKG_WRITE_OFFSET UNITYSDK_OFFSET(0x146A8310)
#define MOLEMOLE_QTECAMERAINFO_DBKNKDLIDKG__CTOR_OFFSET UNITYSDK_OFFSET(0x146A8760)

namespace MoleMole
{
	inline static constexpr unsigned int QTECameraInfo_DBKNKDLIDKG_TypeDefinitionIndex = 63848;

	class QTECameraInfo_DBKNKDLIDKG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERAINFO_DBKNKDLIDKG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERAINFO_DBKNKDLIDKG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::QTECameraInfo*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::QTECameraInfo*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERAINFO_DBKNKDLIDKG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::QTECameraInfo*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::QTECameraInfo*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERAINFO_DBKNKDLIDKG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
