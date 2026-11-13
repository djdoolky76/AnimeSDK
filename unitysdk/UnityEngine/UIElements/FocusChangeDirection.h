#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::UIElements { class FocusChangeDirection; }

#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFC9740)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC9720)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_LASTVALUE_OFFSET UNITYSDK_OFFSET(0x1EFC96C0)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_NONE_OFFSET UNITYSDK_OFFSET(0x1EFC9660)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_UNSPECIFIED_OFFSET UNITYSDK_OFFSET(0x1EFC9600)
#define UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EFC9730)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusChangeDirection_TypeDefinitionIndex = 5884;

	class FocusChangeDirection : public ::System::Object
	{
	public:
		::System::Int32 m_Value; // 0x10
		static ::UnityEngine::UIElements::FocusChangeDirection** StaticGet__none_k__BackingField()
		{
			return (::UnityEngine::UIElements::FocusChangeDirection**)UnitySDK::FromName("UnityEngine.UIElements", "FocusChangeDirection")->GetStaticField(0x1AE70);
		}

		static ::UnityEngine::UIElements::FocusChangeDirection** StaticGet__lastValue_k__BackingField()
		{
			return (::UnityEngine::UIElements::FocusChangeDirection**)UnitySDK::FromName("UnityEngine.UIElements", "FocusChangeDirection")->GetStaticField(0x1AE78);
		}

		static ::UnityEngine::UIElements::FocusChangeDirection** StaticGet__unspecified_k__BackingField()
		{
			return (::UnityEngine::UIElements::FocusChangeDirection**)UnitySDK::FromName("UnityEngine.UIElements", "FocusChangeDirection")->GetStaticField(0x1AE80);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_CCTOR_OFFSET))();
		}

		static ::UnityEngine::UIElements::FocusChangeDirection* get_unspecified()
		{
			return ((::UnityEngine::UIElements::FocusChangeDirection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_UNSPECIFIED_OFFSET))();
		}

		static ::UnityEngine::UIElements::FocusChangeDirection* get_none()
		{
			return ((::UnityEngine::UIElements::FocusChangeDirection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_NONE_OFFSET))();
		}

		static ::UnityEngine::UIElements::FocusChangeDirection* get_lastValue()
		{
			return ((::UnityEngine::UIElements::FocusChangeDirection*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_GET_LASTVALUE_OFFSET))();
		}

		static ::System::Int32 op_Implicit(::UnityEngine::UIElements::FocusChangeDirection* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::UIElements::FocusChangeDirection*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSCHANGEDIRECTION_OP_IMPLICIT_OFFSET))(a1);
		}

	};
}
