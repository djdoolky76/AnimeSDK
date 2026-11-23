#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Slider; }

#define ABC_UI_MONOREWARDPROGRESSBAR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B39A10)
#define ABC_UI_MONOREWARDPROGRESSBAR__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::UI
{
	inline static constexpr unsigned int MonoRewardProgressBar_TypeDefinitionIndex = 2123;

	class MonoRewardProgressBar : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Vector2* StaticGet_A4E75FDF1FFF83DE()
		{
			return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(MonoRewardProgressBar_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::UnityEngine::RectTransform* ProgressBarTransform; // 0x20
		::UnityEngine::UI::Slider* Slider; // 0x28
		::System::Single FillGap; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_UI_MONOREWARDPROGRESSBAR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABC_UI_MONOREWARDPROGRESSBAR__CCTOR_OFFSET))();
		}
	};
}
