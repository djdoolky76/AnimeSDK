#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneJoyStickDirZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GJIBEHPONKO_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x163FCC50)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GJIBEHPONKO_READMEMBER_OFFSET UNITYSDK_OFFSET(0x163FCC60)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GJIBEHPONKO_WRITE_OFFSET UNITYSDK_OFFSET(0x163FD3E0)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GJIBEHPONKO__CTOR_OFFSET UNITYSDK_OFFSET(0x163FD830)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneJoyStickDirZone_GJIBEHPONKO_TypeDefinitionIndex = 91162;

	class AnimatorZoneJoyStickDirZone_GJIBEHPONKO
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GJIBEHPONKO__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GJIBEHPONKO_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneJoyStickDirZone*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneJoyStickDirZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GJIBEHPONKO_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneJoyStickDirZone*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneJoyStickDirZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRZONE_GJIBEHPONKO_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
