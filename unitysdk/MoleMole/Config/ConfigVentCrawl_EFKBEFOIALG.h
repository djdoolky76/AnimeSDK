#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigVentCrawl; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGVENTCRAWL_EFKBEFOIALG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192AE8C0)
#define MOLEMOLE_CONFIG_CONFIGVENTCRAWL_EFKBEFOIALG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x192AE8D0)
#define MOLEMOLE_CONFIG_CONFIGVENTCRAWL_EFKBEFOIALG_WRITE_OFFSET UNITYSDK_OFFSET(0x192AEA70)
#define MOLEMOLE_CONFIG_CONFIGVENTCRAWL_EFKBEFOIALG__CTOR_OFFSET UNITYSDK_OFFSET(0x192AEB90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigVentCrawl_EFKBEFOIALG_TypeDefinitionIndex = 40698;

	class ConfigVentCrawl_EFKBEFOIALG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVENTCRAWL_EFKBEFOIALG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVENTCRAWL_EFKBEFOIALG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigVentCrawl*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigVentCrawl*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVENTCRAWL_EFKBEFOIALG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigVentCrawl*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigVentCrawl*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVENTCRAWL_EFKBEFOIALG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
