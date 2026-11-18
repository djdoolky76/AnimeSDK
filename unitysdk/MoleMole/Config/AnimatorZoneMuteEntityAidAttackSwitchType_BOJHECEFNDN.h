#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneMuteEntityAidAttackSwitchType; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_BOJHECEFNDN_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x131D6CE0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_BOJHECEFNDN_READMEMBER_OFFSET UNITYSDK_OFFSET(0x131D6CF0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_BOJHECEFNDN_WRITE_OFFSET UNITYSDK_OFFSET(0x131D7140)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_BOJHECEFNDN__CTOR_OFFSET UNITYSDK_OFFSET(0x131D73D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteEntityAidAttackSwitchType_BOJHECEFNDN_TypeDefinitionIndex = 50059;

	class AnimatorZoneMuteEntityAidAttackSwitchType_BOJHECEFNDN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_BOJHECEFNDN__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_BOJHECEFNDN_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneMuteEntityAidAttackSwitchType*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteEntityAidAttackSwitchType*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_BOJHECEFNDN_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneMuteEntityAidAttackSwitchType*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteEntityAidAttackSwitchType*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTEENTITYAIDATTACKSWITCHTYPE_BOJHECEFNDN_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
