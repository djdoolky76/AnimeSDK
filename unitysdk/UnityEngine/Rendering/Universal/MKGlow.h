#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/AntiFlickerMode.h"
#include "unitysdk/PostProcess/MKGlow/DebugView.h"
#include "unitysdk/PostProcess/MKGlow/GlareStyle.h"
#include "unitysdk/PostProcess/MKGlow/LensFlareStyle.h"
#include "unitysdk/PostProcess/MKGlow/Quality.h"
#include "unitysdk/PostProcess/MKGlow/RenderPriority.h"
#include "unitysdk/PostProcess/MKGlow/Workflow.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"
#include "unitysdk/PostProcess/MKGlow/MinMaxRange.h"
#include "unitysdk/UnityEngine/LayerMask.h"

namespace PostProcess::MKGlow { class MKGlowResources; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedIntParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::Rendering::Universal { class MKGlow_AntiFlickerModeParameter; }
namespace UnityEngine::Rendering::Universal { class MKGlow_DebugViewParameter; }
namespace UnityEngine::Rendering::Universal { class MKGlow_GlareStyleParameter; }
namespace UnityEngine::Rendering::Universal { class MKGlow_LayerMaskParameter; }
namespace UnityEngine::Rendering::Universal { class MKGlow_LensFlareStyleParameter; }
namespace UnityEngine::Rendering::Universal { class MKGlow_MinMaxRangeParameter; }
namespace UnityEngine::Rendering::Universal { class MKGlow_QualityParameter; }
namespace UnityEngine::Rendering::Universal { class MKGlow_RenderPriorityParameter; }
namespace UnityEngine::Rendering::Universal { class MKGlow_ResourcesParameter; }
namespace UnityEngine::Rendering::Universal { class MKGlow_Texture2DParameter; }
namespace UnityEngine::Rendering::Universal { class MKGlow_WorkflowParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETALLOWCOMPUTESHADERS_OFFSET UNITYSDK_OFFSET(0x1CA65BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETALLOWGEOMETRYSHADERS_OFFSET UNITYSDK_OFFSET(0x1CA65BA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETALLOWGLARE_OFFSET UNITYSDK_OFFSET(0x1CA66BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETALLOWLENSFLARE_OFFSET UNITYSDK_OFFSET(0x1CA66410)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETALLOWLENSSURFACE_OFFSET UNITYSDK_OFFSET(0x1CA66210)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETANAMORPHICRATIO_OFFSET UNITYSDK_OFFSET(0x1CA65FD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETANTIFLICKERMODE_OFFSET UNITYSDK_OFFSET(0x1CA65EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETBLOOMING_OFFSET UNITYSDK_OFFSET(0x1CA66080)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETBLOOMINTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA661A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETBLOOMSCATTERING_OFFSET UNITYSDK_OFFSET(0x1CA66140)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETBLOOMTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1CA660E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETDEBUGVIEW_OFFSET UNITYSDK_OFFSET(0x1CA65E40)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLAREANGLE_OFFSET UNITYSDK_OFFSET(0x1CA66CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLAREBLEND_OFFSET UNITYSDK_OFFSET(0x1CA66C10)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLAREDISTANCEFADE_OFFSET UNITYSDK_OFFSET(0x1CA66DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLAREINTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA66C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE0ANGLE_OFFSET UNITYSDK_OFFSET(0x1CA67070)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE0INTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA670D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE0OFFSET_OFFSET UNITYSDK_OFFSET(0x1CA67140)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE0SCATTERING_OFFSET UNITYSDK_OFFSET(0x1CA67010)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE1ANGLE_OFFSET UNITYSDK_OFFSET(0x1CA673E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE1INTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA67440)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE1OFFSET_OFFSET UNITYSDK_OFFSET(0x1CA674B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE1SCATTERING_OFFSET UNITYSDK_OFFSET(0x1CA67380)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE2ANGLE_OFFSET UNITYSDK_OFFSET(0x1CA67750)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE2INTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA677B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE2OFFSET_OFFSET UNITYSDK_OFFSET(0x1CA67820)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE2SCATTERING_OFFSET UNITYSDK_OFFSET(0x1CA676F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE3ANGLE_OFFSET UNITYSDK_OFFSET(0x1CA67AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE3INTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA67B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE3OFFSET_OFFSET UNITYSDK_OFFSET(0x1CA67B90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE3SCATTERING_OFFSET UNITYSDK_OFFSET(0x1CA67A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESCATTERING_OFFSET UNITYSDK_OFFSET(0x1CA66F60)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESTREAKS_OFFSET UNITYSDK_OFFSET(0x1CA66E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESTYLE_OFFSET UNITYSDK_OFFSET(0x1CA66FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1CA66D40)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLARECHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0x1CA666B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLARECOLORRAMP_OFFSET UNITYSDK_OFFSET(0x1CA66650)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREGHOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x1CA66710)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREGHOSTDISPERSAL_OFFSET UNITYSDK_OFFSET(0x1CA66760)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREGHOSTFADE_OFFSET UNITYSDK_OFFSET(0x1CA664C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREGHOSTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA66520)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREHALOFADE_OFFSET UNITYSDK_OFFSET(0x1CA667C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREHALOINTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA66820)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREHALOSIZE_OFFSET UNITYSDK_OFFSET(0x1CA66890)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLARESCATTERING_OFFSET UNITYSDK_OFFSET(0x1CA665F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLARESTYLE_OFFSET UNITYSDK_OFFSET(0x1CA66470)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLARETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x1CA66590)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSSURFACEDIFFRACTIONINTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA663A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSSURFACEDIFFRACTIONTEXTURE_OFFSET UNITYSDK_OFFSET(0x1CA66340)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSSURFACEDIRTINTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA662D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSSURFACEDIRTTEXTURE_OFFSET UNITYSDK_OFFSET(0x1CA66270)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLUMASCALE_OFFSET UNITYSDK_OFFSET(0x1CA66020)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETMATERIAL_OFFSET UNITYSDK_OFFSET(0x1CA65C70)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETQUALITY_OFFSET UNITYSDK_OFFSET(0x1CA65E90)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETRENDERPRIORITY_OFFSET UNITYSDK_OFFSET(0x1CA65DF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETRESOURCES_OFFSET UNITYSDK_OFFSET(0x1CA65C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETSELECTIVERENDERLAYERMASK_OFFSET UNITYSDK_OFFSET(0x1CA65F80)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETWORKFLOW_OFFSET UNITYSDK_OFFSET(0x1CA65F30)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1CA658B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x1CA65B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE0ANGLE_OFFSET UNITYSDK_OFFSET(0x1CA67210)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE0INTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA67280)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE0OFFSET_OFFSET UNITYSDK_OFFSET(0x1CA67310)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE0SCATTERING_OFFSET UNITYSDK_OFFSET(0x1CA671A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE1ANGLE_OFFSET UNITYSDK_OFFSET(0x1CA67580)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE1INTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA675F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE1OFFSET_OFFSET UNITYSDK_OFFSET(0x1CA67680)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE1SCATTERING_OFFSET UNITYSDK_OFFSET(0x1CA67510)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE2ANGLE_OFFSET UNITYSDK_OFFSET(0x1CA678F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE2INTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA67960)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE2OFFSET_OFFSET UNITYSDK_OFFSET(0x1CA679F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE2SCATTERING_OFFSET UNITYSDK_OFFSET(0x1CA67880)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE3ANGLE_OFFSET UNITYSDK_OFFSET(0x1CA67C60)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE3INTENSITY_OFFSET UNITYSDK_OFFSET(0x1CA67CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE3OFFSET_OFFSET UNITYSDK_OFFSET(0x1CA67D60)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE3SCATTERING_OFFSET UNITYSDK_OFFSET(0x1CA67BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESTREAKS_OFFSET UNITYSDK_OFFSET(0x1CA66E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETLENSFLAREGHOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x1CA66960)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETLENSFLAREGHOSTDISPERSAL_OFFSET UNITYSDK_OFFSET(0x1CA66A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETLENSFLAREGHOSTFADE_OFFSET UNITYSDK_OFFSET(0x1CA668F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETLENSFLAREHALOFADE_OFFSET UNITYSDK_OFFSET(0x1CA66AD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETLENSFLAREHALOSIZE_OFFSET UNITYSDK_OFFSET(0x1CA66B40)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA67DD0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_TypeDefinitionIndex = 26368;

	class MKGlow : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enable; // 0x38
		::UnityEngine::Rendering::Universal::MKGlow_ResourcesParameter* resources; // 0x40
		::UnityEngine::Rendering::Universal::MKGlow_RenderPriorityParameter* renderPriority; // 0x48
		::UnityEngine::Rendering::Universal::MKGlow_DebugViewParameter* debugView; // 0x50
		::UnityEngine::Rendering::Universal::MKGlow_QualityParameter* quality; // 0x58
		::UnityEngine::Rendering::Universal::MKGlow_AntiFlickerModeParameter* antiFlickerMode; // 0x60
		::UnityEngine::Rendering::Universal::MKGlow_WorkflowParameter* workflow; // 0x68
		::UnityEngine::Rendering::Universal::MKGlow_LayerMaskParameter* selectiveRenderLayerMask; // 0x70
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* anamorphicRatio; // 0x78
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lumaScale; // 0x80
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* blooming; // 0x88
		::UnityEngine::Rendering::Universal::MKGlow_MinMaxRangeParameter* bloomThreshold; // 0x90
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* bloomScattering; // 0x98
		::UnityEngine::NAPRenderPipeline0::FloatParameter* bloomIntensity; // 0xA0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* allowLensSurface; // 0xA8
		::UnityEngine::Rendering::Universal::MKGlow_Texture2DParameter* lensSurfaceDirtTexture; // 0xB0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* lensSurfaceDirtIntensity; // 0xB8
		::UnityEngine::Rendering::Universal::MKGlow_Texture2DParameter* lensSurfaceDiffractionTexture; // 0xC0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* lensSurfaceDiffractionIntensity; // 0xC8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* allowLensFlare; // 0xD0
		::UnityEngine::Rendering::Universal::MKGlow_LensFlareStyleParameter* lensFlareStyle; // 0xD8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensFlareGhostFade; // 0xE0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* lensFlareGhostIntensity; // 0xE8
		::UnityEngine::Rendering::Universal::MKGlow_MinMaxRangeParameter* lensFlareThreshold; // 0xF0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensFlareScattering; // 0xF8
		::UnityEngine::Rendering::Universal::MKGlow_Texture2DParameter* lensFlareColorRamp; // 0x100
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensFlareChromaticAberration; // 0x108
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* lensFlareGhostCount; // 0x110
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensFlareGhostDispersal; // 0x118
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensFlareHaloFade; // 0x120
		::UnityEngine::NAPRenderPipeline0::FloatParameter* lensFlareHaloIntensity; // 0x128
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lensFlareHaloSize; // 0x130
		::UnityEngine::NAPRenderPipeline0::BoolParameter* allowGlare; // 0x138
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareBlend; // 0x140
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glareIntensity; // 0x148
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareAngle; // 0x150
		::UnityEngine::Rendering::Universal::MKGlow_MinMaxRangeParameter* glareThreshold; // 0x158
		::UnityEngine::NAPRenderPipeline0::ClampedIntParameter* glareStreaks; // 0x160
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareScattering; // 0x168
		::UnityEngine::Rendering::Universal::MKGlow_GlareStyleParameter* glareStyle; // 0x170
		::UnityEngine::Rendering::Universal::MKGlow_MinMaxRangeParameter* glareDistanceFade; // 0x178
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample0Scattering; // 0x180
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample0Angle; // 0x188
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glareSample0Intensity; // 0x190
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample0Offset; // 0x198
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample1Scattering; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample1Angle; // 0x1A8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glareSample1Intensity; // 0x1B0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample1Offset; // 0x1B8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample2Scattering; // 0x1C0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample2Angle; // 0x1C8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glareSample2Intensity; // 0x1D0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample2Offset; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample3Scattering; // 0x1E0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample3Angle; // 0x1E8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* glareSample3Intensity; // 0x1F0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* glareSample3Offset; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW__CTOR_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ISTILECOMPATIBLE_OFFSET))(this);
		}

		::System::Boolean GetAllowGeometryShaders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETALLOWGEOMETRYSHADERS_OFFSET))(this);
		}

		::System::Boolean GetAllowComputeShaders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETALLOWCOMPUTESHADERS_OFFSET))(this);
		}

		::PostProcess::MKGlow::MKGlowResources* GetResources()
		{
			return ((::PostProcess::MKGlow::MKGlowResources*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETRESOURCES_OFFSET))(this);
		}

		::UnityEngine::Material* GetMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETMATERIAL_OFFSET))(this);
		}

		::PostProcess::MKGlow::RenderPriority GetRenderPriority()
		{
			return ((::PostProcess::MKGlow::RenderPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETRENDERPRIORITY_OFFSET))(this);
		}

		::PostProcess::MKGlow::DebugView GetDebugView()
		{
			return ((::PostProcess::MKGlow::DebugView(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETDEBUGVIEW_OFFSET))(this);
		}

		::PostProcess::MKGlow::Quality GetQuality()
		{
			return ((::PostProcess::MKGlow::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETQUALITY_OFFSET))(this);
		}

		::PostProcess::MKGlow::AntiFlickerMode GetAntiFlickerMode()
		{
			return ((::PostProcess::MKGlow::AntiFlickerMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETANTIFLICKERMODE_OFFSET))(this);
		}

		::PostProcess::MKGlow::Workflow GetWorkflow()
		{
			return ((::PostProcess::MKGlow::Workflow(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETWORKFLOW_OFFSET))(this);
		}

		::UnityEngine::LayerMask GetSelectiveRenderLayerMask()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETSELECTIVERENDERLAYERMASK_OFFSET))(this);
		}

		::System::Single GetAnamorphicRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETANAMORPHICRATIO_OFFSET))(this);
		}

		::System::Single GetLumaScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLUMASCALE_OFFSET))(this);
		}

		::System::Single GetBlooming()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETBLOOMING_OFFSET))(this);
		}

