#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BPLOHOFBFEA;
class CGMLEHGBDCA;
class CIBGIHKAIEA;
class EPIEPBNCJEF;
class FBGGFFENKGA;
class GEPBIHFALML;
class GHKGOMOCHAC;
class GPEIDCEJLIJ;
class HKBBALIEKLG;
class OEFHMBHANLP;
class OEMBLCFJDCG;
class PDGEEGNADLC;
class PDHJKBBGLAB;
class PKABPELPBDG;
namespace MoleMole::Config { class ConfigHollowChessboardBGVideo; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeProfile_NativeSRP; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }
namespace UnityEngine::Rendering::Universal { class Distortion; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }
namespace UnityEngine::Rendering::Universal { class Glitch; }
namespace UnityEngine::Rendering::Universal { class LensDistortion; }
namespace UnityEngine::Rendering::Universal { class Lighting; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }
namespace UnityEngine::Rendering::Universal { class ScreenEffects; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define MOLEMOLE_CONFIG_ATMOSPHEREDATA_CLOSE_OFFSET UNITYSDK_OFFSET(0x16402550)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA_COPYVOLUMETOCONFIG_OFFSET UNITYSDK_OFFSET(0x164026A0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA_OPEN_OFFSET UNITYSDK_OFFSET(0x164023D0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_AMPLIFYOCCLUSION_3_1_OFFSET UNITYSDK_OFFSET(0x16402DA0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_CHROMATICABERRATION_3_6_OFFSET UNITYSDK_OFFSET(0x16403BA0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_COLORADJUSTMENTS_3_11_OFFSET UNITYSDK_OFFSET(0x164048D0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_DEPTHOFFIELD_3_7_OFFSET UNITYSDK_OFFSET(0x16403C30)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_DISTORTION_3_2_OFFSET UNITYSDK_OFFSET(0x16402FA0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_GAUSSIANBLUR_3_12_OFFSET UNITYSDK_OFFSET(0x16404A60)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_GLITCH_3_3_OFFSET UNITYSDK_OFFSET(0x164030A0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_LENSDISTORTION_3_8_OFFSET UNITYSDK_OFFSET(0x16403E70)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_LIGHTING_3_10_OFFSET UNITYSDK_OFFSET(0x164045C0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_NAPBLOOM_3_5_OFFSET UNITYSDK_OFFSET(0x16403720)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_RADIALBLUR_3_4_OFFSET UNITYSDK_OFFSET(0x164034D0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_SCREENEFFECTS_3_9_OFFSET UNITYSDK_OFFSET(0x16403F90)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_VIGNETTE_3_0_OFFSET UNITYSDK_OFFSET(0x16402CE0)
#define MOLEMOLE_CONFIG_ATMOSPHEREDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16404B20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AtmosphereData_TypeDefinitionIndex = 91389;

	class AtmosphereData : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::UnityEngine::AnimationCurve* FadeInCurve; // 0x18
		::UnityEngine::NAPRenderPipeline0::VolumeProfile_NativeSRP* ProfileSrp; // 0x20
		::System::String* FadeOutVoice; // 0x28
		::UnityEngine::AnimationCurve* FadeOutCurve; // 0x30
		::UnityEngine::AnimationCurve* LightCurve; // 0x38
		::System::String* FadeInVoice; // 0x40
		::MoleMole::Config::ConfigHollowChessboardBGVideo* BgVideo; // 0x48
		::System::Single FadeInLength; // 0x50
		::UnityEngine::Vector3 LightAngle; // 0x54
		::System::Single FadeOutLength; // 0x60
		::System::Single BGTVLight; // 0x64
		::System::Single LightDuration; // 0x68
		::MoleMole::HollowChessboard::HollowChessboardUID ChessboardUid; // 0x6C
		::System::Boolean ApplyLUTforEmission; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__CTOR_OFFSET))(this);
		}

		::System::Void Open()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA_OPEN_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA_CLOSE_OFFSET))(this);
		}

		static ::FBGGFFENKGA* CopyVolumeToConfig(::UnityEngine::Rendering::Volume* volume)
		{
			return ((::FBGGFFENKGA*(*)(::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA_COPYVOLUMETOCONFIG_OFFSET))(volume);
		}

		static ::PDHJKBBGLAB* _CopyVolumeToConfig_g__CopyVolumeToConfig_Vignette_3_0(::UnityEngine::Rendering::Universal::Vignette* vignette)
		{
			return ((::PDHJKBBGLAB*(*)(::UnityEngine::Rendering::Universal::Vignette*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_VIGNETTE_3_0_OFFSET))(vignette);
		}

		static ::CGMLEHGBDCA* _CopyVolumeToConfig_g__CopyVolumeToConfig_AmplifyOcclusion_3_1(::UnityEngine::Rendering::Universal::AmplifyOcclusion* amplifyOcclusion)
		{
			return ((::CGMLEHGBDCA*(*)(::UnityEngine::Rendering::Universal::AmplifyOcclusion*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_AMPLIFYOCCLUSION_3_1_OFFSET))(amplifyOcclusion);
		}

		static ::GHKGOMOCHAC* _CopyVolumeToConfig_g__CopyVolumeToConfig_Distortion_3_2(::UnityEngine::Rendering::Universal::Distortion* distortion)
		{
			return ((::GHKGOMOCHAC*(*)(::UnityEngine::Rendering::Universal::Distortion*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_DISTORTION_3_2_OFFSET))(distortion);
		}

		static ::CIBGIHKAIEA* _CopyVolumeToConfig_g__CopyVolumeToConfig_Glitch_3_3(::UnityEngine::Rendering::Universal::Glitch* glitch)
		{
			return ((::CIBGIHKAIEA*(*)(::UnityEngine::Rendering::Universal::Glitch*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_GLITCH_3_3_OFFSET))(glitch);
		}

		static ::EPIEPBNCJEF* _CopyVolumeToConfig_g__CopyVolumeToConfig_RadialBlur_3_4(::UnityEngine::Rendering::Universal::RadialBlur* blur)
		{
			return ((::EPIEPBNCJEF*(*)(::UnityEngine::Rendering::Universal::RadialBlur*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_RADIALBLUR_3_4_OFFSET))(blur);
		}

		static ::PDGEEGNADLC* _CopyVolumeToConfig_g__CopyVolumeToConfig_NapBloom_3_5(::UnityEngine::Rendering::Universal::NapBloom* bloom)
		{
			return ((::PDGEEGNADLC*(*)(::UnityEngine::Rendering::Universal::NapBloom*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_NAPBLOOM_3_5_OFFSET))(bloom);
		}

		static ::PKABPELPBDG* _CopyVolumeToConfig_g__CopyVolumeToConfig_ChromaticAberration_3_6(::UnityEngine::Rendering::Universal::ChromaticAberration* chromatic)
		{
			return ((::PKABPELPBDG*(*)(::UnityEngine::Rendering::Universal::ChromaticAberration*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_CHROMATICABERRATION_3_6_OFFSET))(chromatic);
		}

		static ::OEMBLCFJDCG* _CopyVolumeToConfig_g__CopyVolumeToConfig_DepthOfField_3_7(::UnityEngine::Rendering::Universal::DepthOfField* depth)
		{
			return ((::OEMBLCFJDCG*(*)(::UnityEngine::Rendering::Universal::DepthOfField*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_DEPTHOFFIELD_3_7_OFFSET))(depth);
		}

		static ::HKBBALIEKLG* _CopyVolumeToConfig_g__CopyVolumeToConfig_LensDistortion_3_8(::UnityEngine::Rendering::Universal::LensDistortion* lens)
		{
			return ((::HKBBALIEKLG*(*)(::UnityEngine::Rendering::Universal::LensDistortion*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_LENSDISTORTION_3_8_OFFSET))(lens);
		}

		static ::BPLOHOFBFEA* _CopyVolumeToConfig_g__CopyVolumeToConfig_ScreenEffects_3_9(::UnityEngine::Rendering::Universal::ScreenEffects* screeneffects)
		{
			return ((::BPLOHOFBFEA*(*)(::UnityEngine::Rendering::Universal::ScreenEffects*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_SCREENEFFECTS_3_9_OFFSET))(screeneffects);
		}

		static ::GPEIDCEJLIJ* _CopyVolumeToConfig_g__CopyVolumeToConfig_Lighting_3_10(::UnityEngine::Rendering::Universal::Lighting* lighting)
		{
			return ((::GPEIDCEJLIJ*(*)(::UnityEngine::Rendering::Universal::Lighting*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_LIGHTING_3_10_OFFSET))(lighting);
		}

		static ::GEPBIHFALML* _CopyVolumeToConfig_g__CopyVolumeToConfig_ColorAdjustments_3_11(::UnityEngine::Rendering::Universal::ColorAdjustments* color)
		{
			return ((::GEPBIHFALML*(*)(::UnityEngine::Rendering::Universal::ColorAdjustments*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_COLORADJUSTMENTS_3_11_OFFSET))(color);
		}

		static ::OEFHMBHANLP* _CopyVolumeToConfig_g__CopyVolumeToConfig_GaussianBlur_3_12(::UnityEngine::Rendering::Universal::GaussianBlur* gaussian)
		{
			return ((::OEFHMBHANLP*(*)(::UnityEngine::Rendering::Universal::GaussianBlur*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ATMOSPHEREDATA__COPYVOLUMETOCONFIG_G__COPYVOLUMETOCONFIG_GAUSSIANBLUR_3_12_OFFSET))(gaussian);
		}
	};
}
