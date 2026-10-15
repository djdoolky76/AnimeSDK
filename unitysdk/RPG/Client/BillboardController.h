#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardController_RenderingMode.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class Texture2D; }

#define RPG_CLIENT_BILLBOARDCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xC884330)

namespace RPG::Client
{
	class BillboardController
	{
	public:
		::System::Boolean BillboardOff; // 0x30
		::System::Byte _padding0[0x7];
		::UnityEngine::Texture2D* MainTex; // 0x38
		::UnityEngine::Texture2D* MaskTex; // 0x40
		::System::Single NoiseStrength; // 0x48
		::System::Single NoiseFrequency; // 0x4C
		::System::Single PerlinNoiseRemapMin; // 0x50
		::System::Single PerlinNoiseRemapMax; // 0x54
		::UnityEngine::Vector2 WindSpeed; // 0x58
		::UnityEngine::Color TintColor; // 0x60
		::System::Single RandomScale; // 0x70
		::System::Int32 RandomSeed; // 0x74
		::System::Single SinFrequency; // 0x78
		::System::Single VerticalRestraints; // 0x7C
		::System::Single FalloffStart; // 0x80
		::System::Single BlendRadius; // 0x84
		::System::Boolean FadeoutCameraIn; // 0x88
		::System::Byte _padding1[0x3];
		::System::Single OffscreenFadeWeight; // 0x8C
		::System::Single DistanceFadeoutScale; // 0x90
		::System::Single DistanceFadeoutOffset; // 0x94
		::System::Single SceneBillboardFogIntensity; // 0x98
		::System::UInt32 MaterialRenderQueue; // 0x9C
		::RPG::Client::BillboardController_RenderingMode RenderingBlendMode; // 0xA0
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0xA4
		::System::Boolean WorkWithLightSerialization; // 0xA8
		::System::Byte _padding2[0x3];
		::System::Int32 LightQualityVersion; // 0xAC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BILLBOARDCONTROLLER_CTOR_OFFSET))(this);
		}

	};
}
