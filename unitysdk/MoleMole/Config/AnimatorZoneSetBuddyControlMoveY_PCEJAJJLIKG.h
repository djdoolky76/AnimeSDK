#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSetBuddyControlMoveY; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_PCEJAJJLIKG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFFC9630)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_PCEJAJJLIKG_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFFC9640)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_PCEJAJJLIKG_WRITE_OFFSET UNITYSDK_OFFSET(0xFFC9DC0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_PCEJAJJLIKG__CTOR_OFFSET UNITYSDK_OFFSET(0xFFCA210)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetBuddyControlMoveY_PCEJAJJLIKG_TypeDefinitionIndex = 79184;

	class AnimatorZoneSetBuddyControlMoveY_PCEJAJJLIKG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_PCEJAJJLIKG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_PCEJAJJLIKG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetBuddyControlMoveY*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetBuddyControlMoveY*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_PCEJAJJLIKG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetBuddyControlMoveY*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetBuddyControlMoveY*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETBUDDYCONTROLMOVEY_PCEJAJJLIKG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
