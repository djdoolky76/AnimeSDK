#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigFocusCamera; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_OLKPDOEFHGE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12772C30)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_OLKPDOEFHGE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12772C40)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_OLKPDOEFHGE_WRITE_OFFSET UNITYSDK_OFFSET(0x12772DD0)
#define MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_OLKPDOEFHGE__CTOR_OFFSET UNITYSDK_OFFSET(0x12772EF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFocusCamera_OLKPDOEFHGE_TypeDefinitionIndex = 67921;

	class ConfigFocusCamera_OLKPDOEFHGE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_OLKPDOEFHGE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_OLKPDOEFHGE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigFocusCamera*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigFocusCamera*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_OLKPDOEFHGE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigFocusCamera*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigFocusCamera*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFOCUSCAMERA_OLKPDOEFHGE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
