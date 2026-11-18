#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneEntityMuteBeSelected; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ICJJDFFEFEC_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18B85E40)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ICJJDFFEFEC_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18B85E50)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ICJJDFFEFEC_WRITE_OFFSET UNITYSDK_OFFSET(0x18B863E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ICJJDFFEFEC__CTOR_OFFSET UNITYSDK_OFFSET(0x18B86720)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneEntityMuteBeSelected_ICJJDFFEFEC_TypeDefinitionIndex = 73489;

	class AnimatorZoneEntityMuteBeSelected_ICJJDFFEFEC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ICJJDFFEFEC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ICJJDFFEFEC_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneEntityMuteBeSelected*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneEntityMuteBeSelected*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ICJJDFFEFEC_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneEntityMuteBeSelected*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneEntityMuteBeSelected*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYMUTEBESELECTED_ICJJDFFEFEC_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
