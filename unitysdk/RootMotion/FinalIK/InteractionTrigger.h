#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_ASTHREAD_OFFSET UNITYSDK_OFFSET(0x1F706310)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_GETBESTRANGEINDEX_OFFSET UNITYSDK_OFFSET(0x1F706360)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1F706220)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_OPENTUTORIAL4_OFFSET UNITYSDK_OFFSET(0x1F706270)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1F7061D0)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER_SUPPORTGROUP_OFFSET UNITYSDK_OFFSET(0x1F7062C0)
#define ROOTMOTION_FINALIK_INTERACTIONTRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F706720)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int InteractionTrigger_TypeDefinitionIndex = 36890;

	class InteractionTrigger : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* ranges; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER__CTOR_OFFSET))(this);
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void OpenTutorial4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_OPENTUTORIAL4_OFFSET))(this);
		}

		::System::Void SupportGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_SUPPORTGROUP_OFFSET))(this);
		}

		::System::Void ASThread()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_ASTHREAD_OFFSET))(this);
		}

		::System::Int32 GetBestRangeIndex(::UnityEngine::Transform* character, ::UnityEngine::Transform* raycastFrom, ::UnityEngine::RaycastHit raycastHit)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_INTERACTIONTRIGGER_GETBESTRANGEINDEX_OFFSET))(this, character, raycastFrom, raycastHit);
		}
	};
}
