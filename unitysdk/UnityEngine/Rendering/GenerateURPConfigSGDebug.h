#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_RENDERING_GENERATEURPCONFIGSGDEBUG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2764A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GenerateURPConfigSGDebug_TypeDefinitionIndex = 26811;

	class GenerateURPConfigSGDebug : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_GENERATEURPCONFIGSGDEBUG__CTOR_OFFSET))(this);
		}
	};
}
