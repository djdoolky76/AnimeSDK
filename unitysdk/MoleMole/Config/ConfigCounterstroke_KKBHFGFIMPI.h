#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigCounterstroke; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_KKBHFGFIMPI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19231CC0)
#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_KKBHFGFIMPI_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19231CD0)
#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_KKBHFGFIMPI_WRITE_OFFSET UNITYSDK_OFFSET(0x19231FE0)
#define MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_KKBHFGFIMPI__CTOR_OFFSET UNITYSDK_OFFSET(0x192321C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCounterstroke_KKBHFGFIMPI_TypeDefinitionIndex = 49180;

	class ConfigCounterstroke_KKBHFGFIMPI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_KKBHFGFIMPI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_KKBHFGFIMPI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigCounterstroke*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigCounterstroke*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_KKBHFGFIMPI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigCounterstroke*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCounterstroke*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOUNTERSTROKE_KKBHFGFIMPI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
