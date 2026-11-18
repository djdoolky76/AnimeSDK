#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHitEffect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_MNPHCJAMPBP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x121C02E0)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_MNPHCJAMPBP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x121C02F0)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_MNPHCJAMPBP_WRITE_OFFSET UNITYSDK_OFFSET(0x121C09C0)
#define MOLEMOLE_CONFIG_CONFIGHITEFFECT_MNPHCJAMPBP__CTOR_OFFSET UNITYSDK_OFFSET(0x121C0DB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitEffect_MNPHCJAMPBP_TypeDefinitionIndex = 69581;

	class ConfigHitEffect_MNPHCJAMPBP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_MNPHCJAMPBP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_MNPHCJAMPBP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHitEffect*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHitEffect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_MNPHCJAMPBP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigHitEffect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitEffect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITEFFECT_MNPHCJAMPBP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
