#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole::Config { class AnimatorZoneApplyMoveByJoystickNoSteer; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_CONFIG_ANIMATORZONEAPPLYMOVEBYJOYSTICKNOSTEER_JFILKDKFNGJ_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA1C160)
#define MOLEMOLE_CONFIG_ANIMATORZONEAPPLYMOVEBYJOYSTICKNOSTEER_JFILKDKFNGJ_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1BA1C170)
#define MOLEMOLE_CONFIG_ANIMATORZONEAPPLYMOVEBYJOYSTICKNOSTEER_JFILKDKFNGJ_WRITE_OFFSET UNITYSDK_OFFSET(0x1BA1C520)
#define MOLEMOLE_CONFIG_ANIMATORZONEAPPLYMOVEBYJOYSTICKNOSTEER_JFILKDKFNGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA1C750)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneApplyMoveByJoystickNoSteer_JFILKDKFNGJ_TypeDefinitionIndex = 60334;

	class AnimatorZoneApplyMoveByJoystickNoSteer_JFILKDKFNGJ
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAPPLYMOVEBYJOYSTICKNOSTEER_JFILKDKFNGJ__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAPPLYMOVEBYJOYSTICKNOSTEER_JFILKDKFNGJ_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::Config::AnimatorZoneApplyMoveByJoystickNoSteer*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Config::AnimatorZoneApplyMoveByJoystickNoSteer*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAPPLYMOVEBYJOYSTICKNOSTEER_JFILKDKFNGJ_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::Config::AnimatorZoneApplyMoveByJoystickNoSteer*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneApplyMoveByJoystickNoSteer*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATORZONEAPPLYMOVEBYJOYSTICKNOSTEER_JFILKDKFNGJ_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
