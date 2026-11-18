#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAnimEventProtection.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_KKCNACFDGGC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A762D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_KKCNACFDGGC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A762D30)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_KKCNACFDGGC_WRITE_OFFSET UNITYSDK_OFFSET(0x1A762F50)
#define MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_KKCNACFDGGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7630A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityAnimEventProtection_KKCNACFDGGC_TypeDefinitionIndex = 55735;

	class ConfigEntityAnimEventProtection_KKCNACFDGGC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_KKCNACFDGGC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_KKCNACFDGGC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityAnimEventProtection& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEventProtection&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_KKCNACFDGGC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityAnimEventProtection& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityAnimEventProtection&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYANIMEVENTPROTECTION_KKCNACFDGGC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
