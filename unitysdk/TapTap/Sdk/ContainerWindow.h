#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TapTap/Sdk/UIElement.h"

namespace System::Collections { class IEnumerator; }
namespace UnityEngine::UI { class Image; }

#define TAPTAP_SDK_CONTAINERWINDOW_A658A3D52982827C_OFFSET UNITYSDK_OFFSET(0x3F042D0)
#define TAPTAP_SDK_CONTAINERWINDOW_AC80F7BB8E48CE53_OFFSET UNITYSDK_OFFSET(0x3F04260)
#define TAPTAP_SDK_CONTAINERWINDOW_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3F041F0)
#define TAPTAP_SDK_CONTAINERWINDOW__CTOR_OFFSET UNITYSDK_OFFSET(0x3F04340)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int ContainerWindow_TypeDefinitionIndex = 20902;

	class ContainerWindow : public ::TapTap::Sdk::UIElement
	{
	public:
		::UnityEngine::UI::Image* backgroung; // 0x40

		::System::Collections::IEnumerator* A658A3D52982827C()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW_A658A3D52982827C_OFFSET))(this);
		}

		::System::Collections::IEnumerator* AC80F7BB8E48CE53()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW_AC80F7BB8E48CE53_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW__CTOR_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_CONTAINERWINDOW_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
