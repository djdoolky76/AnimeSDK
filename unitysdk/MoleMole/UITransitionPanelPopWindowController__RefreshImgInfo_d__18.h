#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITransitionPanelPopWindowController_TransitionState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole { class UITransitionPanelPopWindowController; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x14E1AEB0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14E1B180)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x14E1B1E0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x14E1B190)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14E1AEA0)
#define MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18__CTOR_OFFSET UNITYSDK_OFFSET(0x14E1AE90)

namespace MoleMole
{
	inline static constexpr unsigned int UITransitionPanelPopWindowController__RefreshImgInfo_d__18_TypeDefinitionIndex = 57669;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18>
	class UITransitionPanelPopWindowController__RefreshImgInfo_d__18 : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* curve; // 0x10
		::MoleMole::UITransitionPanelPopWindowController* __4__this; // 0x18
		::System::Action* onFadeEndCallback; // 0x20
		::System::Single _timeSpan_5__2; // 0x28
		::MoleMole::UITransitionPanelPopWindowController_TransitionState state; // 0x2C
		::System::Single __2__current; // 0x30
		::UnityEngine::Color fromColor; // 0x34
		::System::Int32 __1__state; // 0x44
		::UnityEngine::Color targetColor; // 0x48
		::System::Single duration; // 0x58

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITRANSITIONPANELPOPWINDOWCONTROLLER__REFRESHIMGINFO_D__18_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
