#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneBuddyInteract; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYINTERACT_CJJADPHPCBO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1928DE30)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYINTERACT_CJJADPHPCBO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1928DE40)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYINTERACT_CJJADPHPCBO_WRITE_OFFSET UNITYSDK_OFFSET(0x1928E1F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEBUDDYINTERACT_CJJADPHPCBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1928E420)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneBuddyInteract_CJJADPHPCBO_TypeDefinitionIndex = 85154;

	class AnimatorZoneBuddyInteract_CJJADPHPCBO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYINTERACT_CJJADPHPCBO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYINTERACT_CJJADPHPCBO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneBuddyInteract*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneBuddyInteract*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYINTERACT_CJJADPHPCBO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneBuddyInteract*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneBuddyInteract*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEBUDDYINTERACT_CJJADPHPCBO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
