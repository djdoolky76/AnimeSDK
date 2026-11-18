#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneWeaponTrail; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEWEAPONTRAIL_IPFEIPJBOFE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E82330)
#define MOLEMOLE_CONFIG_ANIMATORZONEWEAPONTRAIL_IPFEIPJBOFE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E82340)
#define MOLEMOLE_CONFIG_ANIMATORZONEWEAPONTRAIL_IPFEIPJBOFE_WRITE_OFFSET UNITYSDK_OFFSET(0x11E82790)
#define MOLEMOLE_CONFIG_ANIMATORZONEWEAPONTRAIL_IPFEIPJBOFE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E82A20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneWeaponTrail_IPFEIPJBOFE_TypeDefinitionIndex = 53810;

	class AnimatorZoneWeaponTrail_IPFEIPJBOFE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWEAPONTRAIL_IPFEIPJBOFE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWEAPONTRAIL_IPFEIPJBOFE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneWeaponTrail*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneWeaponTrail*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWEAPONTRAIL_IPFEIPJBOFE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneWeaponTrail*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneWeaponTrail*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWEAPONTRAIL_IPFEIPJBOFE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
