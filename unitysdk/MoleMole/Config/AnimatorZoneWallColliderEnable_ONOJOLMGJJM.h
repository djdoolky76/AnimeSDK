#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneWallColliderEnable; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERENABLE_ONOJOLMGJJM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x192913F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERENABLE_ONOJOLMGJJM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19291400)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERENABLE_ONOJOLMGJJM_WRITE_OFFSET UNITYSDK_OFFSET(0x192918F0)
#define MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERENABLE_ONOJOLMGJJM__CTOR_OFFSET UNITYSDK_OFFSET(0x19291BD0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneWallColliderEnable_ONOJOLMGJJM_TypeDefinitionIndex = 49251;

	class AnimatorZoneWallColliderEnable_ONOJOLMGJJM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERENABLE_ONOJOLMGJJM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERENABLE_ONOJOLMGJJM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneWallColliderEnable*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneWallColliderEnable*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERENABLE_ONOJOLMGJJM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneWallColliderEnable*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneWallColliderEnable*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEWALLCOLLIDERENABLE_ONOJOLMGJJM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
