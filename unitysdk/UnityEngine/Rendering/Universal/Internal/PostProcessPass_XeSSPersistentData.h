#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_XESSPERSISTENTDATA_RELEASE_OFFSET UNITYSDK_OFFSET(0x1CED5F00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_XESSPERSISTENTDATA_RELOCATEIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1CED5F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_XESSPERSISTENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CED5FE0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PostProcessPass_XeSSPersistentData_TypeDefinitionIndex = 26465;

	class PostProcessPass_XeSSPersistentData : public ::System::Object
	{
	public:
		::System::Int32 lastHeight; // 0x10
		::System::Int32 lastWidth; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_XESSPERSISTENTDATA__CTOR_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_XESSPERSISTENTDATA_RELEASE_OFFSET))(this);
		}

		::System::Boolean RelocateIfNeeded(::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_POSTPROCESSPASS_XESSPERSISTENTDATA_RELOCATEIFNEEDED_OFFSET))(this, desc);
		}
	};
}
