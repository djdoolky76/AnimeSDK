#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DownsampleType.h"
#include "unitysdk/RPG/CustomRP/EDeviceGPUType.h"
#include "unitysdk/RPG/CustomRP/FlagMask.h"
#include "unitysdk/RPG/CustomRP/GeometryShadowQuality.h"
#include "unitysdk/RPG/CustomRP/PerObjectShadowResolution.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/RPG/CustomRP/ShaderQuality.h"
#include "unitysdk/RPG/CustomRP/ShadowCascades.h"
#include "unitysdk/UnityEngine/Rendering/AOCSVersion.h"
#include "unitysdk/UnityEngine/Rendering/DepthCopyFlag.h"
#include "unitysdk/UnityEngine/Rendering/VsmSettings.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::CustomRP { class CRPGraphicsPlatformConfig; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_AdaptiveTessellationSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_AstraFXSettingData; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_CRPPostProcessSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_DLSSSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_DeformationSettingCollection; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_DynamicResolutionSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_GlobalSDFSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_GrassSettingCollection; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_LocalLightSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_PcssSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_VolumetricCloudSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_VolumetricCloudSphereSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_VolumetricFogSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_VolumetricLightSettings; }
namespace RPG::CustomRP { class CRPGraphicsSettingsData_VoxelIrradianceCacheSettings; }
namespace RPG::CustomRP { class ReflectionSetting; }
namespace RPG::CustomRP { class ScreenColorCopySettingsData; }
namespace RPG::CustomRP { class ShadowSettings; }
namespace RPG::CustomRP { class TransparentSetting; }
namespace RPG::CustomRP { class WaterSettingsData; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDAA0D0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_ENABLEVSM_OFFSET UNITYSDK_OFFSET(0x1DDA9F10)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_AUDIENCEDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1DDA9FC0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_CROWDDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1DDA9F40)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_CURRENTPLATFORMCONFIG_OFFSET UNITYSDK_OFFSET(0x1DDAA000)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_PEDESTRIANDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1DDA9F80)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_AUDIENCEDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1DDA9FD0)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_CROWDDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1DDA9F50)
#define RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_PEDESTRIANDENSITYQUALITY_OFFSET UNITYSDK_OFFSET(0x1DDA9F90)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPGraphicsSettingsData_TypeDefinitionIndex = 38585;

	class CRPGraphicsSettingsData : public ::UnityEngine::ScriptableObject
	{
	public:
		::RPG::CustomRP::EDeviceGPUType DeviceGPUType; // 0x18
		::System::Boolean EnableHDR; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single RenderScale; // 0x20
		::System::Single MaxRenderScale; // 0x24
		::System::Single CaptureScale; // 0x28
		::System::Single PPBlitThresthold; // 0x2C
		::RPG::CustomRP::CRPGraphicsSettingsData_DynamicResolutionSettings* DynamicResolution; // 0x30
		::RPG::CustomRP::CRPGraphicsSettingsData_CRPPostProcessSettings* PostProcess; // 0x38
		::RPG::CustomRP::CRPGraphicsSettingsData_AstraFXSettingData* AstraFXSetting; // 0x40
		::RPG::CustomRP::CRPGraphicsSettingsData_LocalLightSettings* LocalLight; // 0x48
		::RPG::CustomRP::Quality AOQuality; // 0x50
		::System::Boolean AOUseComputeShader; // 0x54
		::System::Byte _padding1[0x3];
		::UnityEngine::Rendering::AOCSVersion AOComputeShaderVersion; // 0x58
		::System::Boolean EnableAsyncCompute; // 0x5C
		::System::Boolean EnableCapsuleAO; // 0x5D
		::System::Boolean EnableHiZOC; // 0x5E
		::System::Boolean HiZUseCS; // 0x5F
		::System::Single MotionVectorDistance; // 0x60
		::System::Single OutlineDistance; // 0x64
		::System::Single OutlineMinScreenSize; // 0x68
		::System::Boolean OutlineCullUseScreenSize; // 0x6C
		::System::Byte _padding2[0x3];
		::System::Single EyeHairDistance; // 0x70
		::System::Single DecalDistance; // 0x74
		::System::Single DecalMinScreenSize; // 0x78
		::System::Boolean DecalCullUseScreenSize; // 0x7C
		::System::Boolean EnableAmbientTex; // 0x7D
		::System::Boolean EnableHalfAmbientRT; // 0x7E
		::System::Boolean PrelightingUseDepthCopy; // 0x7F
		::System::Boolean HalfEnvSize; // 0x80
		::System::Boolean OutlineMotionVector; // 0x81
		::System::Byte _padding3[0x2];
		::UnityEngine::Rendering::DepthCopyFlag ForwardDepthCopyFlag; // 0x84
		::System::Boolean EnableCustomBackground; // 0x88
		::System::Boolean EnablePlayerFastQuit; // 0x89
		::System::Boolean DisableUIAtlas; // 0x8A
		::System::Byte _padding4[0x1];
		::System::Int32 minInstanceCountAsyncFill; // 0x8C
		::System::Single PlaneReflectionScale; // 0x90
		::RPG::CustomRP::DownsampleType RTDownsampling; // 0x94
		::System::Boolean EnableARMDepthFetchForSoftParticles; // 0x98
		::System::Boolean EnableRenderPassSplitInMaliVulkanFollowQuality; // 0x99
		::System::Boolean DisableMaliWorkaroundWarning; // 0x9A
		::System::Boolean BlitUseQuadExclusiveInVulkan; // 0x9B
		::System::Boolean DisableInstancedItemGraphicsJob; // 0x9C
		::System::Boolean EnableInstancedItemCullOnePass; // 0x9D
		::System::Boolean RemoveIRIHizCloseFunc; // 0x9E
		::System::Boolean EnableComputeSkinningBatch; // 0x9F
		::System::Boolean EnableRemoveEmptyIndirectDrawUseOC; // 0xA0
		::System::Boolean TrimVkScratchBuffer; // 0xA1
		::System::Boolean EnableVKBarrierOpt; // 0xA2
		::System::Boolean GlobalEnableShadow; // 0xA3
		::System::Boolean inDoor; // 0xA4
		::System::Boolean CSMBlend; // 0xA5
		::System::Boolean EnableLocalLightShadowCache; // 0xA6
		::System::Byte _padding5[0x1];
		::System::Single CSMBlendRange; // 0xA8
		::System::Boolean supportsMainLightShadows; // 0xAC
		::System::Byte _padding6[0x3];
		::System::Int32 MainLightShadowResolution; // 0xB0
		::RPG::CustomRP::ShadowCascades ShadowCascades; // 0xB4
		::System::Single Cascade2Split; // 0xB8
		::UnityEngine::Vector3 Cascade4Split; // 0xBC
		::System::Single ShadowDepthBias; // 0xC8
		::System::Single ShadowNormalBias; // 0xCC
		::System::Boolean EnableSoftShadow; // 0xD0
		::System::Byte _padding7[0x3];
		::System::Single ShadowDistance; // 0xD4
		::System::Single ShadowNearOffset; // 0xD8
		::System::Single ObjectShadowDistance; // 0xDC
		::System::Single MaxSceneHeightDiff; // 0xE0
		::System::Single MinPosmLightPitchDegree; // 0xE4
		::RPG::CustomRP::ShadowSettings* ShadowSettings; // 0xE8
		::UnityEngine::Rendering::VsmSettings VsmSettings; // 0xF0
		::System::Action_1<::System::Boolean>* OnVSMEnableChanged; // 0x150
		::System::Boolean EnableCloudShadow; // 0x158
		::System::Boolean EnablePOSMOverlay; // 0x159
		::System::Boolean EnablePCSSInUI; // 0x15A
		::System::Byte _padding8[0x5];
		::RPG::CustomRP::CRPGraphicsSettingsData_PcssSettings* pcssSettings; // 0x160
		::RPG::CustomRP::CRPGraphicsSettingsData_PcssSettings* pcssSettingsPOSM; // 0x168
		::System::Boolean EnableSelfShadow; // 0x170
		::System::Boolean EnableFaceHairShadow; // 0x171
		::System::Byte _padding9[0x2];
		::System::Int32 SelfShadowCount; // 0x174
		::System::Int32 SelfShadowResolution; // 0x178
		::System::Boolean supportsAdditionalLightShadows; // 0x17C
		::System::Byte _padding10[0x3];
		::System::Int32 LocalShadowOnlyLightCount; // 0x180
		::System::Int32 LocalShadowOnlyResolution; // 0x184
		::System::Int32 AdditionalShadowLightCount; // 0x188
		::System::Int32 AdditionalShadowCacheCount; // 0x18C
		::System::Int32 AdditionalShadowResolution; // 0x190
		::System::Int32 MinPerObjectShadowCacheCount; // 0x194
		::System::Int32 MaxPerObjectShadowCount; // 0x198
		::RPG::CustomRP::PerObjectShadowResolution PerObjectShadowResolution; // 0x19C
		::System::Int32 MaxRealtimeShadowlightCount; // 0x1A0
		::System::Single geometryShadowFadeRatio; // 0x1A4
		::RPG::CustomRP::GeometryShadowQuality geometryShadowQuality; // 0x1A8
		::System::Boolean ScreenSpaceDistortion; // 0x1AC
		::System::Byte _padding11[0x3];
		::System::Single ScreenSpaceDistortionBufferScale; // 0x1B0
		::RPG::CustomRP::ShaderQuality envShaderQuality; // 0x1B4
		::System::Boolean LuxSceneGlass; // 0x1B8
		::System::Boolean LuxSceneEmission; // 0x1B9
		::System::Boolean CharForwardEmission; // 0x1BA
		::System::Boolean CharAndroidLowQuality; // 0x1BB
		::RPG::CustomRP::Quality CharacterQuality; // 0x1BC
		::System::Boolean HighQualityEffect; // 0x1C0
		::System::Boolean EnableLinearFog; // 0x1C1
		::System::Boolean EnableHeightFog; // 0x1C2
		::System::Boolean EnableEmotionEyeBlink; // 0x1C3
		::System::Byte _padding12[0x4];
		::System::Action* OnCrowdQualityChange; // 0x1C8
		::RPG::CustomRP::Quality _crowdDensityQuality; // 0x1D0
		::System::Byte _padding13[0x4];
		::System::Action* OnPedestianQualityChange; // 0x1D8
		::RPG::CustomRP::Quality _pedestrianDensityQuality; // 0x1E0
		::System::Byte _padding14[0x4];
		::System::Action* OnAudienceQualityChange; // 0x1E8
		::RPG::CustomRP::Quality _audienceDensityQuality; // 0x1F0
		::System::Int32 SkipFrameDelay; // 0x1F4
		::RPG::CustomRP::ReflectionSetting* reflectionSettings; // 0x1F8
		::RPG::CustomRP::WaterSettingsData* waterSettings; // 0x200
		::RPG::CustomRP::ScreenColorCopySettingsData* screenColorCopySettings; // 0x208
		::RPG::CustomRP::TransparentSetting* transparentSetting; // 0x210
		::RPG::CustomRP::CRPGraphicsSettingsData_VolumetricCloudSettings* volumetricCloudSettings; // 0x218
		::RPG::CustomRP::CRPGraphicsSettingsData_VolumetricFogSettings* volumetricFogSettings; // 0x220
		::RPG::CustomRP::CRPGraphicsSettingsData_VolumetricCloudSphereSettings* volumetricCloudSphereSettings; // 0x228
		::RPG::CustomRP::CRPGraphicsSettingsData_VolumetricLightSettings* volumetricLightSettings; // 0x230
		::RPG::CustomRP::CRPGraphicsSettingsData_GlobalSDFSettings* globalSDFSettings; // 0x238
		::RPG::CustomRP::CRPGraphicsSettingsData_GrassSettingCollection* grassSettings; // 0x240
		::RPG::CustomRP::CRPGraphicsSettingsData_DeformationSettingCollection* deformationSettings; // 0x248
		::RPG::CustomRP::CRPGraphicsSettingsData_VoxelIrradianceCacheSettings* voxelIrradianceCacheSettings; // 0x250
		::RPG::CustomRP::CRPGraphicsSettingsData_AdaptiveTessellationSettings* adaptiveTessellationSettings; // 0x258
		::RPG::CustomRP::CRPGraphicsSettingsData_DLSSSettings* dlssSettings; // 0x260
		::System::Boolean enableMetalVrr; // 0x268
		::System::Byte _padding15[0x3];
		::System::Int32 particleTrailSmoothness; // 0x26C
		::RPG::CustomRP::CRPGraphicsPlatformConfig* iosConfig; // 0x270
		::RPG::CustomRP::CRPGraphicsPlatformConfig* androidConfig; // 0x278
		::RPG::CustomRP::CRPGraphicsPlatformConfig* ps5Config; // 0x280
		::RPG::CustomRP::CRPGraphicsPlatformConfig* pcConfig; // 0x288
		::RPG::CustomRP::FlagMask _FeatureFlag; // 0x290
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_CTOR_OFFSET))(this);
		}

		::System::Void EnableVSM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_ENABLEVSM_OFFSET))(this, a1);
		}

		::RPG::CustomRP::Quality get_CrowdDensityQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_CROWDDENSITYQUALITY_OFFSET))(this);
		}

		::System::Void set_CrowdDensityQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_CROWDDENSITYQUALITY_OFFSET))(this, a1);
		}

		::RPG::CustomRP::Quality get_PedestrianDensityQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_PEDESTRIANDENSITYQUALITY_OFFSET))(this);
		}

		::System::Void set_PedestrianDensityQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_PEDESTRIANDENSITYQUALITY_OFFSET))(this, a1);
		}

		::RPG::CustomRP::Quality get_AudienceDensityQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_AUDIENCEDENSITYQUALITY_OFFSET))(this);
		}

		::System::Void set_AudienceDensityQuality(::RPG::CustomRP::Quality a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::Quality))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_SET_AUDIENCEDENSITYQUALITY_OFFSET))(this, a1);
		}

		static ::RPG::CustomRP::CRPGraphicsPlatformConfig* get_CurrentPlatformConfig()
		{
			return ((::RPG::CustomRP::CRPGraphicsPlatformConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_CRPGRAPHICSSETTINGSDATA_GET_CURRENTPLATFORMCONFIG_OFFSET))();
		}

	};
}
