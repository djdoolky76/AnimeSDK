#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class RaycastHitWallEffectConfig; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FFEPGIMKOHL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFAD7E50)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FFEPGIMKOHL_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFAD7E60)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FFEPGIMKOHL_WRITE_OFFSET UNITYSDK_OFFSET(0xFAD86D0)
#define MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FFEPGIMKOHL__CTOR_OFFSET UNITYSDK_OFFSET(0xFAD8BE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int RaycastHitWallEffectConfig_FFEPGIMKOHL_TypeDefinitionIndex = 38965;

	class RaycastHitWallEffectConfig_FFEPGIMKOHL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FFEPGIMKOHL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FFEPGIMKOHL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::RaycastHitWallEffectConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::RaycastHitWallEffectConfig*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FFEPGIMKOHL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::RaycastHitWallEffectConfig*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::RaycastHitWallEffectConfig*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_RAYCASTHITWALLEFFECTCONFIG_FFEPGIMKOHL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
