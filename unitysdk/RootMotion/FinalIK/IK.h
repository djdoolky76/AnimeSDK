#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/SolverManager.h"

#define ROOTMOTION_FINALIK_IK_CTOR_OFFSET UNITYSDK_OFFSET(0xB710990)
#define ROOTMOTION_FINALIK_IK_FIXTRANSFORMS_OFFSET UNITYSDK_OFFSET(0xB710820)
#define ROOTMOTION_FINALIK_IK_INITIATESOLVER_OFFSET UNITYSDK_OFFSET(0xB7105D0)
#define ROOTMOTION_FINALIK_IK_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xB7108F0)
#define ROOTMOTION_FINALIK_IK_UPDATESOLVER_OFFSET UNITYSDK_OFFSET(0xB710410)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int IK_TypeDefinitionIndex = 47040;

	class IK : public ::RootMotion::SolverManager
	{
	public:
		::System::Boolean lockIKPosition; // 0x38
		::System::Boolean lockIKPhysics; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_CTOR_OFFSET))(this);
		}

		::System::Void UpdateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_UPDATESOLVER_OFFSET))(this);
		}

		::System::Void InitiateSolver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_INITIATESOLVER_OFFSET))(this);
		}

		::System::Void FixTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_FIXTRANSFORMS_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_IK_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

	};
}
