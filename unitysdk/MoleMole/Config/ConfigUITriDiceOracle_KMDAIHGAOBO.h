#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigUITriDiceOracle; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_KMDAIHGAOBO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA44560)
#define MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_KMDAIHGAOBO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA44570)
#define MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_KMDAIHGAOBO_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA44A70)
#define MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_KMDAIHGAOBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA44D60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUITriDiceOracle_KMDAIHGAOBO_TypeDefinitionIndex = 60521;

	class ConfigUITriDiceOracle_KMDAIHGAOBO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_KMDAIHGAOBO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_KMDAIHGAOBO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigUITriDiceOracle*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigUITriDiceOracle*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_KMDAIHGAOBO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigUITriDiceOracle*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUITriDiceOracle*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUITRIDICEORACLE_KMDAIHGAOBO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
