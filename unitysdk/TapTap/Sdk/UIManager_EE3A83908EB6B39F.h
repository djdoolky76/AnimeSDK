#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class UIElement; }
namespace TapTap::Sdk { class UIManager; }

#define TAPTAP_SDK_UIMANAGER_EE3A83908EB6B39F_E2A3D0D17FC2135C_OFFSET UNITYSDK_OFFSET(0x3F0EB10)
#define TAPTAP_SDK_UIMANAGER_EE3A83908EB6B39F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIManager_EE3A83908EB6B39F_TypeDefinitionIndex = 20885;

	class UIManager_EE3A83908EB6B39F : public ::System::Object
	{
	public:
		::TapTap::Sdk::UIManager* A544919C800E2923; // 0x10
		::TapTap::Sdk::UIElement* FDA7979CE82824CB; // 0x18
		::TapTap::Sdk::UIElement* E71214E2584E2994; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_EE3A83908EB6B39F__CTOR_OFFSET))(this);
		}

		::System::Void E2A3D0D17FC2135C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_EE3A83908EB6B39F_E2A3D0D17FC2135C_OFFSET))(this);
		}
	};
}
