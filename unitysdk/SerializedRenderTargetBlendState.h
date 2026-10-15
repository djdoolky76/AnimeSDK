#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/BlendMode.h"
#include "unitysdk/UnityEngine/Rendering/BlendOp.h"
#include "unitysdk/UnityEngine/Rendering/ColorWriteMask.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBlendState.h"

#define SERIALIZEDRENDERTARGETBLENDSTATE_ICGKFDEILKA_OFFSET UNITYSDK_OFFSET(0xF9970)
#define SERIALIZEDRENDERTARGETBLENDSTATE_OLCHHDKKPLI_OFFSET UNITYSDK_OFFSET(0xF9A30)

	struct alignas(4) SerializedRenderTargetBlendState
	{
		::UnityEngine::Rendering::ColorWriteMask writeMask; // 0x10
		::UnityEngine::Rendering::BlendMode sourceColorBlendMode; // 0x14
		::UnityEngine::Rendering::BlendMode destinationColorBlendMode; // 0x18
		::UnityEngine::Rendering::BlendMode sourceAlphaBlendMode; // 0x1C
		::UnityEngine::Rendering::BlendMode destinationAlphaBlendMode; // 0x20
		::UnityEngine::Rendering::BlendOp colorBlendOperation; // 0x24
		::UnityEngine::Rendering::BlendOp alphaBlendOperation; // 0x28
		::System::Void ICGKFDEILKA(::UnityEngine::Rendering::RenderTargetBlendState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBlendState))((::PBYTE)hIl2Cpp + SERIALIZEDRENDERTARGETBLENDSTATE_ICGKFDEILKA_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::RenderTargetBlendState OLCHHDKKPLI()
		{
			return ((::UnityEngine::Rendering::RenderTargetBlendState(*)(::PVOID))((::PBYTE)hIl2Cpp + SERIALIZEDRENDERTARGETBLENDSTATE_OLCHHDKKPLI_OFFSET))(this);
		}

	};
