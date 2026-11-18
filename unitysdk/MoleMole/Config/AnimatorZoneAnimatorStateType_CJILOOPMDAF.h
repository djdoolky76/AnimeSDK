#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneAnimatorStateType; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CJILOOPMDAF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1651E730)
#define MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CJILOOPMDAF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1651E740)
#define MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CJILOOPMDAF_WRITE_OFFSET UNITYSDK_OFFSET(0x1651EB90)
#define MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CJILOOPMDAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1651EE20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneAnimatorStateType_CJILOOPMDAF_TypeDefinitionIndex = 75084;

	class AnimatorZoneAnimatorStateType_CJILOOPMDAF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CJILOOPMDAF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CJILOOPMDAF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneAnimatorStateType*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAnimatorStateType*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CJILOOPMDAF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneAnimatorStateType*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneAnimatorStateType*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEANIMATORSTATETYPE_CJILOOPMDAF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
