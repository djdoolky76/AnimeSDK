#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneDitherInCollision; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_OFNMPMCHIAG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x12766DB0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_OFNMPMCHIAG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x12766DC0)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_OFNMPMCHIAG_WRITE_OFFSET UNITYSDK_OFFSET(0x12767210)
#define MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_OFNMPMCHIAG__CTOR_OFFSET UNITYSDK_OFFSET(0x127674A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneDitherInCollision_OFNMPMCHIAG_TypeDefinitionIndex = 65676;

	class AnimatorZoneDitherInCollision_OFNMPMCHIAG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_OFNMPMCHIAG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_OFNMPMCHIAG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneDitherInCollision*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDitherInCollision*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_OFNMPMCHIAG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneDitherInCollision*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneDitherInCollision*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEDITHERINCOLLISION_OFNMPMCHIAG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
