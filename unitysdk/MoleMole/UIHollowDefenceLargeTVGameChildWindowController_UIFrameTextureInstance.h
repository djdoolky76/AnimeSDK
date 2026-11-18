#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

class FAKGOOMIIIO;
class FGCOIBFFCHB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Material; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19C66B70)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSHCOROUTINE_OFFSET UNITYSDK_OFFSET(0x19C66820)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSH_OFFSET UNITYSDK_OFFSET(0x19C66620)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x19C668C0)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_ENABLE_OFFSET UNITYSDK_OFFSET(0x19C669E0)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x19C668F0)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_ENABLE_OFFSET UNITYSDK_OFFSET(0x19C66A50)
#define MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C664B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowDefenceLargeTVGameChildWindowController_UIFrameTextureInstance_TypeDefinitionIndex = 54246;

	class UIHollowDefenceLargeTVGameChildWindowController_UIFrameTextureInstance : public ::System::Object
	{
	public:
		::UnityEngine::Material* _material; // 0x10
		::UnityEngine::UI::Image* _FlushImage; // 0x18
		::FGCOIBFFCHB* _image; // 0x20
		::FAKGOOMIIIO* TSPlayer; // 0x28
		::Foundation::Coroutine::CoroutineHandle _FlushHandle; // 0x30
		::UnityEngine::Color SavedColor; // 0x34

		::System::Void _ctor(::FGCOIBFFCHB* image, ::System::String* TextureKey)
		{
			return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE__CTOR_OFFSET))(this, image, TextureKey);
		}

		::System::Void Flush(::UnityEngine::AnimationCurve* curve, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSH_OFFSET))(this, curve, time);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* FlushCoroutine(::UnityEngine::AnimationCurve* curve, ::System::Single time)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_FLUSHCOROUTINE_OFFSET))(this, curve, time);
		}

		::UnityEngine::Color get_Color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_Color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_COLOR_OFFSET))(this, value);
		}

		::System::Boolean get_Enable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_GET_ENABLE_OFFSET))(this);
		}

		::System::Void set_Enable(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_SET_ENABLE_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWDEFENCELARGETVGAMECHILDWINDOWCONTROLLER_UIFRAMETEXTUREINSTANCE_DISPOSE_OFFSET))(this);
		}
	};
}
