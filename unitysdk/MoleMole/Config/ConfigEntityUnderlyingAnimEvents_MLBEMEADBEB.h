#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigEntityUnderlyingAnimEvents; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_MLBEMEADBEB_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B173F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_MLBEMEADBEB_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B17400)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_MLBEMEADBEB_WRITE_OFFSET UNITYSDK_OFFSET(0x19B17650)
#define MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_MLBEMEADBEB__CTOR_OFFSET UNITYSDK_OFFSET(0x19B177D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityUnderlyingAnimEvents_MLBEMEADBEB_TypeDefinitionIndex = 91230;

	class ConfigEntityUnderlyingAnimEvents_MLBEMEADBEB
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_MLBEMEADBEB__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_MLBEMEADBEB_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_MLBEMEADBEB_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityUnderlyingAnimEvents*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYUNDERLYINGANIMEVENTS_MLBEMEADBEB_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
