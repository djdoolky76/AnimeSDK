#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_FINISHIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x17059AB0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_INIT_OFFSET UNITYSDK_OFFSET(0x170593D0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_ISFINISH_OFFSET UNITYSDK_OFFSET(0x170598B0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_ISSTART_OFFSET UNITYSDK_OFFSET(0x170598F0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_RESET_OFFSET UNITYSDK_OFFSET(0x17059560)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_START_OFFSET UNITYSDK_OFFSET(0x170595C0)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_STOP_OFFSET UNITYSDK_OFFSET(0x17059930)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_UPDATE_OFFSET UNITYSDK_OFFSET(0x17059790)
#define MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x17059CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIComicPageController_AnimationPlayable_TypeDefinitionIndex = 84224;

	class UIComicPageController_AnimationPlayable : public ::System::Object
	{
	public:
		::System::String* animationClipName; // 0x10
		::UnityEngine::Animation* animation; // 0x18
		::System::Action* finishCallback; // 0x20
		::System::Single timer; // 0x28
		::System::Boolean start; // 0x2C
		::System::Boolean finish; // 0x2D
		::System::Boolean hasAniamtionClip; // 0x2E

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE__CTOR_OFFSET))(this);
		}

		::System::Void Init(::UnityEngine::Animation* anim, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_INIT_OFFSET))(this, anim, animName);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_RESET_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_START_OFFSET))(this);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_ISFINISH_OFFSET))(this);
		}

		::System::Boolean IsStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_ISSTART_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_STOP_OFFSET))(this);
		}

		::System::Void FinishImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMICPAGECONTROLLER_ANIMATIONPLAYABLE_FINISHIMMEDIATELY_OFFSET))(this);
		}
	};
}
