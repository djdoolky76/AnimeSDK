#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class PosConstraintBones; }
namespace UnityChan { class SpringManager; }

#define RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_AKHBNOGNGNK_OFFSET UNITYSDK_OFFSET(0xCBE3600)
#define RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0xCBE37B0)
#define RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_HJFFHBPCBNC_OFFSET UNITYSDK_OFFSET(0xCBE2820)
#define RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_IFHKMIEENHN_OFFSET UNITYSDK_OFFSET(0xCBE36E0)
#define RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCBE27D0)

namespace RPG::Client
{
	class CustomPositionConstraint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean Active; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single AngleConstraint; // 0x1C
		::UnityEngine::Vector3 BoneAxis; // 0x20
		::UnityEngine::Vector3 BoneToward; // 0x2C
		::System::Single Weight; // 0x38
		::System::Byte _padding1[0x4];
		::UnityChan::SpringManager* SpringManager; // 0x40
		::System::Single TransitionThreshold; // 0x48
		::System::Single SbRatio; // 0x4C
		::Il2CppArray<::RPG::Client::PosConstraintBones*>* AdjustBoneArray; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void HJFFHBPCBNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_HJFFHBPCBNC_OFFSET))(this);
		}

		static ::System::Single IFHKMIEENHN(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_IFHKMIEENHN_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Single AKHBNOGNGNK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMPOSITIONCONSTRAINT_AKHBNOGNGNK_OFFSET))(this);
		}

	};
}
