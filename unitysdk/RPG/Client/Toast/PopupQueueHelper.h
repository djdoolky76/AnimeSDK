#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_TOAST_POPUPQUEUEHELPER_ISSOFAWINDOW_OFFSET UNITYSDK_OFFSET(0xED1B2F0)

namespace RPG::Client::Toast
{
	inline static constexpr unsigned int PopupQueueHelper_TypeDefinitionIndex = 81779;

	class PopupQueueHelper : public ::System::Object
	{
	public:
		static ::System::Boolean IsSofaWindow(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TOAST_POPUPQUEUEHELPER_ISSOFAWINDOW_OFFSET))(a1);
		}

	};
}
