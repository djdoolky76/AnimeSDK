#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_INPUTFIELD_SUBMITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B39F0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_SubmitEvent_TypeDefinitionIndex = 18383;

	class InputField_SubmitEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_SUBMITEVENT__CTOR_OFFSET))(this);
		}
	};
}
