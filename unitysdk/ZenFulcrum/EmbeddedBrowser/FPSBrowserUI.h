#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/ClickMeshBrowserUI.h"
#include "unitysdk/UnityEngine/EC2AC38D9624497F.h"

class A1762F3593A255C7;
namespace UnityEngine { class MeshCollider; }
namespace UnityEngine { class Transform; }
namespace ZenFulcrum::EmbeddedBrowser { class FPSCursorRenderer; }

#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_ADDCA5A61E9BBACC_OFFSET UNITYSDK_OFFSET(0x43F6F60)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_B6216421EA67952C_OFFSET UNITYSDK_OFFSET(0x43F7130)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_E19D3BA5582A8A0A_OFFSET UNITYSDK_OFFSET(0x43F6FA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_F058C57E2E0D2D56_OFFSET UNITYSDK_OFFSET(0x43F6E40)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x43F6FE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI__CTOR_OFFSET UNITYSDK_OFFSET(0x43F7050)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int FPSBrowserUI_TypeDefinitionIndex = 19406;

	class FPSBrowserUI : public ::ZenFulcrum::EmbeddedBrowser::ClickMeshBrowserUI
	{
	public:
		::UnityEngine::Transform* E9E9A9182D7BBF42; // 0x70
		::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer* BC8636CF6EA32D26; // 0x78

		::System::Void ADDCA5A61E9BBACC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_ADDCA5A61E9BBACC_OFFSET))(this);
		}

		static ::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI* F058C57E2E0D2D56(::UnityEngine::MeshCollider* ECDF0D728176A15A, ::UnityEngine::Transform* FA594E4EC88F7E70, ::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer* EBCF92D58668B97F)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::FPSBrowserUI*(*)(::UnityEngine::MeshCollider*, ::UnityEngine::Transform*, ::ZenFulcrum::EmbeddedBrowser::FPSCursorRenderer*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_F058C57E2E0D2D56_OFFSET))(ECDF0D728176A15A, FA594E4EC88F7E70, EBCF92D58668B97F);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI__CTOR_OFFSET))(this);
		}

		::System::Void F328E4D8818B1E12()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_F328E4D8818B1E12_OFFSET))(this);
		}

		::System::Void E19D3BA5582A8A0A(::A1762F3593A255C7* EE95B9A38ED3DCF5)
		{
			return ((::System::Void(*)(::PVOID, ::A1762F3593A255C7*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_E19D3BA5582A8A0A_OFFSET))(this, EE95B9A38ED3DCF5);
		}

		::UnityEngine::EC2AC38D9624497F B6216421EA67952C()
		{
			return ((::UnityEngine::EC2AC38D9624497F(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_FPSBROWSERUI_B6216421EA67952C_OFFSET))(this);
		}
	};
}
