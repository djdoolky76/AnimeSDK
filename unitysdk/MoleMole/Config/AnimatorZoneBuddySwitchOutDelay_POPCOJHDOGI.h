#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneBuddySwitchOutDelay; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_POPCOJHDOGI_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFFC6BA0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_POPCOJHDOGI_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFFC6BB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_POPCOJHDOGI_WRITE_OFFSET UNITYSDK_OFFSET(0xFFC7290)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_POPCOJHDOGI__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC7680)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBuddySwitchOutDelay_POPCOJHDOGI_TypeDefinitionIndex = 58914;

	class AnimatorZoneBuddySwitchOutDelay_POPCOJHDOGI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_POPCOJHDOGI__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_POPCOJHDOGI_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneBuddySwitchOutDelay*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneBuddySwitchOutDelay*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_POPCOJHDOGI_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneBuddySwitchOutDelay*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneBuddySwitchOutDelay*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHOUTDELAY_POPCOJHDOGI_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
