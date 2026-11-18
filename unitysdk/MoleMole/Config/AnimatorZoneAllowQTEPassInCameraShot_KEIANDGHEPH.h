#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneAllowQTEPassInCameraShot; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_KEIANDGHEPH_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B063F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_KEIANDGHEPH_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B06400)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_KEIANDGHEPH_WRITE_OFFSET UNITYSDK_OFFSET(0x19B06850)
#define MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_KEIANDGHEPH__CTOR_OFFSET UNITYSDK_OFFSET(0x19B06AE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAllowQTEPassInCameraShot_KEIANDGHEPH_TypeDefinitionIndex = 78994;

	class AnimatorZoneAllowQTEPassInCameraShot_KEIANDGHEPH
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_KEIANDGHEPH__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_KEIANDGHEPH_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAllowQTEPassInCameraShot*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAllowQTEPassInCameraShot*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_KEIANDGHEPH_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAllowQTEPassInCameraShot*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAllowQTEPassInCameraShot*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEALLOWQTEPASSINCAMERASHOT_KEIANDGHEPH_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
