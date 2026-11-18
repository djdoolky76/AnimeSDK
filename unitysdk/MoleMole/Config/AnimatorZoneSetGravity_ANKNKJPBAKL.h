#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneSetGravity; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ANKNKJPBAKL_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA201E0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ANKNKJPBAKL_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA201F0)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ANKNKJPBAKL_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA20A10)
#define MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ANKNKJPBAKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA20EB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneSetGravity_ANKNKJPBAKL_TypeDefinitionIndex = 53550;

	class AnimatorZoneSetGravity_ANKNKJPBAKL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ANKNKJPBAKL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ANKNKJPBAKL_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneSetGravity*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetGravity*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ANKNKJPBAKL_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneSetGravity*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneSetGravity*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONESETGRAVITY_ANKNKJPBAKL_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
