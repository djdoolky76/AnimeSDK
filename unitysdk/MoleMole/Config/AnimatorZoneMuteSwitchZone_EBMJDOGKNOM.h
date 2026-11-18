#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneMuteSwitchZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_EBMJDOGKNOM_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18B89AC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_EBMJDOGKNOM_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18B89AD0)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_EBMJDOGKNOM_WRITE_OFFSET UNITYSDK_OFFSET(0x18B8A100)
#define MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_EBMJDOGKNOM__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8A4A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneMuteSwitchZone_EBMJDOGKNOM_TypeDefinitionIndex = 68248;

	class AnimatorZoneMuteSwitchZone_EBMJDOGKNOM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_EBMJDOGKNOM__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_EBMJDOGKNOM_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneMuteSwitchZone*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteSwitchZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_EBMJDOGKNOM_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneMuteSwitchZone*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneMuteSwitchZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEMUTESWITCHZONE_EBMJDOGKNOM_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
