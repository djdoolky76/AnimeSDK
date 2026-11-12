#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/CallbackEventHandler.h"

#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_CANGRABFOCUS_OFFSET UNITYSDK_OFFSET(0x20765610)
#define UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_FOCUSABLE_OFFSET UNITYSDK_OFFSET(0x20765600)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int Focusable_TypeDefinitionIndex = 5883;

	class Focusable : public ::UnityEngine::UIElements::CallbackEventHandler
	{
	public:
		::System::Boolean _focusable_k__BackingField; // 0x18
		::System::Boolean isIMGUIContainer; // 0x19
		::System::Boolean get_focusable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_FOCUSABLE_OFFSET))(this);
		}

		::System::Boolean get_canGrabFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_FOCUSABLE_GET_CANGRABFOCUS_OFFSET))(this);
		}

	};
}
