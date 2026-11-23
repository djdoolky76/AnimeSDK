#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B39AAAD1233537D7/AD033CAB13D276CD.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace ABC::UI { class CustomTransitionFadeIn; }
namespace ABC::UI { class CustomTransitionFadeOut; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define ABC_UI_MONOFADEANIMATION_FE0C4BACA9717677_OFFSET UNITYSDK_OFFSET(0x1EFC7C0)
#define ABC_UI_MONOFADEANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoFadeAnimation_TypeDefinitionIndex = 7502;

	class MonoFadeAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::AnimationClip* EntranceAnimationClip; // 0x20
		::UnityEngine::AnimationClip* ExitAnimationClip; // 0x28
		::B39AAAD1233537D7::AD033CAB13D276CD Style; // 0x30
		::System::Single FullScreenBlockTime; // 0x34
		::System::Collections::Generic::List_1<::ABC::UI::CustomTransitionFadeIn*>* CustomEntranceAnimationClips; // 0x38
		::System::Collections::Generic::List_1<::ABC::UI::CustomTransitionFadeOut*>* CustomExitAnimationClips; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOFADEANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void FE0C4BACA9717677()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOFADEANIMATION_FE0C4BACA9717677_OFFSET))(this);
		}
	};
}