		::PostProcess::MKGlow::MinMaxRange GetBloomThreshold()
		{
			return ((::PostProcess::MKGlow::MinMaxRange(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETBLOOMTHRESHOLD_OFFSET))(this);
		}

		::System::Single GetBloomScattering()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETBLOOMSCATTERING_OFFSET))(this);
		}

		::System::Single GetBloomIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETBLOOMINTENSITY_OFFSET))(this);
		}

		::System::Boolean GetAllowLensSurface()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETALLOWLENSSURFACE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* GetLensSurfaceDirtTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSSURFACEDIRTTEXTURE_OFFSET))(this);
		}

		::System::Single GetLensSurfaceDirtIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSSURFACEDIRTINTENSITY_OFFSET))(this);
		}

		::UnityEngine::Texture2D* GetLensSurfaceDiffractionTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSSURFACEDIFFRACTIONTEXTURE_OFFSET))(this);
		}

		::System::Single GetLensSurfaceDiffractionIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSSURFACEDIFFRACTIONINTENSITY_OFFSET))(this);
		}

		::System::Boolean GetAllowLensFlare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETALLOWLENSFLARE_OFFSET))(this);
		}

		::PostProcess::MKGlow::LensFlareStyle GetLensFlareStyle()
		{
			return ((::PostProcess::MKGlow::LensFlareStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLARESTYLE_OFFSET))(this);
		}

		::System::Single GetLensFlareGhostFade()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREGHOSTFADE_OFFSET))(this);
		}

		::System::Single GetLensFlareGhostIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREGHOSTINTENSITY_OFFSET))(this);
		}

		::PostProcess::MKGlow::MinMaxRange GetLensFlareThreshold()
		{
			return ((::PostProcess::MKGlow::MinMaxRange(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLARETHRESHOLD_OFFSET))(this);
		}

		::System::Single GetLensFlareScattering()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLARESCATTERING_OFFSET))(this);
		}

		::UnityEngine::Texture2D* GetLensFlareColorRamp()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLARECOLORRAMP_OFFSET))(this);
		}

		::System::Single GetLensFlareChromaticAberration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLARECHROMATICABERRATION_OFFSET))(this);
		}

		::System::Int32 GetLensFlareGhostCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREGHOSTCOUNT_OFFSET))(this);
		}

		::System::Single GetLensFlareGhostDispersal()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREGHOSTDISPERSAL_OFFSET))(this);
		}

		::System::Single GetLensFlareHaloFade()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREHALOFADE_OFFSET))(this);
		}

		::System::Single GetLensFlareHaloIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREHALOINTENSITY_OFFSET))(this);
		}

		::System::Single GetLensFlareHaloSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETLENSFLAREHALOSIZE_OFFSET))(this);
		}

		::System::Void SetLensFlareGhostFade(::System::Single fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETLENSFLAREGHOSTFADE_OFFSET))(this, fade);
		}

		::System::Void SetLensFlareGhostCount(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETLENSFLAREGHOSTCOUNT_OFFSET))(this, count);
		}

		::System::Void SetLensFlareGhostDispersal(::System::Single dispersal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETLENSFLAREGHOSTDISPERSAL_OFFSET))(this, dispersal);
		}

		::System::Void SetLensFlareHaloFade(::System::Single fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETLENSFLAREHALOFADE_OFFSET))(this, fade);
		}

		::System::Void SetLensFlareHaloSize(::System::Single size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETLENSFLAREHALOSIZE_OFFSET))(this, size);
		}

		::System::Boolean GetAllowGlare()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETALLOWGLARE_OFFSET))(this);
		}

		::System::Single GetGlareBlend()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLAREBLEND_OFFSET))(this);
		}

		::System::Single GetGlareIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLAREINTENSITY_OFFSET))(this);
		}

		::System::Single GetGlareAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLAREANGLE_OFFSET))(this);
		}

		::PostProcess::MKGlow::MinMaxRange GetGlareThreshold()
		{
			return ((::PostProcess::MKGlow::MinMaxRange(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARETHRESHOLD_OFFSET))(this);
		}

		::PostProcess::MKGlow::MinMaxRange GetGlareDistanceFade()
		{
			return ((::PostProcess::MKGlow::MinMaxRange(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLAREDISTANCEFADE_OFFSET))(this);
		}

		::System::Int32 GetGlareStreaks()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESTREAKS_OFFSET))(this);
		}

		::System::Void SetGlareStreaks(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESTREAKS_OFFSET))(this, count);
		}

		::System::Single GetGlareScattering()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESCATTERING_OFFSET))(this);
		}

		::PostProcess::MKGlow::GlareStyle GetGlareStyle()
		{
			return ((::PostProcess::MKGlow::GlareStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESTYLE_OFFSET))(this);
		}

		::System::Single GetGlareSample0Scattering()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE0SCATTERING_OFFSET))(this);
		}

		::System::Single GetGlareSample0Angle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE0ANGLE_OFFSET))(this);
		}

		::System::Single GetGlareSample0Intensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE0INTENSITY_OFFSET))(this);
		}

		::System::Single GetGlareSample0Offset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE0OFFSET_OFFSET))(this);
		}

		::System::Void SetGlareSample0Scattering(::System::Single scattering)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE0SCATTERING_OFFSET))(this, scattering);
		}

		::System::Void SetGlareSample0Angle(::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE0ANGLE_OFFSET))(this, angle);
		}

		::System::Void SetGlareSample0Intensity(::System::Single intensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE0INTENSITY_OFFSET))(this, intensity);
		}

		::System::Void SetGlareSample0Offset(::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE0OFFSET_OFFSET))(this, offset);
		}

		::System::Single GetGlareSample1Scattering()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE1SCATTERING_OFFSET))(this);
		}

		::System::Single GetGlareSample1Angle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE1ANGLE_OFFSET))(this);
		}

		::System::Single GetGlareSample1Intensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE1INTENSITY_OFFSET))(this);
		}

		::System::Single GetGlareSample1Offset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE1OFFSET_OFFSET))(this);
		}

		::System::Void SetGlareSample1Scattering(::System::Single scattering)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE1SCATTERING_OFFSET))(this, scattering);
		}

		::System::Void SetGlareSample1Angle(::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE1ANGLE_OFFSET))(this, angle);
		}

		::System::Void SetGlareSample1Intensity(::System::Single intensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE1INTENSITY_OFFSET))(this, intensity);
		}

		::System::Void SetGlareSample1Offset(::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE1OFFSET_OFFSET))(this, offset);
		}

		::System::Single GetGlareSample2Scattering()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE2SCATTERING_OFFSET))(this);
		}

		::System::Single GetGlareSample2Angle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE2ANGLE_OFFSET))(this);
		}

		::System::Single GetGlareSample2Intensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE2INTENSITY_OFFSET))(this);
		}

		::System::Single GetGlareSample2Offset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE2OFFSET_OFFSET))(this);
		}

		::System::Void SetGlareSample2Scattering(::System::Single scattering)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE2SCATTERING_OFFSET))(this, scattering);
		}

		::System::Void SetGlareSample2Angle(::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE2ANGLE_OFFSET))(this, angle);
		}

		::System::Void SetGlareSample2Intensity(::System::Single intensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE2INTENSITY_OFFSET))(this, intensity);
		}

		::System::Void SetGlareSample2Offset(::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE2OFFSET_OFFSET))(this, offset);
		}

		::System::Single GetGlareSample3Scattering()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE3SCATTERING_OFFSET))(this);
		}

		::System::Single GetGlareSample3Angle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE3ANGLE_OFFSET))(this);
		}

		::System::Single GetGlareSample3Intensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE3INTENSITY_OFFSET))(this);
		}

		::System::Single GetGlareSample3Offset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GETGLARESAMPLE3OFFSET_OFFSET))(this);
		}

		::System::Void SetGlareSample3Scattering(::System::Single scattering)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE3SCATTERING_OFFSET))(this, scattering);
		}

		::System::Void SetGlareSample3Angle(::System::Single angle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE3ANGLE_OFFSET))(this, angle);
		}

		::System::Void SetGlareSample3Intensity(::System::Single intensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE3INTENSITY_OFFSET))(this, intensity);
		}

		::System::Void SetGlareSample3Offset(::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_SETGLARESAMPLE3OFFSET_OFFSET))(this, offset);
		}
	};
}
