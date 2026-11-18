#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace System { class Object; }

#define ROOTMOTION_FINALIK_OFFSETPOSE_APPLY_1_OFFSET UNITYSDK_OFFSET(0x1F1F4920)
#define ROOTMOTION_FINALIK_OFFSETPOSE_APPLY_OFFSET UNITYSDK_OFFSET(0x1F1F4820)
#define ROOTMOTION_FINALIK_OFFSETPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F49C0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int OffsetPose_TypeDefinitionIndex = 36806;

	class OffsetPose : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* effectorLinks; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETPOSE__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETPOSE_APPLY_OFFSET))(this, solver, weight);
		}

		::System::Void Apply_1(::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, ::System::Single weight, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolverFullBodyBiped*, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_OFFSETPOSE_APPLY_1_OFFSET))(this, solver, weight, rotation);
		}
	};
}
