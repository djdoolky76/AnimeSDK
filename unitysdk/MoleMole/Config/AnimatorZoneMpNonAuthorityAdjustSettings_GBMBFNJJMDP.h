#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneMpNonAuthorityAdjustSettings; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMPNONAUTHORITYADJUSTSETTINGS_GBMBFNJJMDP_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x11E7BA60)
#define MOLEMOLE_CONFIG_ANIMATORZONEMPNONAUTHORITYADJUSTSETTINGS_GBMBFNJJMDP_READMEMBER_OFFSET UNITYSDK_OFFSET(0x11E7BA70)
#define MOLEMOLE_CONFIG_ANIMATORZONEMPNONAUTHORITYADJUSTSETTINGS_GBMBFNJJMDP_WRITE_OFFSET UNITYSDK_OFFSET(0x11E7BF60)
#define MOLEMOLE_CONFIG_ANIMATORZONEMPNONAUTHORITYADJUSTSETTINGS_GBMBFNJJMDP__CTOR_OFFSET UNITYSDK_OFFSET(0x11E7C240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMpNonAuthorityAdjustSettings_GBMBFNJJMDP_TypeDefinitionIndex = 47952;

	class AnimatorZoneMpNonAuthorityAdjustSettings_GBMBFNJJMDP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMPNONAUTHORITYADJUSTSETTINGS_GBMBFNJJMDP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMPNONAUTHORITYADJUSTSETTINGS_GBMBFNJJMDP_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneMpNonAuthorityAdjustSettings*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMpNonAuthorityAdjustSettings*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMPNONAUTHORITYADJUSTSETTINGS_GBMBFNJJMDP_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneMpNonAuthorityAdjustSettings*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMpNonAuthorityAdjustSettings*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMPNONAUTHORITYADJUSTSETTINGS_GBMBFNJJMDP_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
