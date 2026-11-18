#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ZoneEffectConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_EMADBPFBNNF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1C6F5AF0)
#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_EMADBPFBNNF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1C6F5B00)
#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_EMADBPFBNNF_WRITE_OFFSET UNITYSDK_OFFSET(0x1C6F5F60)
#define MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_EMADBPFBNNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F6200)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ZoneEffectConfig_EMADBPFBNNF_TypeDefinitionIndex = 43651;

	class ZoneEffectConfig_EMADBPFBNNF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_EMADBPFBNNF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_EMADBPFBNNF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ZoneEffectConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ZoneEffectConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_EMADBPFBNNF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ZoneEffectConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ZoneEffectConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ZONEEFFECTCONFIG_EMADBPFBNNF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
