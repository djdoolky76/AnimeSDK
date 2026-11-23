#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class UIElement; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5_BB5F6FA7EB4E8D6F_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5_E34B6CA02139E820_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x3F0BDC0)
#define TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5_F21DBBC44C999728_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5_F38E5001C7AA1BB5_OFFSET UNITYSDK_OFFSET(0x3F0C290)
#define TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5__CTOR_OFFSET UNITYSDK_OFFSET(0x1F26BB0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIElement_A13C0F93A8BFD2A5_TypeDefinitionIndex = 20879;

	class UIElement_A13C0F93A8BFD2A5 : public ::System::Object
	{
	public:
		::System::Int32 FEB3551B7D8B59C1; // 0x10
		::System::Byte _padding0[0x4];
		::System::Object* FFDE99DB2A55498E; // 0x18
		::TapTap::Sdk::UIElement* A544919C800E2923; // 0x20
		::System::Single E0889C6E190B42E3; // 0x28
		::System::Single F2113089066404F7; // 0x2C
		::UnityEngine::CanvasGroup* EA4635ED2AE94834; // 0x30
		::UnityEngine::RectTransform* FE9C0E8F4C8DE820; // 0x38
		::System::Single A4DC3B11CE75BAAB; // 0x40

		::System::Void _ctor(::System::Int32 FEB3551B7D8B59C1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5__CTOR_OFFSET))(this, FEB3551B7D8B59C1);
		}

		::System::Void F21DBBC44C999728()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5_F21DBBC44C999728_OFFSET))(this);
		}

		::System::Boolean E6CAD58306FCDCB5()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::System::Object* BB5F6FA7EB4E8D6F()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5_BB5F6FA7EB4E8D6F_OFFSET))(this);
		}

		::System::Void F38E5001C7AA1BB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5_F38E5001C7AA1BB5_OFFSET))(this);
		}

		::System::Object* E34B6CA02139E820()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIELEMENT_A13C0F93A8BFD2A5_E34B6CA02139E820_OFFSET))(this);
		}
	};
}
