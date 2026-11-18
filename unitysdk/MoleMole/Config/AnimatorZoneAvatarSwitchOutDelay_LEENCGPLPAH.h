#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneAvatarSwitchOutDelay; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_LEENCGPLPAH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1908DB70)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_LEENCGPLPAH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1908DB80)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_LEENCGPLPAH_WRITE_OFFSET UNITYSDK_OFFSET(0x1908E260)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_LEENCGPLPAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1908E650)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAvatarSwitchOutDelay_LEENCGPLPAH_TypeDefinitionIndex = 92743;

	class AnimatorZoneAvatarSwitchOutDelay_LEENCGPLPAH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_LEENCGPLPAH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_LEENCGPLPAH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAvatarSwitchOutDelay*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAvatarSwitchOutDelay*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_LEENCGPLPAH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAvatarSwitchOutDelay*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAvatarSwitchOutDelay*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATARSWITCHOUTDELAY_LEENCGPLPAH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
