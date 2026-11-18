#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSideScrollingLevel; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CFOECHHELGE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B1C120)
#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CFOECHHELGE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B1C130)
#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CFOECHHELGE_WRITE_OFFSET UNITYSDK_OFFSET(0x19B1C440)
#define MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CFOECHHELGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B1C620)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSideScrollingLevel_CFOECHHELGE_TypeDefinitionIndex = 70249;

	class ConfigSideScrollingLevel_CFOECHHELGE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CFOECHHELGE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CFOECHHELGE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSideScrollingLevel*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingLevel*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CFOECHHELGE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSideScrollingLevel*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSideScrollingLevel*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSIDESCROLLINGLEVEL_CFOECHHELGE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
