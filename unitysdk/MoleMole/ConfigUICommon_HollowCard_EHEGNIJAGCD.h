#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICommon_HollowCard; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_EHEGNIJAGCD_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B455F90)
#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_EHEGNIJAGCD_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B455FA0)
#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_EHEGNIJAGCD_WRITE_OFFSET UNITYSDK_OFFSET(0x1B456200)
#define MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_EHEGNIJAGCD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B456380)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_HollowCard_EHEGNIJAGCD_TypeDefinitionIndex = 66993;

	class ConfigUICommon_HollowCard_EHEGNIJAGCD
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_EHEGNIJAGCD__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_EHEGNIJAGCD_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_HollowCard*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_HollowCard*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_EHEGNIJAGCD_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_HollowCard*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_HollowCard*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_HOLLOWCARD_EHEGNIJAGCD_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
