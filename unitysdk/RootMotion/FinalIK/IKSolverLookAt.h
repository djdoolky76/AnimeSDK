#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IKSolver.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IKSolverLookAt_LookAtBone; }
namespace RootMotion::FinalIK { class IKSolver_Point; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1F262B00)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GETFORWARDS_OFFSET UNITYSDK_OFFSET(0x1F265900)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GETPOINTS_OFFSET UNITYSDK_OFFSET(0x1F263630)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GETPOINT_OFFSET UNITYSDK_OFFSET(0x1F263AF0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_EYESISEMPTY_OFFSET UNITYSDK_OFFSET(0x1F263610)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_EYESISVALID_OFFSET UNITYSDK_OFFSET(0x1F263350)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_HEADBASEFORWARD_OFFSET UNITYSDK_OFFSET(0x1F265DB0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_HEADISEMPTY_OFFSET UNITYSDK_OFFSET(0x1F2634F0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_HEADISVALID_OFFSET UNITYSDK_OFFSET(0x1F263340)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_SPINEBASEFORWARD_OFFSET UNITYSDK_OFFSET(0x1F265DF0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_SPINEISEMPTY_OFFSET UNITYSDK_OFFSET(0x1F2634D0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_SPINEISVALID_OFFSET UNITYSDK_OFFSET(0x1F2631C0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F262D20)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_ONINITIATE_OFFSET UNITYSDK_OFFSET(0x1F263F80)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F264700)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETBONES_OFFSET UNITYSDK_OFFSET(0x1F263D80)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETCHAIN_OFFSET UNITYSDK_OFFSET(0x1F263CB0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_1_OFFSET UNITYSDK_OFFSET(0x1F262410)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_2_OFFSET UNITYSDK_OFFSET(0x1F262460)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_3_OFFSET UNITYSDK_OFFSET(0x1F2624D0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_4_OFFSET UNITYSDK_OFFSET(0x1F262570)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_5_OFFSET UNITYSDK_OFFSET(0x1F262640)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_OFFSET UNITYSDK_OFFSET(0x1F2623E0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SOLVEEYES_OFFSET UNITYSDK_OFFSET(0x1F265190)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SOLVEHEAD_OFFSET UNITYSDK_OFFSET(0x1F264C20)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SOLVESPINE_OFFSET UNITYSDK_OFFSET(0x1F2649A0)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT_STOREDEFAULTLOCALSTATE_OFFSET UNITYSDK_OFFSET(0x1F262760)
#define ROOTMOTION_FINALIK_IKSOLVERLOOKAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F265E70)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IKSolverLookAt_TypeDefinitionIndex = 36839;

	class IKSolverLookAt : public ::RootMotion::FinalIK::IKSolver
	{
	public:
		::UnityEngine::Transform* target; // 0x60
		::Il2CppArray<::System::Object*>* spine; // 0x68
		::RootMotion::FinalIK::IKSolverLookAt_LookAtBone* head; // 0x70
		::Il2CppArray<::System::Object*>* eyes; // 0x78
		::System::Single bodyWeight; // 0x80
		::System::Single headWeight; // 0x84
		::System::Single eyesWeight; // 0x88
		::System::Single clampWeight; // 0x8C
		::System::Single clampWeightHead; // 0x90
		::System::Single clampWeightEyes; // 0x94
		::System::Int32 clampSmoothing; // 0x98
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* spineWeightCurve; // 0xA0
		::UnityEngine::Vector3 spineTargetOffset; // 0xA8
		::System::Boolean useEyeRange; // 0xB4
		::System::Byte _padding1[0x3];
		::System::Single eyeRange; // 0xB8
		::System::Byte _padding2[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* spineForwards; // 0xC0
		::Il2CppArray<::UnityEngine::Vector3>* headForwards; // 0xC8
		::Il2CppArray<::UnityEngine::Vector3>* eyeForward; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT__CTOR_OFFSET))(this);
		}

		::System::Void SetLookAtWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SetLookAtWeight_1(::System::Single weight, ::System::Single bodyWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_1_OFFSET))(this, weight, bodyWeight);
		}

		::System::Void SetLookAtWeight_2(::System::Single weight, ::System::Single bodyWeight, ::System::Single headWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_2_OFFSET))(this, weight, bodyWeight, headWeight);
		}

		::System::Void SetLookAtWeight_3(::System::Single weight, ::System::Single bodyWeight, ::System::Single headWeight, ::System::Single eyesWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_3_OFFSET))(this, weight, bodyWeight, headWeight, eyesWeight);
		}

		::System::Void SetLookAtWeight_4(::System::Single weight, ::System::Single bodyWeight, ::System::Single headWeight, ::System::Single eyesWeight, ::System::Single clampWeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_4_OFFSET))(this, weight, bodyWeight, headWeight, eyesWeight, clampWeight);
		}

		::System::Void SetLookAtWeight_5(::System::Single weight, ::System::Single bodyWeight, ::System::Single headWeight, ::System::Single eyesWeight, ::System::Single clampWeight, ::System::Single clampWeightHead, ::System::Single clampWeightEyes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETLOOKATWEIGHT_5_OFFSET))(this, weight, bodyWeight, headWeight, eyesWeight, clampWeight, clampWeightHead, clampWeightEyes);
		}

		::System::Void StoreDefaultLocalState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_STOREDEFAULTLOCALSTATE_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::String*& message)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_ISVALID_OFFSET))(this, message);
		}

		::Il2CppArray<::System::Object*>* GetPoints()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GETPOINTS_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver_Point* GetPoint(::UnityEngine::Transform* transform)
		{
			return ((::RootMotion::FinalIK::IKSolver_Point*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GETPOINT_OFFSET))(this, transform);
		}

		::System::Boolean SetChain(::Il2CppArray<::UnityEngine::Transform*>* spine, ::UnityEngine::Transform* head, ::Il2CppArray<::UnityEngine::Transform*>* eyes, ::UnityEngine::Transform* root)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETCHAIN_OFFSET))(this, spine, head, eyes, root);
		}

		::System::Void OnInitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_ONINITIATE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_ONUPDATE_OFFSET))(this);
		}

		::System::Boolean get_spineIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_SPINEISVALID_OFFSET))(this);
		}

		::System::Boolean get_spineIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_SPINEISEMPTY_OFFSET))(this);
		}

		::System::Void SolveSpine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SOLVESPINE_OFFSET))(this);
		}

		::System::Boolean get_headIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_HEADISVALID_OFFSET))(this);
		}

		::System::Boolean get_headIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_HEADISEMPTY_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_headBaseForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_HEADBASEFORWARD_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_spineBaseForward()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_SPINEBASEFORWARD_OFFSET))(this);
		}

		::System::Void SolveHead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SOLVEHEAD_OFFSET))(this);
		}

		::System::Boolean get_eyesIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_EYESISVALID_OFFSET))(this);
		}

		::System::Boolean get_eyesIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GET_EYESISEMPTY_OFFSET))(this);
		}

		::System::Void SolveEyes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SOLVEEYES_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetForwards(::Il2CppArray<::UnityEngine::Vector3>*& forwards, ::UnityEngine::Vector3 baseForward, ::UnityEngine::Vector3 targetForward, ::System::Int32 bones, ::System::Single clamp)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_GETFORWARDS_OFFSET))(this, forwards, baseForward, targetForward, bones, clamp);
		}

		::System::Void SetBones(::Il2CppArray<::UnityEngine::Transform*>* array, ::Il2CppArray<::System::Object*>*& bones)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::Il2CppArray<::System::Object*>*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IKSOLVERLOOKAT_SETBONES_OFFSET))(this, array, bones);
		}
	};
}
