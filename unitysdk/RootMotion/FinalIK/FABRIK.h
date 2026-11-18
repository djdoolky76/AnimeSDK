#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverFABRIK; }

#define ROOTMOTION_FINALIK_FABRIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1F7B7710)
#define ROOTMOTION_FINALIK_FABRIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1F7B7760)
#define ROOTMOTION_FINALIK_FABRIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F7B7670)
#define ROOTMOTION_FINALIK_FABRIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1F7B7620)
#define ROOTMOTION_FINALIK_FABRIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1F7B76C0)
#define ROOTMOTION_FINALIK_FABRIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B7770)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FABRIK_TypeDefinitionIndex = 36867;

	class FABRIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::FinalIK::IKSolverFABRIK* solver; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIK_ASTHREAD_OFFSET))(this);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FABRIK_GETIKSOLVER_OFFSET))(this);
		}
	};
}
