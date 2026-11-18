#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneAmLegIKAuthoritySwitch; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_LANINMFEKHG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1908D440)
#define MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_LANINMFEKHG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1908D450)
#define MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_LANINMFEKHG_WRITE_OFFSET UNITYSDK_OFFSET(0x1908D8A0)
#define MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_LANINMFEKHG__CTOR_OFFSET UNITYSDK_OFFSET(0x1908DB30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAmLegIKAuthoritySwitch_LANINMFEKHG_TypeDefinitionIndex = 59407;

	class AnimatorZoneAmLegIKAuthoritySwitch_LANINMFEKHG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_LANINMFEKHG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_LANINMFEKHG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAmLegIKAuthoritySwitch*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAmLegIKAuthoritySwitch*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_LANINMFEKHG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAmLegIKAuthoritySwitch*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAmLegIKAuthoritySwitch*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAMLEGIKAUTHORITYSWITCH_LANINMFEKHG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
