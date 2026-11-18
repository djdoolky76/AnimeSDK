#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_ENMAKILLCDO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1653FD10)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_ENMAKILLCDO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1653FD20)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_ENMAKILLCDO_WRITE_OFFSET UNITYSDK_OFFSET(0x1653FEB0)
#define MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_ENMAKILLCDO__CTOR_OFFSET UNITYSDK_OFFSET(0x1653FFD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUIGachaPortrait_ENMAKILLCDO_TypeDefinitionIndex = 52406;

	class ConfigUIGachaPortrait_ENMAKILLCDO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_ENMAKILLCDO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_ENMAKILLCDO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUIGachaPortrait*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUIGachaPortrait*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_ENMAKILLCDO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigUIGachaPortrait*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIGachaPortrait*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUIGACHAPORTRAIT_ENMAKILLCDO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
