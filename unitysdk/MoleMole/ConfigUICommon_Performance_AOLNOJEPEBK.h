#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class ConfigUICommon_Performance; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_AOLNOJEPEBK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A05EDA0)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_AOLNOJEPEBK_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A05EDB0)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_AOLNOJEPEBK_WRITE_OFFSET UNITYSDK_OFFSET(0x1A05F5F0)
#define MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_AOLNOJEPEBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05FAB0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Performance_AOLNOJEPEBK_TypeDefinitionIndex = 40970;

	class ConfigUICommon_Performance_AOLNOJEPEBK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_AOLNOJEPEBK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_AOLNOJEPEBK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::ConfigUICommon_Performance*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigUICommon_Performance*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_AOLNOJEPEBK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::ConfigUICommon_Performance*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICommon_Performance*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_PERFORMANCE_AOLNOJEPEBK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
