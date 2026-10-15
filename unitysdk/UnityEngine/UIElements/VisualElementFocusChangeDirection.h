#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/FocusChangeDirection.h"
namespace UnityEngine::UIElements { class FocusChangeDirection; }
namespace UnityEngine::UIElements { class VisualElementFocusChangeDirection; }

#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4C9A60)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4C9A00)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1F4C9940)
#define UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1F4C99A0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualElementFocusChangeDirection_TypeDefinitionIndex = 5905;

	class VisualElementFocusChangeDirection : public ::UnityEngine::UIElements::FocusChangeDirection
	{
	public:
		static ::UnityEngine::UIElements::VisualElementFocusChangeDirection** StaticGet_s_Left()
		{
			return (::UnityEngine::UIElements::VisualElementFocusChangeDirection**)UnitySDK::FromName("UnityEngine.UIElements", "VisualElementFocusChangeDirection")->GetStaticField(0x1FE20);
		}

		static ::UnityEngine::UIElements::VisualElementFocusChangeDirection** StaticGet_s_Right()
		{
			return (::UnityEngine::UIElements::VisualElementFocusChangeDirection**)UnitySDK::FromName("UnityEngine.UIElements", "VisualElementFocusChangeDirection")->GetStaticField(0x1FE28);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_CCTOR_OFFSET))();
		}

		static ::UnityEngine::UIElements::FocusChangeDirection* get_left()
		{
			return ((::UnityEngine::UIElements::FocusChangeDirection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_LEFT_OFFSET))();
		}

		static ::UnityEngine::UIElements::FocusChangeDirection* get_right()
		{
			return ((::UnityEngine::UIElements::FocusChangeDirection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALELEMENTFOCUSCHANGEDIRECTION_GET_RIGHT_OFFSET))();
		}

	};
}
