#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINE_RENDERING_DEBUGUI_BOOLFIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1D077410)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DebugUI_BoolField_TypeDefinitionIndex = 17838;

	class DebugUI_BoolField
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DEBUGUI_BOOLFIELD__CTOR_OFFSET))(this);
		}
	};
}
