#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneBuddySwitchZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHZONE_DMHIPKJADEN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1651F300)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHZONE_DMHIPKJADEN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1651F310)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHZONE_DMHIPKJADEN_WRITE_OFFSET UNITYSDK_OFFSET(0x1651FBD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHZONE_DMHIPKJADEN__CTOR_OFFSET UNITYSDK_OFFSET(0x165200D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBuddySwitchZone_DMHIPKJADEN_TypeDefinitionIndex = 49741;

	class AnimatorZoneBuddySwitchZone_DMHIPKJADEN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHZONE_DMHIPKJADEN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHZONE_DMHIPKJADEN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneBuddySwitchZone*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneBuddySwitchZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHZONE_DMHIPKJADEN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneBuddySwitchZone*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneBuddySwitchZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYSWITCHZONE_DMHIPKJADEN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
