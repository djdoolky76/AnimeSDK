#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class QTECameraBaseInfo; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_QTECAMERABASEINFO_PIOIPHILBMA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x10D57EA0)
#define MOLEMOLE_QTECAMERABASEINFO_PIOIPHILBMA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x10D57EB0)
#define MOLEMOLE_QTECAMERABASEINFO_PIOIPHILBMA_WRITE_OFFSET UNITYSDK_OFFSET(0x10D583A0)
#define MOLEMOLE_QTECAMERABASEINFO_PIOIPHILBMA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D58680)

namespace MoleMole
{
	inline static constexpr unsigned int QTECameraBaseInfo_PIOIPHILBMA_TypeDefinitionIndex = 70915;

	class QTECameraBaseInfo_PIOIPHILBMA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_PIOIPHILBMA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_PIOIPHILBMA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::QTECameraBaseInfo*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::QTECameraBaseInfo*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_PIOIPHILBMA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::QTECameraBaseInfo*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::QTECameraBaseInfo*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_QTECAMERABASEINFO_PIOIPHILBMA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
