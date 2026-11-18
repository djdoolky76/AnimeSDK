#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICommon_Misc; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGUICOMMON_MISC_BJLOHLJIEGG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A780AD0)
#define MOLEMOLE_CONFIGUICOMMON_MISC_BJLOHLJIEGG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A780AE0)
#define MOLEMOLE_CONFIGUICOMMON_MISC_BJLOHLJIEGG_WRITE_OFFSET UNITYSDK_OFFSET(0x1A7811D0)
#define MOLEMOLE_CONFIGUICOMMON_MISC_BJLOHLJIEGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7815D0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Misc_BJLOHLJIEGG_TypeDefinitionIndex = 87003;

	class ConfigUICommon_Misc_BJLOHLJIEGG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_BJLOHLJIEGG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_BJLOHLJIEGG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_Misc*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_Misc*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_BJLOHLJIEGG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_Misc*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Misc*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_MISC_BJLOHLJIEGG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
