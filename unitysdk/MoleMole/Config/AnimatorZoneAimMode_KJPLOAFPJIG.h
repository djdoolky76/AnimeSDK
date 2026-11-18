#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneAimMode; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEAIMMODE_KJPLOAFPJIG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x174EB700)
#define MOLEMOLE_CONFIG_ANIMATORZONEAIMMODE_KJPLOAFPJIG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x174EB710)
#define MOLEMOLE_CONFIG_ANIMATORZONEAIMMODE_KJPLOAFPJIG_WRITE_OFFSET UNITYSDK_OFFSET(0x174EBB60)
#define MOLEMOLE_CONFIG_ANIMATORZONEAIMMODE_KJPLOAFPJIG__CTOR_OFFSET UNITYSDK_OFFSET(0x174EBDF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAimMode_KJPLOAFPJIG_TypeDefinitionIndex = 67565;

	class AnimatorZoneAimMode_KJPLOAFPJIG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAIMMODE_KJPLOAFPJIG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAIMMODE_KJPLOAFPJIG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAimMode*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAimMode*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAIMMODE_KJPLOAFPJIG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAimMode*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAimMode*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAIMMODE_KJPLOAFPJIG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
