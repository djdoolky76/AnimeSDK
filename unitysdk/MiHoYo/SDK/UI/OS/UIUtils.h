#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_UI_OS_UIUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0x1C011150)
#define MIHOYO_SDK_UI_OS_UIUTILS_GETCOLOREDTEXT_OFFSET UNITYSDK_OFFSET(0x1C0110B0)

namespace MiHoYo::SDK::UI::OS
{
	class UIUtils : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIUTILS_CTOR_OFFSET))(this);
		}

		static ::System::String* GetColoredText(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_OS_UIUTILS_GETCOLOREDTEXT_OFFSET))(a1, a2);
		}

	};
}
