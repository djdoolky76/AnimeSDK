#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define ABC_UI_CUSTOMTRANSITIONFADEIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::UI
{
	inline static constexpr unsigned int CustomTransitionFadeIn_TypeDefinitionIndex = 8714;

	class CustomTransitionFadeIn : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::AnimationClip* Clip; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_CUSTOMTRANSITIONFADEIN__CTOR_OFFSET))(this);
		}
	};
}
