#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/A18F2705D8E6B027.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AnimationClip; }

#define ABC_UI_CUSTOMTRANSITIONFADEOUT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FE1FD0)

namespace ABC::UI
{
	inline static constexpr unsigned int CustomTransitionFadeOut_TypeDefinitionIndex = 8099;

	class CustomTransitionFadeOut : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::UnityEngine::AnimationClip* Clip; // 0x18
		::B39AAAD1233537D7::A18F2705D8E6B027 AnimType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_CUSTOMTRANSITIONFADEOUT__CTOR_OFFSET))(this);
		}
	};
}
