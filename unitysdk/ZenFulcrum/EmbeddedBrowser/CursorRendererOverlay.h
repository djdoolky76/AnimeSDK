#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/CursorRendererBase.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY_B4540B0BF0E12E55_OFFSET UNITYSDK_OFFSET(0x43F41E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY_E4983C0797AE3A5D_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY__CTOR_OFFSET UNITYSDK_OFFSET(0x43F4450)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererOverlay_TypeDefinitionIndex = 19432;

	class CursorRendererOverlay : public ::ZenFulcrum::EmbeddedBrowser::CursorRendererBase
	{
	public:
		::System::Single scale; // 0x28

		::System::Void E4983C0797AE3A5D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY_E4983C0797AE3A5D_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY__CTOR_OFFSET))(this);
		}

		::System::Void B4540B0BF0E12E55()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROVERLAY_B4540B0BF0E12E55_OFFSET))(this);
		}
	};
}
