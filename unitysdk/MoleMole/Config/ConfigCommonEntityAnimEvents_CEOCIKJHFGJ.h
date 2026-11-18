#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCommonEntityAnimEvents; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CEOCIKJHFGJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFABCD40)
#define MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CEOCIKJHFGJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFABCD50)
#define MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CEOCIKJHFGJ_WRITE_OFFSET UNITYSDK_OFFSET(0xFABCE20)
#define MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CEOCIKJHFGJ__CTOR_OFFSET UNITYSDK_OFFSET(0xFABCED0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCommonEntityAnimEvents_CEOCIKJHFGJ_TypeDefinitionIndex = 39543;

	class ConfigCommonEntityAnimEvents_CEOCIKJHFGJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CEOCIKJHFGJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CEOCIKJHFGJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCommonEntityAnimEvents*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCommonEntityAnimEvents*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CEOCIKJHFGJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigCommonEntityAnimEvents*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCommonEntityAnimEvents*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONENTITYANIMEVENTS_CEOCIKJHFGJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
