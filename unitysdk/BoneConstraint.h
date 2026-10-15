#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class ConstraintBones;
namespace RPG::Client { class LookAtIK; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define BONECONSTRAINT_CPOICLJHJDK_OFFSET UNITYSDK_OFFSET(0xC1B5C00)
#define BONECONSTRAINT_CTOR_OFFSET UNITYSDK_OFFSET(0xC1B5C70)
#define BONECONSTRAINT_HJFFHBPCBNC_OFFSET UNITYSDK_OFFSET(0xC1B4D60)
#define BONECONSTRAINT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC1B4CF0)

inline static constexpr unsigned int BoneConstraint_TypeDefinitionIndex = 47441;

	class BoneConstraint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::LookAtIK* LookAtIK; // 0x18
		::UnityEngine::Transform* SelfBone; // 0x20
		::UnityEngine::AnimationCurve* WeightCurve; // 0x28
		::System::Boolean X; // 0x30
		::System::Boolean Y; // 0x31
		::System::Boolean Z; // 0x32
		::System::Byte _padding0[0x5];
		::Il2CppArray<::ConstraintBones*>* AdjustBoneList; // 0x38
		::UnityEngine::Quaternion MBMNNOHKIEI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONECONSTRAINT_CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONECONSTRAINT_LATEUPDATE_OFFSET))(this);
		}

		::System::Void HJFFHBPCBNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BONECONSTRAINT_HJFFHBPCBNC_OFFSET))(this);
		}

		::System::Void CPOICLJHJDK(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BONECONSTRAINT_CPOICLJHJDK_OFFSET))(this, a1);
		}

	};
