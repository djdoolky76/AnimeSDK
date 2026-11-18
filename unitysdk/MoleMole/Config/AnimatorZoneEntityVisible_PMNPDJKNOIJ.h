#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneEntityVisible; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYVISIBLE_PMNPDJKNOIJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x18B86C60)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYVISIBLE_PMNPDJKNOIJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x18B86C70)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYVISIBLE_PMNPDJKNOIJ_WRITE_OFFSET UNITYSDK_OFFSET(0x18B87160)
#define MOLEMOLE_CONFIG_ANIMATORZONEENTITYVISIBLE_PMNPDJKNOIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18B87440)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneEntityVisible_PMNPDJKNOIJ_TypeDefinitionIndex = 47145;

	class AnimatorZoneEntityVisible_PMNPDJKNOIJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYVISIBLE_PMNPDJKNOIJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYVISIBLE_PMNPDJKNOIJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneEntityVisible*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneEntityVisible*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYVISIBLE_PMNPDJKNOIJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneEntityVisible*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneEntityVisible*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEENTITYVISIBLE_PMNPDJKNOIJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
