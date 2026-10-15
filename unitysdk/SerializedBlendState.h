#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SerializedRenderTargetBlendState.h"
#include "unitysdk/UnityEngine/Rendering/BlendState.h"

#define SERIALIZEDBLENDSTATE_ICGKFDEILKA_OFFSET UNITYSDK_OFFSET(0xF9660)
#define SERIALIZEDBLENDSTATE_OLCHHDKKPLI_OFFSET UNITYSDK_OFFSET(0xF9670)

inline static constexpr unsigned int SerializedBlendState_TypeDefinitionIndex = 47415;

	struct alignas(4) SerializedBlendState
	{
		::SerializedRenderTargetBlendState blendState0; // 0x10
		::SerializedRenderTargetBlendState blendState1; // 0x2C
		::SerializedRenderTargetBlendState blendState2; // 0x48
		::SerializedRenderTargetBlendState blendState3; // 0x64
		::SerializedRenderTargetBlendState blendState4; // 0x80
		::SerializedRenderTargetBlendState blendState5; // 0x9C
		::SerializedRenderTargetBlendState blendState6; // 0xB8
		::SerializedRenderTargetBlendState blendState7; // 0xD4
		::System::Boolean separateMRTBlendStates; // 0xF0
		::System::Boolean alphaToMask; // 0xF1
		::System::Void ICGKFDEILKA(::UnityEngine::Rendering::BlendState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendState))((::PBYTE)hIl2Cpp + SERIALIZEDBLENDSTATE_ICGKFDEILKA_OFFSET))(this, a1);
		}

		::System::Void OLCHHDKKPLI(::UnityEngine::Rendering::BlendState a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::BlendState))((::PBYTE)hIl2Cpp + SERIALIZEDBLENDSTATE_OLCHHDKKPLI_OFFSET))(this, a1);
		}

	};
