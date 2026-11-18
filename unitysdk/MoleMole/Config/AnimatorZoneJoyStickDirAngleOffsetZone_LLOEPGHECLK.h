#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneJoyStickDirAngleOffsetZone; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_LLOEPGHECLK_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xFFC7720)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_LLOEPGHECLK_READMEMBER_OFFSET UNITYSDK_OFFSET(0xFFC7730)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_LLOEPGHECLK_WRITE_OFFSET UNITYSDK_OFFSET(0xFFC7B80)
#define MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_LLOEPGHECLK__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC7E10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneJoyStickDirAngleOffsetZone_LLOEPGHECLK_TypeDefinitionIndex = 83983;

	class AnimatorZoneJoyStickDirAngleOffsetZone_LLOEPGHECLK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_LLOEPGHECLK__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_LLOEPGHECLK_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneJoyStickDirAngleOffsetZone*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneJoyStickDirAngleOffsetZone*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_LLOEPGHECLK_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneJoyStickDirAngleOffsetZone*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneJoyStickDirAngleOffsetZone*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEJOYSTICKDIRANGLEOFFSETZONE_LLOEPGHECLK_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
