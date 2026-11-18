#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_EDITOREXTENSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E33B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int EditorExtension_TypeDefinitionIndex = 26198;

	class EditorExtension : public ::System::Object
	{
	public:
		// static const ::UnityEngine::NAPRenderPipeline0::MaterialDebugMode s_DebugFeature = 0x0; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_EDITOREXTENSION__CTOR_OFFSET))(this);
		}
	};
}
