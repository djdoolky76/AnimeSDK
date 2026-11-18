#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSurfGameItemData; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_KCMOBIALJEF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1B8A9D90)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_KCMOBIALJEF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1B8A9DA0)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_KCMOBIALJEF_WRITE_OFFSET UNITYSDK_OFFSET(0x1B8A9F30)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_KCMOBIALJEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8AA050)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemData_KCMOBIALJEF_TypeDefinitionIndex = 43274;

	class ConfigSurfGameItemData_KCMOBIALJEF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_KCMOBIALJEF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_KCMOBIALJEF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSurfGameItemData*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSurfGameItemData*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_KCMOBIALJEF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSurfGameItemData*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSurfGameItemData*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMDATA_KCMOBIALJEF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
