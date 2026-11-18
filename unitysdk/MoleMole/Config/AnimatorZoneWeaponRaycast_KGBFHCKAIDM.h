#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneWeaponRaycast; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEWEAPONRAYCAST_KGBFHCKAIDM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA218A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWEAPONRAYCAST_KGBFHCKAIDM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA218B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWEAPONRAYCAST_KGBFHCKAIDM_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA21D00)
#define MOLEMOLE_CONFIG_ANIMATORZONEWEAPONRAYCAST_KGBFHCKAIDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA21F90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneWeaponRaycast_KGBFHCKAIDM_TypeDefinitionIndex = 46677;

	class AnimatorZoneWeaponRaycast_KGBFHCKAIDM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWEAPONRAYCAST_KGBFHCKAIDM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWEAPONRAYCAST_KGBFHCKAIDM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneWeaponRaycast*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneWeaponRaycast*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWEAPONRAYCAST_KGBFHCKAIDM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneWeaponRaycast*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneWeaponRaycast*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWEAPONRAYCAST_KGBFHCKAIDM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
