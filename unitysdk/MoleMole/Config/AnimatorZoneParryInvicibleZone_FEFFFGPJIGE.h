#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneParryInvicibleZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYINVICIBLEZONE_FEFFFGPJIGE_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x19B0D2C0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYINVICIBLEZONE_FEFFFGPJIGE_READMEMBER_OFFSET UNITYSDK_OFFSET(0x19B0D2D0)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYINVICIBLEZONE_FEFFFGPJIGE_WRITE_OFFSET UNITYSDK_OFFSET(0x19B0D680)
#define MOLEMOLE_CONFIG_ANIMATORZONEPARRYINVICIBLEZONE_FEFFFGPJIGE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B0D8B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneParryInvicibleZone_FEFFFGPJIGE_TypeDefinitionIndex = 51881;

	class AnimatorZoneParryInvicibleZone_FEFFFGPJIGE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYINVICIBLEZONE_FEFFFGPJIGE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYINVICIBLEZONE_FEFFFGPJIGE_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneParryInvicibleZone*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneParryInvicibleZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYINVICIBLEZONE_FEFFFGPJIGE_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneParryInvicibleZone*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneParryInvicibleZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEPARRYINVICIBLEZONE_FEFFFGPJIGE_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
