#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BillboardController_RenderingMode.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"
#include "unitysdk/ScenenLightManager/BaseComponentExportData.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
class GPFEAEOEGFA_ExtraExportData;

#define SCENENLIGHTMANAGER_BILLBOARDCONTROLLER_EXPORTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE956C50)

namespace ScenenLightManager
{
	inline static constexpr unsigned int BillboardController_ExportData_TypeDefinitionIndex = 49103;

	class BillboardController_ExportData : public ::ScenenLightManager::BaseComponentExportData
	{
	public:
		::System::Boolean BillboardOff; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single NoiseStrength; // 0x14
		::System::Single NoiseFrequency; // 0x18
		::UnityEngine::Vector2 WindSpeed; // 0x1C
		::UnityEngine::Color TintColor; // 0x24
		::System::Single RandomScale; // 0x34
		::System::Int32 RandomSeed; // 0x38
		::System::Single SinFrequency; // 0x3C
		::System::Single DistanceFadeoutScale; // 0x40
		::System::Single OffscreenFadeWeight; // 0x44
		::System::Single DistanceFadeoutOffset; // 0x48
		::System::Single SceneBillboardFogIntensity; // 0x4C
		::System::UInt32 MaterialRenderQueue; // 0x50
		::System::Single PerlinNoiseRemapMin; // 0x54
		::System::Single PerlinNoiseRemapMax; // 0x58
		::System::Single VerticalRestraints; // 0x5C
		::System::Single FalloffStart; // 0x60
		::System::Single BlendRadius; // 0x64
		::System::Boolean FadeoutCameraIn; // 0x68
		::System::Byte _padding1[0x3];
		::RPG::Client::BillboardController_RenderingMode RenderingBlendMode; // 0x6C
		::RPG::CustomRP::CustomLightQualityFilter LightQualityFilter; // 0x70
		::System::Byte _padding2[0x4];
		::GPFEAEOEGFA_ExtraExportData* extraExportData; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SCENENLIGHTMANAGER_BILLBOARDCONTROLLER_EXPORTDATA_CTOR_OFFSET))(this);
		}

	};
}
