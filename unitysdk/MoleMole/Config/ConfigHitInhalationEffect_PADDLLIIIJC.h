#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigHitInhalationEffect; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_PADDLLIIIJC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1653A090)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_PADDLLIIIJC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1653A0A0)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_PADDLLIIIJC_WRITE_OFFSET UNITYSDK_OFFSET(0x1653A3B0)
#define MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_PADDLLIIIJC__CTOR_OFFSET UNITYSDK_OFFSET(0x1653A590)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHitInhalationEffect_PADDLLIIIJC_TypeDefinitionIndex = 84939;

	class ConfigHitInhalationEffect_PADDLLIIIJC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_PADDLLIIIJC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_PADDLLIIIJC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigHitInhalationEffect*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigHitInhalationEffect*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_PADDLLIIIJC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigHitInhalationEffect*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitInhalationEffect*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHITINHALATIONEFFECT_PADDLLIIIJC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
