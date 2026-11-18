#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }

#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWANIMATIONUTIL_GETANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0x1059AF70)
#define NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWANIMATIONUTIL_GETANIMATION_OFFSET UNITYSDK_OFFSET(0x1059AD70)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int ScrollViewAnimationUtil_TypeDefinitionIndex = 45370;

	class ScrollViewAnimationUtil : public ::System::Object
	{
	public:
		static ::UnityEngine::Animation* GetAnimation(::UnityEngine::GameObject* gameObject)
		{
			return ((::UnityEngine::Animation*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWANIMATIONUTIL_GETANIMATION_OFFSET))(gameObject);
		}

		static ::UnityEngine::AnimationClip* GetAnimationClip(::UnityEngine::GameObject* gameObject, ::System::String* animationName)
		{
			return ((::UnityEngine::AnimationClip*(*)(::UnityEngine::GameObject*, ::System::String*))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SCROLLVIEWANIMATIONUTIL_GETANIMATIONCLIP_OFFSET))(gameObject, animationName);
		}
	};
}
