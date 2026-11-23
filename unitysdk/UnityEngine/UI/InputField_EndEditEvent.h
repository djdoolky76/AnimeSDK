#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_UI_INPUTFIELD_ENDEDITEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x4216760)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int InputField_EndEditEvent_TypeDefinitionIndex = 18512;

	class InputField_EndEditEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_INPUTFIELD_ENDEDITEVENT__CTOR_OFFSET))(this);
		}
	};
}
