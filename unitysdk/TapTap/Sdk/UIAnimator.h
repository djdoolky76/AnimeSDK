#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections { class IEnumerator; }
namespace TapTap::Sdk { class UIAnimator_Action; }
namespace TapTap::Sdk { class UIElement; }

#define TAPTAP_SDK_UIANIMATOR_B305461C15D9C624_OFFSET UNITYSDK_OFFSET(0x3F0EDF0)
#define TAPTAP_SDK_UIANIMATOR_E46AD675F4BC731C_OFFSET UNITYSDK_OFFSET(0x3F0EE70)
#define TAPTAP_SDK_UIANIMATOR_E544CBC1BA13F6BC_OFFSET UNITYSDK_OFFSET(0x3F0F020)
#define TAPTAP_SDK_UIANIMATOR_E9AD345E01545F86_OFFSET UNITYSDK_OFFSET(0x3F0F170)
#define TAPTAP_SDK_UIANIMATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIAnimator_TypeDefinitionIndex = 20897;

	class UIAnimator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void E46AD675F4BC731C(::System::Single BD3B33D72884EDA1, ::TapTap::Sdk::UIAnimator_Action* E04D2BE64FCE9814)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_E46AD675F4BC731C_OFFSET))(this, BD3B33D72884EDA1, E04D2BE64FCE9814);
		}

		::System::Collections::IEnumerator* B305461C15D9C624(::System::Single A350217CBB9AD8A6, ::TapTap::Sdk::UIAnimator_Action* B59F8BF601F198E2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_B305461C15D9C624_OFFSET))(this, A350217CBB9AD8A6, B59F8BF601F198E2);
		}

		::System::Void E9AD345E01545F86(::TapTap::Sdk::UIElement* F9389B24E94B8AD5, ::TapTap::Sdk::UIElement* B2F967E86C623D57, ::TapTap::Sdk::UIAnimator_Action* B585FEDC90EBF9AA)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_E9AD345E01545F86_OFFSET))(this, F9389B24E94B8AD5, B2F967E86C623D57, B585FEDC90EBF9AA);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__CTOR_OFFSET))(this);
		}

		::System::Void E544CBC1BA13F6BC(::TapTap::Sdk::UIElement* A1981D6F729C0760, ::TapTap::Sdk::UIElement* A6AA8DC9EA06CE84, ::TapTap::Sdk::UIAnimator_Action* B585FEDC90EBF9AA)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIElement*, ::TapTap::Sdk::UIAnimator_Action*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_E544CBC1BA13F6BC_OFFSET))(this, A1981D6F729C0760, A6AA8DC9EA06CE84, B585FEDC90EBF9AA);
		}
	};
}
