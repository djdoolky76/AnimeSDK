#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERFOCUSSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F646330)

namespace ZenFulcrum::EmbeddedBrowser
{
	class BrowserFocusState : public ::System::Object
	{
	public:
		::System::String* focusedTagName; // 0x10
		::System::Boolean focusedNodeEditable; // 0x18
		::System::Boolean hasMouseFocus; // 0x19
		::System::Boolean hasKeyboardFocus; // 0x1A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERFOCUSSTATE_CTOR_OFFSET))(this);
		}

	};
}
