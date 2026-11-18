#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/IK.h"

namespace RootMotion { class BipedReferences; }
namespace RootMotion::FinalIK { class IKSolver; }
namespace RootMotion::FinalIK { class IKSolverFullBodyBiped; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1F25E4F0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_AUTODETECTREFERENCES_OFFSET UNITYSDK_OFFSET(0x1F25ECF0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_GETIKSOLVER_OFFSET UNITYSDK_OFFSET(0x1F25E560)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENINSPECTORTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1F25E450)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F25E3B0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENSETUPTUTORIAL_OFFSET UNITYSDK_OFFSET(0x1F25E400)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1F25E360)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REFERENCESERROR_OFFSET UNITYSDK_OFFSET(0x1F25E570)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REFERENCESWARNING_OFFSET UNITYSDK_OFFSET(0x1F25E830)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REINITIATE_OFFSET UNITYSDK_OFFSET(0x1F25ECC0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_SETREFERENCES_OFFSET UNITYSDK_OFFSET(0x1F25E540)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1F25E4A0)
#define ROOTMOTION_FINALIK_FULLBODYBIPEDIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F25EDE0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int FullBodyBipedIK_TypeDefinitionIndex = 36962;

	class FullBodyBipedIK : public ::RootMotion::FinalIK::IK
	{
	public:
		::RootMotion::BipedReferences* references; // 0x48
		::RootMotion::FinalIK::IKSolverFullBodyBiped* solver; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void OpenSetupTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENSETUPTUTORIAL_OFFSET))(this);
		}

		::System::Void OpenInspectorTutorial()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_OPENINSPECTORTUTORIAL_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_ASTHREAD_OFFSET))(this);
		}

		::System::Void SetReferences(::RootMotion::BipedReferences* references, ::UnityEngine::Transform* rootNode)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::BipedReferences*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_SETREFERENCES_OFFSET))(this, references, rootNode);
		}

		::RootMotion::FinalIK::IKSolver* GetIKSolver()
		{
			return ((::RootMotion::FinalIK::IKSolver*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_GETIKSOLVER_OFFSET))(this);
		}

		::System::Boolean ReferencesError(::System::String*& errorMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REFERENCESERROR_OFFSET))(this, errorMessage);
		}

		::System::Boolean ReferencesWarning(::System::String*& warningMessage)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REFERENCESWARNING_OFFSET))(this, warningMessage);
		}

		::System::Void Reinitiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_REINITIATE_OFFSET))(this);
		}

		::System::Void AutoDetectReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_FULLBODYBIPEDIK_AUTODETECTREFERENCES_OFFSET))(this);
		}
	};
}
