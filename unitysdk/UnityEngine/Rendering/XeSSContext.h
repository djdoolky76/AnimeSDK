#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/FrameGenOffMode.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/XeSSConstants.h"
#include "unitysdk/UnityEngine/Rendering/XeSSFGQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/XeSSQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/XeSSOptimalSettings.h"

#define UNITYENGINE_RENDERING_XESSCONTEXT_CREATEDEFAULT_OFFSET UNITYSDK_OFFSET(0x1E986B90)
#define UNITYENGINE_RENDERING_XESSCONTEXT_GETOPTIMALSETTINGS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E986B80)
#define UNITYENGINE_RENDERING_XESSCONTEXT_GETOPTIMALSETTINGS_OFFSET UNITYSDK_OFFSET(0x1E986B30)
#define UNITYENGINE_RENDERING_XESSCONTEXT_XESSSUPPORTED_OFFSET UNITYSDK_OFFSET(0x1E986B20)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int XeSSContext_TypeDefinitionIndex = 6222;

	struct alignas(4) XeSSContext
	{
		::System::Int32 w; // 0x10
		::System::Int32 h; // 0x14
		::UnityEngine::Rendering::XeSSQualityMode mode; // 0x18
		::UnityEngine::Rendering::XeSSFGQualityMode frameGenMode; // 0x1C
		::System::Single sharpness; // 0x20
		::System::Single preExposure; // 0x24
		::System::Single exposureScale; // 0x28
		::System::Boolean colorBuffersHDR; // 0x2C
		::System::Boolean useAutoExposure; // 0x2D
		::System::Boolean useHudlessColor; // 0x2E
		::System::Boolean useOffScreenUI; // 0x2F
		::UnityEngine::Rendering::FrameGenOffMode frameGenOffMode; // 0x30
		::UnityEngine::Rendering::XeSSConstants constants; // 0x34
		::System::Byte _padding0[0x4];
		::UnityEngine::Rendering::RenderTargetIdentifier colorIn; // 0x220
		::UnityEngine::Rendering::RenderTargetIdentifier colorOut; // 0x248
		::UnityEngine::Rendering::RenderTargetIdentifier depth; // 0x270
		::UnityEngine::Rendering::RenderTargetIdentifier motion; // 0x298
		::UnityEngine::Rendering::RenderTargetIdentifier frameGenDepth; // 0x2C0
		::UnityEngine::Rendering::RenderTargetIdentifier frameGenMotion; // 0x2E8
		::UnityEngine::Rendering::RenderTargetIdentifier hudlessColor; // 0x310
		::UnityEngine::Rendering::RenderTargetIdentifier offScreenUI; // 0x338

		static ::System::Boolean XeSSSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONTEXT_XESSSUPPORTED_OFFSET))();
		}

		static ::UnityEngine::Rendering::XeSSOptimalSettings GetOptimalSettings(::UnityEngine::Rendering::XeSSQualityMode mode, ::System::Int32 displayWidth, ::System::Int32 displayHeight)
		{
			return ((::UnityEngine::Rendering::XeSSOptimalSettings(*)(::UnityEngine::Rendering::XeSSQualityMode, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONTEXT_GETOPTIMALSETTINGS_OFFSET))(mode, displayWidth, displayHeight);
		}

		/*
		static ::UnityEngine::Rendering::XeSSContext CreateDefault()
		{
			return ((::UnityEngine::Rendering::XeSSContext(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONTEXT_CREATEDEFAULT_OFFSET))();
		}
		*/

		static ::System::Void GetOptimalSettings_Injected(::UnityEngine::Rendering::XeSSQualityMode mode, ::System::Int32 displayWidth, ::System::Int32 displayHeight, ::UnityEngine::Rendering::XeSSOptimalSettings& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::XeSSQualityMode, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::XeSSOptimalSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_XESSCONTEXT_GETOPTIMALSETTINGS_INJECTED_OFFSET))(mode, displayWidth, displayHeight, ret);
		}
	};
}
