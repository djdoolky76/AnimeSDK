#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigSpecialEffectHitWall; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_MCHPNPGIFNE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1653F170)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_MCHPNPGIFNE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1653F180)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_MCHPNPGIFNE_WRITE_OFFSET UNITYSDK_OFFSET(0x1653F310)
#define MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_MCHPNPGIFNE__CTOR_OFFSET UNITYSDK_OFFSET(0x1653F430)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSpecialEffectHitWall_MCHPNPGIFNE_TypeDefinitionIndex = 45779;

	class ConfigSpecialEffectHitWall_MCHPNPGIFNE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_MCHPNPGIFNE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_MCHPNPGIFNE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigSpecialEffectHitWall*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitWall*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_MCHPNPGIFNE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigSpecialEffectHitWall*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSpecialEffectHitWall*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSPECIALEFFECTHITWALL_MCHPNPGIFNE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
