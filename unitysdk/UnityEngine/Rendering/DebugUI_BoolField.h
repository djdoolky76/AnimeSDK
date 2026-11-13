#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_DEBUGUI_BOOLFIELD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A2040)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_BoolField_TypeDefinitionIndex = 36457;

	class DebugUI_BoolField
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BOOLFIELD_CTOR_OFFSET))(this);
		}

	};
}
