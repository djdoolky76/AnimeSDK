#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverLimb_BendModifier.h"
#include "unitysdk/RootMotion/FinalIK/IKSolverTrigonometric.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RootMotion/FinalIK/GrounderIKThreadSolver_Limb.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERLIMB_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1F0C68A0)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_COPYTO_OFFSET UNITYSDK_OFFSET(0x1F0C64B0)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0C8670)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0C83E0)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_GETMODIFIEDBENDNORMAL_OFFSET UNITYSDK_OFFSET(0x1F0C7470)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_GET_AXISDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x1F0C87E0)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_MAINTAINBEND_OFFSET UNITYSDK_OFFSET(0x1F0C5B50)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_MAINTAINROTATION_OFFSET UNITYSDK_OFFSET(0x1F0C5AF0)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_ONINITIATEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1F0C6930)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_ONPOSTSOLVEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1F0C8300)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_ONUPDATEVIRTUAL_OFFSET UNITYSDK_OFFSET(0x1F0C7340)
#define ROOTMOTION_FINALIK_IKSOLVERLIMB_STOREAXISDIRECTIONS_OFFSET UNITYSDK_OFFSET(0x1F0C71D0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLimb_TypeDefinitionIndex = 47049;

	class IKSolverLimb : public ::RootMotion::FinalIK::IKSolverTrigonometric
	{
	public:
		::UnityEngine::AvatarIKGoal goal; // 0xB0
		::RootMotion::FinalIK::IKSolverLimb_BendModifier bendModifier; // 0xB4
		::System::Single maintainRotationWeight; // 0xB8
		::System::Single bendModifierWeight; // 0xBC
		::UnityEngine::Transform* bendGoal; // 0xC0
		::System::Boolean useBendGoalForInitialBend; // 0xC8
		::System::Boolean maintainBendFor1Frame; // 0xC9
		::System::Boolean maintainRotationFor1Frame; // 0xCA
		::System::Byte _padding0[0x1];
		::UnityEngine::Quaternion defaultRootRotation; // 0xCC
		::UnityEngine::Quaternion parentDefaultRotation; // 0xDC
		::UnityEngine::Quaternion bone3RotationBeforeSolve; // 0xEC
		::UnityEngine::Quaternion maintainRotation; // 0xFC
		::UnityEngine::Quaternion bone3DefaultRotation; // 0x10C
		::UnityEngine::Vector3 _bendNormal; // 0x11C
		::UnityEngine::Vector3 animationNormal; // 0x128
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Object*>* axisDirectionsLeft; // 0x138
		::Il2CppArray<::System::Object*>* axisDirectionsRight; // 0x140
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::AvatarIKGoal a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void MaintainRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_MAINTAINROTATION_OFFSET))(this);
		}

		::System::Void MaintainBend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_MAINTAINBEND_OFFSET))(this);
		}

		::System::Void CopyTo(::RootMotion::FinalIK::GrounderIKThreadSolver_Limb a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIKThreadSolver_Limb))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_COPYTO_OFFSET))(this, a1);
		}

		::System::Void CopyFrom(::RootMotion::FinalIK::GrounderIKThreadSolver_Limb a1)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GrounderIKThreadSolver_Limb))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_COPYFROM_OFFSET))(this, a1);
		}

		::System::Void OnInitiateVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_ONINITIATEVIRTUAL_OFFSET))(this);
		}

		::System::Void OnUpdateVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_ONUPDATEVIRTUAL_OFFSET))(this);
		}

		::System::Void OnPostSolveVirtual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_ONPOSTSOLVEVIRTUAL_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* get_axisDirections()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_GET_AXISDIRECTIONS_OFFSET))(this);
		}

		::System::Void StoreAxisDirections(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_STOREAXISDIRECTIONS_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetModifiedBendNormal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLIMB_GETMODIFIEDBENDNORMAL_OFFSET))(this);
		}

	};
}
