#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigInputSetting; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_MOEEKDHGIOE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B921D40)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_MOEEKDHGIOE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B921D50)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_MOEEKDHGIOE_WRITE_OFFSET UNITYSDK_OFFSET(0x1B922E90)
#define MOLEMOLE_CONFIG_CONFIGINPUTSETTING_MOEEKDHGIOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B923850)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigInputSetting_MOEEKDHGIOE_TypeDefinitionIndex = 89499;

	class ConfigInputSetting_MOEEKDHGIOE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_MOEEKDHGIOE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_MOEEKDHGIOE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigInputSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigInputSetting*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_MOEEKDHGIOE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigInputSetting*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigInputSetting*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGINPUTSETTING_MOEEKDHGIOE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
