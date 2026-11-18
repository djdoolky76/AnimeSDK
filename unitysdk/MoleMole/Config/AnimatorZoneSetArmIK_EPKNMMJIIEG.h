#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSetArmIK; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_EPKNMMJIIEG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1922E170)
#define MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_EPKNMMJIIEG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1922E180)
#define MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_EPKNMMJIIEG_WRITE_OFFSET UNITYSDK_OFFSET(0x1922E5D0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_EPKNMMJIIEG__CTOR_OFFSET UNITYSDK_OFFSET(0x1922E860)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetArmIK_EPKNMMJIIEG_TypeDefinitionIndex = 73580;

	class AnimatorZoneSetArmIK_EPKNMMJIIEG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_EPKNMMJIIEG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_EPKNMMJIIEG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetArmIK*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetArmIK*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_EPKNMMJIIEG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetArmIK*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetArmIK*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETARMIK_EPKNMMJIIEG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
