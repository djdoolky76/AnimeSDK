#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneAvatarExQTEState; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEAVATAREXQTESTATE_NCLCMMMCOPJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x127654A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATAREXQTESTATE_NCLCMMMCOPJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x127654B0)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATAREXQTESTATE_NCLCMMMCOPJ_WRITE_OFFSET UNITYSDK_OFFSET(0x12765860)
#define MOLEMOLE_CONFIG_ANIMATORZONEAVATAREXQTESTATE_NCLCMMMCOPJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12765A90)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAvatarExQTEState_NCLCMMMCOPJ_TypeDefinitionIndex = 41771;

	class AnimatorZoneAvatarExQTEState_NCLCMMMCOPJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATAREXQTESTATE_NCLCMMMCOPJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATAREXQTESTATE_NCLCMMMCOPJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAvatarExQTEState*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAvatarExQTEState*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATAREXQTESTATE_NCLCMMMCOPJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAvatarExQTEState*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAvatarExQTEState*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAVATAREXQTESTATE_NCLCMMMCOPJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
