#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICinema; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGUICINEMA_BPDAMFCIADG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x190C5480)
#define MOLEMOLE_CONFIGUICINEMA_BPDAMFCIADG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x190C5490)
#define MOLEMOLE_CONFIGUICINEMA_BPDAMFCIADG_WRITE_OFFSET UNITYSDK_OFFSET(0x190C5A40)
#define MOLEMOLE_CONFIGUICINEMA_BPDAMFCIADG__CTOR_OFFSET UNITYSDK_OFFSET(0x190C5D90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICinema_BPDAMFCIADG_TypeDefinitionIndex = 87529;

	class ConfigUICinema_BPDAMFCIADG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_BPDAMFCIADG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_BPDAMFCIADG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICinema*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICinema*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_BPDAMFCIADG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUICinema*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICinema*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICINEMA_BPDAMFCIADG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
