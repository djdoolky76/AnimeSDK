#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE902080)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_LGNMBLJJPKG_OFFSET UNITYSDK_OFFSET(0xE901C70)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET UNITYSDK_OFFSET(0xE901FF0)
#define RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE901BE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideStageItemBehaviour_TypeDefinitionIndex = 48146;

	class HideStageItemBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* ItemList; // 0x10
		::System::Boolean ActiveOnEnter; // 0x18
		::System::Boolean ActiveOnExit; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void OnBehaviourPause(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_ONBEHAVIOURPAUSE_OFFSET))(this, a1, a2);
		}

		::System::Void LGNMBLJJPKG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMBEHAVIOUR_LGNMBLJJPKG_OFFSET))(this, a1);
		}

	};
}
