#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SRPLensFlareBlendMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SRPLensFlareDistribution.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SRPLensFlareType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GETLENSFLARETEXTURE_OFFSET UNITYSDK_OFFSET(0x20025280)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x20025290)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_EDGEOFFSET_OFFSET UNITYSDK_OFFSET(0x200252C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_FALLOFF_OFFSET UNITYSDK_OFFSET(0x200252B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_INTENSITYVARIATION_OFFSET UNITYSDK_OFFSET(0x200252A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_LOCALINTENSITY_OFFSET UNITYSDK_OFFSET(0x20025270)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_SDFROUNDNESS_OFFSET UNITYSDK_OFFSET(0x200252E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_SIDECOUNT_OFFSET UNITYSDK_OFFSET(0x200252D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_REFRESHTEXTUREID_OFFSET UNITYSDK_OFFSET(0x200252F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x200251D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_EDGEOFFSET_OFFSET UNITYSDK_OFFSET(0x20025210)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_FALLOFF_OFFSET UNITYSDK_OFFSET(0x200251F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_INTENSITYVARIATION_OFFSET UNITYSDK_OFFSET(0x200251E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_LOCALINTENSITY_OFFSET UNITYSDK_OFFSET(0x200251C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_SDFROUNDNESS_OFFSET UNITYSDK_OFFSET(0x20025230)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_SIDECOUNT_OFFSET UNITYSDK_OFFSET(0x20025250)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP__CTOR_OFFSET UNITYSDK_OFFSET(0x20024D30)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LensFlareDataElementSRP_TypeDefinitionIndex = 18042;

	class LensFlareDataElementSRP : public ::System::Object
	{
	public:
		::System::Boolean visible; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single position; // 0x14
		::UnityEngine::Vector2 positionOffset; // 0x18
		::System::Single angularOffset; // 0x20
		::UnityEngine::Vector2 translationScale; // 0x24
		::System::Single m_LocalIntensity; // 0x2C
		::UnityEngine::Texture* lensFlareTexture; // 0x30
		::System::Int32 texIndex; // 0x38
		::System::Byte _padding1[0x4];
		::UnityEngine::Rendering::RenderTargetIdentifier lensFlareTextureID; // 0x40
		::System::Single uniformScale; // 0x68
		::UnityEngine::Vector2 sizeXY; // 0x6C
		::System::Boolean allowMultipleElement; // 0x74
		::System::Byte _padding2[0x3];
		::System::Int32 m_Count; // 0x78
		::System::Boolean preserveAspectRatio; // 0x7C
		::System::Byte _padding3[0x3];
		::System::Single rotation; // 0x80
		::UnityEngine::Color tint; // 0x84
		::System::Boolean autoRotate; // 0x94
		::System::Byte _padding4[0x3];
		::UnityEngine::NAPRenderPipeline0::SRPLensFlareBlendMode blendMode; // 0x98
		::UnityEngine::NAPRenderPipeline0::SRPLensFlareType flareType; // 0x9C
		::UnityEngine::NAPRenderPipeline0::SRPLensFlareDistribution distribution; // 0xA0
		::System::Boolean modulateByLightColor; // 0xA4
		::System::Boolean isFoldOpened; // 0xA5
		::System::Byte _padding5[0x2];
		::System::Single lengthSpread; // 0xA8
		::System::Byte _padding6[0x4];
		::UnityEngine::AnimationCurve* positionCurve; // 0xB0
		::UnityEngine::AnimationCurve* scaleCurve; // 0xB8
		::System::Int32 seed; // 0xC0
		::System::Byte _padding7[0x4];
		::UnityEngine::Gradient* colorGradient; // 0xC8
		::System::Single m_IntensityVariation; // 0xD0
		::UnityEngine::Vector2 positionVariation; // 0xD4
		::System::Single scaleVariation; // 0xDC
		::System::Single rotationVariation; // 0xE0
		::System::Boolean enableRadialDistortion; // 0xE4
		::System::Byte _padding8[0x3];
		::UnityEngine::Vector2 targetSizeDistortion; // 0xE8
		::UnityEngine::AnimationCurve* distortionCurve; // 0xF0
		::System::Boolean distortionRelativeToCenter; // 0xF8
		::System::Byte _padding9[0x3];
		::System::Single m_FallOff; // 0xFC
		::System::Single m_EdgeOffset; // 0x100
		::System::Int32 m_SideCount; // 0x104
		::System::Single m_SdfRoundness; // 0x108
		::System::Boolean inverseSDF; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP__CTOR_OFFSET))(this);
		}

		::System::Single get_localIntensity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_LOCALINTENSITY_OFFSET))(this);
		}

		::System::Void set_localIntensity(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_LOCALINTENSITY_OFFSET))(this, value);
		}

		::UnityEngine::Texture* GetLensFlareTexture()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GETLENSFLARETEXTURE_OFFSET))(this);
		}

		::System::Int32 get_count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_count(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_COUNT_OFFSET))(this, value);
		}

		::System::Single get_intensityVariation()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_INTENSITYVARIATION_OFFSET))(this);
		}

		::System::Void set_intensityVariation(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_INTENSITYVARIATION_OFFSET))(this, value);
		}

		::System::Single get_fallOff()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_FALLOFF_OFFSET))(this);
		}

		::System::Void set_fallOff(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_FALLOFF_OFFSET))(this, value);
		}

		::System::Single get_edgeOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_EDGEOFFSET_OFFSET))(this);
		}

		::System::Void set_edgeOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_EDGEOFFSET_OFFSET))(this, value);
		}

		::System::Int32 get_sideCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_SIDECOUNT_OFFSET))(this);
		}

		::System::Void set_sideCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_SIDECOUNT_OFFSET))(this, value);
		}

		::System::Single get_sdfRoundness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_GET_SDFROUNDNESS_OFFSET))(this);
		}

		::System::Void set_sdfRoundness(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_SET_SDFROUNDNESS_OFFSET))(this, value);
		}

		::System::Void RefreshTextureID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLAREDATAELEMENTSRP_REFRESHTEXTUREID_OFFSET))(this);
		}
	};
}
