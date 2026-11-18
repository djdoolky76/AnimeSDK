#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverTrigonometric; }

#define ROOTMOTION_FINALIK_TRIGONOMETRICIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1F50B9E0)
#define ROOTMOTION_FINALIK_TRIGONOMETRICIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1F50BA30)
#define ROOTMOTION_FINALIK_TRIGONOMETRICIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F50B940)
#define ROOTMOTION_FINALIK_TRIGONOMETRICIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1F50B8F0)
#define ROOTMOTION_FINALIK_TRIGONOMETRICIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1F50B990)
#define ROOTMOTION_FINALIK_TRIGONOMETRICIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F50BA40)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int TrigonometricIK_TypeDefinitionIndex = 36886;

	class TrigonometricIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverTrigonometric* solver; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK_ASTHREAD_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_TRIGONOMETRICIK_GETIKSOLVER_OFFSET))(this);
		}
	};
}
