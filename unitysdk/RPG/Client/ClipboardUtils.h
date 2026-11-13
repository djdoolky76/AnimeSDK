#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define RPG_CLIENT_CLIPBOARDUTILS_CHECKCLIPBOARDISALLNUMBER_OFFSET UNITYSDK_OFFSET(0x20790720)
#define RPG_CLIENT_CLIPBOARDUTILS_COPYTOCLIPBOARD_OFFSET UNITYSDK_OFFSET(0x20790690)
#define RPG_CLIENT_CLIPBOARDUTILS_GETTEXTFROMCLIPBOARD_OFFSET UNITYSDK_OFFSET(0x207906E0)

namespace RPG::Client
{
	inline static constexpr unsigned int ClipboardUtils_TypeDefinitionIndex = 36129;

	class ClipboardUtils : public ::System::Object
	{
	public:
		static ::System::Void CopyToClipboard(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIPBOARDUTILS_COPYTOCLIPBOARD_OFFSET))(a1);
		}

		static ::System::String* GetTextFromClipboard()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIPBOARDUTILS_GETTEXTFROMCLIPBOARD_OFFSET))();
		}

		static ::System::Boolean CheckClipboardIsAllNumber(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIPBOARDUTILS_CHECKCLIPBOARDISALLNUMBER_OFFSET))(a1);
		}

	};
}
