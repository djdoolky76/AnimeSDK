#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class ConfigOverShoulderCamera; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_AGFBEPPOLNP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A766150)
#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_AGFBEPPOLNP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1A766160)
#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_AGFBEPPOLNP_WRITE_OFFSET UNITYSDK_OFFSET(0x1A7662F0)
#define MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_AGFBEPPOLNP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A766410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOverShoulderCamera_AGFBEPPOLNP_TypeDefinitionIndex = 83862;

	class ConfigOverShoulderCamera_AGFBEPPOLNP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_AGFBEPPOLNP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_AGFBEPPOLNP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::ConfigOverShoulderCamera*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::ConfigOverShoulderCamera*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_AGFBEPPOLNP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::ConfigOverShoulderCamera*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOverShoulderCamera*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERSHOULDERCAMERA_AGFBEPPOLNP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
