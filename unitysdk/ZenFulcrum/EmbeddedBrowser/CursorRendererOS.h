#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/CursorRendererBase.h"

#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROS_E4983C0797AE3A5D_OFFSET UNITYSDK_OFFSET(0x43F4090)
#define ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROS__CTOR_OFFSET UNITYSDK_OFFSET(0x43D0DA0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int CursorRendererOS_TypeDefinitionIndex = 19405;

	class CursorRendererOS : public ::ZenFulcrum::EmbeddedBrowser::CursorRendererBase
	{
	public:
		::System::Boolean cursorNormallyVisible; // 0x28

		::System::Void E4983C0797AE3A5D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROS_E4983C0797AE3A5D_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_CURSORRENDEREROS__CTOR_OFFSET))(this);
		}
	};
}
