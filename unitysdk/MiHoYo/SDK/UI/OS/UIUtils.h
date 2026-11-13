#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MIHOYO_SDK_UI_OS_UIUTILS_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D5B00)
#define MIHOYO_SDK_UI_OS_UIUTILS_GETCOLOREDTEXT_OFFSET UNITYSDK_OFFSET(0x1E4D5A60)

namespace MiHoYo::SDK::UI::OS
{
	inline static constexpr unsigned int UIUtils_TypeDefinitionIndex = 8485;

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
