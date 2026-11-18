#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxMaskLutMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_FxScreenLightMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FXColorCorrection_SaturationLutMaskMode.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectColor; }
namespace MoleMole::Config { class ScreenEffectFloat; }
namespace MoleMole::Config { class ScreenEffectVector2; }
namespace MoleMole::Config { class ScreenEffectVector3; }
namespace MoleMole::Config { class ScreenEffectVector4; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class WeatherConfigScriptableObject; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAPPLYSATURATIONLUTTOUBERPOST_OFFSET UNITYSDK_OFFSET(0x16535CA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETBLACKCANVASKEEPWEATHERVALID_OFFSET UNITYSDK_OFFSET(0x16537910)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPALPHA_OFFSET UNITYSDK_OFFSET(0x165350F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPDISTANCE_OFFSET UNITYSDK_OFFSET(0x16534FD0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPEXTENSION_OFFSET UNITYSDK_OFFSET(0x16535050)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPFXEXTRAEXTENSION_OFFSET UNITYSDK_OFFSET(0x16537680)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCLIPPLANEFORLUT_OFFSET UNITYSDK_OFFSET(0x16537B00)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCLIPPLANELUTEXPOSUREMULTI_OFFSET UNITYSDK_OFFSET(0x16537BA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCONTRAST_OFFSET UNITYSDK_OFFSET(0x16536010)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDESATURATE_OFFSET UNITYSDK_OFFSET(0x16536490)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLECAMERACLIP_OFFSET UNITYSDK_OFFSET(0x16534F60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELIGHTSHAFT_OFFSET UNITYSDK_OFFSET(0x16536B10)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELOCALLIGHTCONTROL_OFFSET UNITYSDK_OFFSET(0x16537720)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFORCEUSEMSAA_OFFSET UNITYSDK_OFFSET(0x16535F10)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXCOLORSATURATION_OFFSET UNITYSDK_OFFSET(0x16536890)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFOGMASKPASSON_OFFSET UNITYSDK_OFFSET(0x16536810)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFXSCREENLIGHTMODE_OFFSET UNITYSDK_OFFSET(0x165352E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXLIGHTSHAFTMASKON_OFFSET UNITYSDK_OFFSET(0x16535260)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTCOLOR_OFFSET UNITYSDK_OFFSET(0x16535350)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTMASKON_OFFSET UNITYSDK_OFFSET(0x165353F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGAMMA_OFFSET UNITYSDK_OFFSET(0x16536110)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGROUNDCOLOR_OFFSET UNITYSDK_OFFSET(0x165371F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINDIRECTSPECULARINTENSITY_OFFSET UNITYSDK_OFFSET(0x16536A90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINVERT_OFFSET UNITYSDK_OFFSET(0x16536510)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETJUSTCONTROLPARTICLELIGHT_OFFSET UNITYSDK_OFFSET(0x16536910)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTBLUR_OFFSET UNITYSDK_OFFSET(0x16536EB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLORCLAMP_OFFSET UNITYSDK_OFFSET(0x16536C90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLOR_OFFSET UNITYSDK_OFFSET(0x16536D10)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCUSTOMCENTER_OFFSET UNITYSDK_OFFSET(0x16536FB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTFADELENGTH_OFFSET UNITYSDK_OFFSET(0x16536E30)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTIGNORESCENEDEPTHMASK_OFFSET UNITYSDK_OFFSET(0x16537600)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTINTENSITY_OFFSET UNITYSDK_OFFSET(0x16536C10)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTLENGTH_OFFSET UNITYSDK_OFFSET(0x16536DB0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x16536B90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTUSECUSTOMCENTER_OFFSET UNITYSDK_OFFSET(0x16536F30)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALFOGINTENSITY_OFFSET UNITYSDK_OFFSET(0x16537820)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTINTENSITYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x165377A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTMULTIPLYINTENSITY_OFFSET UNITYSDK_OFFSET(0x16536990)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTTHREADHOLD_OFFSET UNITYSDK_OFFSET(0x16536A10)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTINVERT_OFFSET UNITYSDK_OFFSET(0x16536190)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x16536390)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTSOFTNESS_OFFSET UNITYSDK_OFFSET(0x16536410)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEA_OFFSET UNITYSDK_OFFSET(0x16536290)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEB_OFFSET UNITYSDK_OFFSET(0x16536310)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONECOLORS_OFFSET UNITYSDK_OFFSET(0x16536210)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKCONTRIBUTION_OFFSET UNITYSDK_OFFSET(0x16537580)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKMODE_OFFSET UNITYSDK_OFFSET(0x16537A90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKTEX_OFFSET UNITYSDK_OFFSET(0x16537510)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLECOLOR_OFFSET UNITYSDK_OFFSET(0x16537150)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLEPOINT_OFFSET UNITYSDK_OFFSET(0x16536710)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETOVERRIDEWEATHERGICONFIG_OFFSET UNITYSDK_OFFSET(0x16537030)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET UNITYSDK_OFFSET(0x16535F90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSATURATIONLUTMASKMODE_OFFSET UNITYSDK_OFFSET(0x165378A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSATURATION_OFFSET UNITYSDK_OFFSET(0x16536090)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEFFECTINTENSITY_OFFSET UNITYSDK_OFFSET(0x16535470)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEMISSIONCOLOR_OFFSET UNITYSDK_OFFSET(0x16535E00)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSGBUFFERSATURATION_OFFSET UNITYSDK_OFFSET(0x16535570)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSIGNORERIDUS_OFFSET UNITYSDK_OFFSET(0x16535D20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSOVERRIDEWEATHERGBUFFERSATURATION_OFFSET UNITYSDK_OFFSET(0x165354F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSRADIUSALPHAPOW_OFFSET UNITYSDK_OFFSET(0x16535D90)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x16535870)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP2_OFFSET UNITYSDK_OFFSET(0x16535A20)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP3_OFFSET UNITYSDK_OFFSET(0x16535B60)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP_OFFSET UNITYSDK_OFFSET(0x165358E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE2_OFFSET UNITYSDK_OFFSET(0x16535AC0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE3_OFFSET UNITYSDK_OFFSET(0x16535C00)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE_OFFSET UNITYSDK_OFFSET(0x16535980)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSUSESATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x165355F0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALSKYSATURATION_OFFSET UNITYSDK_OFFSET(0x16535EA0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYCOLOR_OFFSET UNITYSDK_OFFSET(0x165370B0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSOFTNESS_OFFSET UNITYSDK_OFFSET(0x16536790)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEA_OFFSET UNITYSDK_OFFSET(0x16536610)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEB_OFFSET UNITYSDK_OFFSET(0x16536690)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLORINTENSITY_OFFSET UNITYSDK_OFFSET(0x16537A10)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLOROFFSET_OFFSET UNITYSDK_OFFSET(0x16537990)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLORS_OFFSET UNITYSDK_OFFSET(0x16536590)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETUSELUTWITHMASK_OFFSET UNITYSDK_OFFSET(0x16537290)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIGWEIGHT_OFFSET UNITYSDK_OFFSET(0x165351E0)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIG_OFFSET UNITYSDK_OFFSET(0x16535170)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GET_LUTWITHMASKTEX_OFFSET UNITYSDK_OFFSET(0x16537310)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GET_SCENESPECIALPPSSATURATIONLUT_OFFSET UNITYSDK_OFFSET(0x16535670)
#define MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16537C20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFXColorCorrection_TypeDefinitionIndex = 88279;

	class ConfigEntityFXColorCorrection : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* lightShaftIntensity; // 0x40
		::MoleMole::Config::ScreenEffectFloat* sceneSpecialPPSEffectIntensity; // 0x48
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap; // 0x50
		::MoleMole::Config::ScreenEffectFloat* middlePoint; // 0x58
		::MoleMole::Config::ScreenEffectColor* sceneSpecialPPSEmissionColor; // 0x60
		::MoleMole::Config::ScreenEffectFloat* saturation; // 0x68
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap2; // 0x70
		::MoleMole::Config::ScreenEffectFloat* clipPlaneLutExposureMulti; // 0x78
		::MoleMole::Config::ScreenEffectFloat* lightShaftThreshold; // 0x80
		::MoleMole::Config::ScreenEffectBool* enableLocalLightControl; // 0x88
		::MoleMole::Config::ScreenEffectVector4* clipPlaneForLut; // 0x90
		::MoleMole::Config::ScreenEffectBool* fxScreenLightMaskOn; // 0x98
		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* weatherConfig; // 0xA0
		::MoleMole::Config::ScreenEffectFloat* lightShaftLength; // 0xA8
		::MoleMole::Config::ScreenEffectBool* blackCanvasKeepWeatherValid; // 0xB0
		::MoleMole::Config::ScreenEffectVector3* cameraClipFxExtraExtension; // 0xB8
		::MoleMole::Config::ScreenEffectFloat* sceneSpecialPPSGBufferSaturation; // 0xC0
		::MoleMole::Config::ScreenEffectBool* fxLightShaftMaskOn; // 0xC8
		::MoleMole::Config::ScreenEffectBool* enableLightShaft; // 0xD0
		::UnityEngine::Texture2D* _lutWithMaskTex; // 0xD8
		::MoleMole::Config::ScreenEffectBool* lightShaftIgnoreSceneDepthMask; // 0xE0
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue3; // 0xE8
		::MoleMole::Config::ScreenEffectFloat* postExposure; // 0xF0
		::MoleMole::Config::ScreenEffectBool* lightShaftUseCustomCenter; // 0xF8
		::MoleMole::Config::ScreenEffectFloat* gamma; // 0x100
		::MoleMole::Config::ScreenEffectBool* lutToneColors; // 0x108
		::MoleMole::Config::ScreenEffectFloat* indirectSpecularIntensity; // 0x110
		::MoleMole::Config::ScreenEffectColor* middleColor; // 0x118
		::MoleMole::Config::ScreenEffectColor* fxScreenLightColor; // 0x120
		::MoleMole::Config::ScreenEffectBool* lightShaftBlur; // 0x128
		::MoleMole::Config::ScreenEffectFloat* lutSoftness; // 0x130
		::MoleMole::Config::ScreenEffectBool* overrideWeatherGIConfig; // 0x138
		::MoleMole::Config::ScreenEffectFloat* contrast; // 0x140
		::MoleMole::Config::ScreenEffectBool* sceneSpecialPPSUseSaturationLut; // 0x148
		::MoleMole::Config::ScreenEffectFloat* desaturate; // 0x150
		::MoleMole::Config::ScreenEffectFloat* cameraClipAlpha; // 0x158
		::MoleMole::Config::ScreenEffectFloat* localLightMultiplyIntensity; // 0x160
		::MoleMole::Config::ScreenEffectBool* ForceUseMsaa; // 0x168
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampGap3; // 0x170
		::MoleMole::Config::ScreenEffectFloat* localLightIntensityMultiplier; // 0x178
		::MoleMole::Config::ScreenEffectFloat* weatherConfigWeight; // 0x180
		::MoleMole::Config::ScreenEffectFloat* localFogIntensity; // 0x188
		::MoleMole::Config::ScreenEffectBool* justControlParticleLight; // 0x190
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue; // 0x198
		::MoleMole::Config::ScreenEffectColor* lightShaftColor; // 0x1A0
		::System::String* lutWithMaskTexPath; // 0x1A8
		::MoleMole::Config::ScreenEffectFloat* lutWithMaskContribution; // 0x1B0
		::MoleMole::Config::ScreenEffectColor* skyColor; // 0x1B8
		::MoleMole::Config::ScreenEffectBool* lightShaftColorClamp; // 0x1C0
		::MoleMole::Config::ScreenEffectBool* invert; // 0x1C8
		::MoleMole::Config::ScreenEffectVector3* cameraClipExtension; // 0x1D0
		::MoleMole::Config::ScreenEffectColor* groundColor; // 0x1D8
		::MoleMole::Config::ScreenEffectBool* sceneSpecialPPSOverrideWeatherGBufferSaturation; // 0x1E0
		::MoleMole::Config::ScreenEffectFloat* softness; // 0x1E8
		::MoleMole::Config::ScreenEffectBool* fxFogMaskPassOn; // 0x1F0
		::MoleMole::Config::ScreenEffectFloat* toneColorOffset; // 0x1F8
		::MoleMole::Config::ScreenEffectVector4* sceneSpecialPPSSaturationRampValue2; // 0x200
		::MoleMole::Config::ScreenEffectFloat* localLightThreadHold; // 0x208
		::MoleMole::Config::ScreenEffectVector2* lightShaftCustomCenter; // 0x210
		::MoleMole::Config::ScreenEffectBool* applySaturationLutToUberPost; // 0x218
		::UnityEngine::Texture2D* _sceneSpecialPPSSaturationLut; // 0x220
		::MoleMole::Config::ScreenEffectFloat* fxColorSaturation; // 0x228
		::MoleMole::Config::ScreenEffectBool* lutInvert; // 0x230
		::MoleMole::Config::ScreenEffectFloat* lutMiddlePoint; // 0x238
		::MoleMole::Config::ScreenEffectFloat* lightShaftFadeLength; // 0x240
		::MoleMole::Config::ScreenEffectFloat* cameraClipDistance; // 0x248
		::MoleMole::Config::ScreenEffectBool* toneColors; // 0x250
		::System::String* sceneSpecialPPSSaturationLutPath; // 0x258
		::MoleMole::Config::ScreenEffectFloat* toneColorIntensity; // 0x260
		::MoleMole::Config::ScreenEffectBool* useLutWithMask; // 0x268
		::UnityEngine::Color lutToneA; // 0x270
		::MoleMole::Config::ScreenEffectFieldHandleType lutWithMaskTexHandleType; // 0x280
		::System::Single sceneSpecialPPSIgnoreRidus; // 0x284
		::UnityEngine::Color toneA; // 0x288
		::MoleMole::Config::ScreenEffectFieldHandleType saturationHandleType; // 0x298
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationLutHandleType; // 0x29C
		::MoleMole::Config::ScreenEffectFieldHandleType clipPlaneForLutHandleType; // 0x2A0
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipFxExtraExtensionHandleType; // 0x2A4
		::UnityEngine::Color toneB; // 0x2A8
		::MoleMole::Config::ScreenEffectFieldHandleType blackCanvasKeepWeatherValidHandleType; // 0x2B8
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftLengthHandleType; // 0x2BC
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValue2HandleType; // 0x2C0
		::MoleMole::Config::ScreenEffectFieldHandleType fxFxScreenLightModeHandleType; // 0x2C4
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftThresholdHandleType; // 0x2C8
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftColorHandleType; // 0x2CC
		::MoleMole::Config::ScreenEffectFieldHandleType saturationLutMaskModeHandleType; // 0x2D0
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftColorClampHandleType; // 0x2D4
		::System::Single sceneSpecialPPSRadiusAlphaPow; // 0x2D8
		::MoleMole::Config::ScreenEffectFieldHandleType toneBHandleType; // 0x2DC
		::MoleMole::Config::ScreenEffectFieldHandleType ForceUseMsaaHandleType; // 0x2E0
		::MoleMole::Config::ScreenEffectFieldHandleType enableCameraClipHandleType; // 0x2E4
		::MoleMole::Config::ScreenEffectFieldHandleType fxScreenLightColorHandleType; // 0x2E8
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftCustomCenterHandleType; // 0x2EC
		::MoleMole::Config::ScreenEffectFieldHandleType softnessHandleType; // 0x2F0
		::MoleMole::Config::ScreenEffectFieldHandleType groundColorHandleType; // 0x2F4
		::MoleMole::Config::ScreenEffectFieldHandleType middleColorHandleType; // 0x2F8
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipExtensionHandleType; // 0x2FC
		::MoleMole::Config::ScreenEffectFieldHandleType overrideWeatherGIConfigHandleType; // 0x300
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSEffectIntensityHandleType; // 0x304
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSIgnoreRidusHandleType; // 0x308
		::MoleMole::Config::ScreenEffectFieldHandleType localLightMultiplyIntensityHandleType; // 0x30C
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftFadeLengthHandleType; // 0x310
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialSkySaturationHandleType; // 0x314
		::MoleMole::Config::ScreenEffectFieldHandleType middlePointHandleType; // 0x318
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipDistanceHandleType; // 0x31C
		::MoleMole::Config::ScreenEffectFieldHandleType indirectSpecularIntensityHandleType; // 0x320
		::MoleMole::Config::ScreenEffectFieldHandleType invertHandleType; // 0x324
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftIgnoreSceneDepthMaskHandleType; // 0x328
		::MoleMole::Config::ScreenEffectFieldHandleType enableLightShaftHandleType; // 0x32C
		::MoleMole::Config::ScreenEffectFieldHandleType lutSoftnessHandleType; // 0x330
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneAHandleType; // 0x334
		::UnityEngine::Color lutToneB; // 0x338
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftUseCustomCenterHandleType; // 0x348
		::MoleMole::Config::ScreenEffectFieldHandleType justControlParticleLightHandleType; // 0x34C
		::MoleMole::Config::ScreenEffectFieldHandleType clipPlaneLutExposureMultiHandleType; // 0x350
		::System::Single sceneSpecialSkySaturation; // 0x354
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValue3HandleType; // 0x358
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSUseSaturationLutHandleType; // 0x35C
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGapHandleType; // 0x360
		::MoleMole::Config::ScreenEffectFieldHandleType applySaturationLutToUberPostHandleType; // 0x364
		::System::Boolean enableCameraClip; // 0x368
		::System::Byte _padding0[0x3];
		::MoleMole::Config::ScreenEffectFieldHandleType fxFogMaskPassOnHandleType; // 0x36C
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSRadiusAlphaPowHandleType; // 0x370
		::MoleMole::Config::ScreenEffectFieldHandleType localLightThreadHoldHandleType; // 0x374
		::MoleMole::Config::ScreenEffectFieldHandleType lutInvertHandleType; // 0x378
		::MoleMole::Config::ScreenEffectFieldHandleType weatherConfigHandleType; // 0x37C
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSEmissionColorHandleType; // 0x380
		::MoleMole::Config::ScreenEffectFieldHandleType lutWithMaskContributionHandleType; // 0x384
		::MoleMole::Config::ScreenEffectFieldHandleType skyColorHandleType; // 0x388
		::MoleMole::Config::ScreenEffectFieldHandleType desaturateHandleType; // 0x38C
		::UnityEngine::Rendering::Universal::FXColorCorrection_SaturationLutMaskMode saturationLutMaskMode; // 0x390
		::MoleMole::Config::ScreenEffectFieldHandleType toneAHandleType; // 0x394
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode fxFxScreenLightMode; // 0x398
		::MoleMole::Config::ScreenEffectFieldHandleType fxScreenLightMaskOnHandleType; // 0x39C
		::MoleMole::Config::ScreenEffectFieldHandleType cameraClipAlphaHandleType; // 0x3A0
		::MoleMole::Config::ScreenEffectFieldHandleType contrastHandleType; // 0x3A4
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSGBufferSaturationHandleType; // 0x3A8
		::UnityEngine::Rendering::Universal::FXColorCorrection_FxMaskLutMode lutWithMaskMode; // 0x3AC
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneBHandleType; // 0x3B0
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampValueHandleType; // 0x3B4
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGap3HandleType; // 0x3B8
		::MoleMole::Config::ScreenEffectFieldHandleType lutToneColorsHandleType; // 0x3BC
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftIntensityHandleType; // 0x3C0
		::MoleMole::Config::ScreenEffectFieldHandleType toneColorOffsetHandleType; // 0x3C4
		::MoleMole::Config::ScreenEffectFieldHandleType useLutWithMaskHandleType; // 0x3C8
		::MoleMole::Config::ScreenEffectFieldHandleType toneColorsHandleType; // 0x3CC
		::MoleMole::Config::ScreenEffectFieldHandleType lutMiddlePointHandleType; // 0x3D0
		::MoleMole::Config::ScreenEffectFieldHandleType weatherConfigWeightHandleType; // 0x3D4
		::MoleMole::Config::ScreenEffectFieldHandleType fxColorSaturationHandleType; // 0x3D8
		::MoleMole::Config::ScreenEffectFieldHandleType postExposureHandleType; // 0x3DC
		::MoleMole::Config::ScreenEffectFieldHandleType gammaHandleType; // 0x3E0
		::MoleMole::Config::ScreenEffectFieldHandleType lutWithMaskModeHandleType; // 0x3E4
		::MoleMole::Config::ScreenEffectFieldHandleType localFogIntensityHandleType; // 0x3E8
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSOverrideWeatherGBufferSaturationHandleType; // 0x3EC
		::MoleMole::Config::ScreenEffectFieldHandleType sceneSpecialPPSSaturationRampGap2HandleType; // 0x3F0
		::MoleMole::Config::ScreenEffectFieldHandleType enableLocalLightControlHandleType; // 0x3F4
		::MoleMole::Config::ScreenEffectFieldHandleType toneColorIntensityHandleType; // 0x3F8
		::MoleMole::Config::ScreenEffectFieldHandleType fxLightShaftMaskOnHandleType; // 0x3FC
		::MoleMole::Config::ScreenEffectFieldHandleType localLightIntensityMultiplierHandleType; // 0x400
		::MoleMole::Config::ScreenEffectFieldHandleType lightShaftBlurHandleType; // 0x404

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::System::Boolean GetEnableCameraClip(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLECAMERACLIP_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCameraClipDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetCameraClipExtension(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPEXTENSION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetCameraClipAlpha(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPALPHA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject* GetWeatherConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::WeatherConfigScriptableObject*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIG_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetWeatherConfigWeight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETWEATHERCONFIGWEIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxLightShaftMaskOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXLIGHTSHAFTMASKON_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode GetFxFxScreenLightMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::FXColorCorrection_FxScreenLightMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFXSCREENLIGHTMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetFxScreenLightColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxScreenLightMaskOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXSCREENLIGHTMASKON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialPPSEffectIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEFFECTINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetSceneSpecialPPSOverrideWeatherGBufferSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSOVERRIDEWEATHERGBUFFERSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialPPSGBufferSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSGBUFFERSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetSceneSpecialPPSUseSaturationLut(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSUSESATURATIONLUT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_sceneSpecialPPSSaturationLut()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GET_SCENESPECIALPPSSATURATIONLUT_OFFSET))(this);
		}

		::UnityEngine::Texture* GetSceneSpecialPPSSaturationLut(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONLUT_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampGap(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampValue(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampGap2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampValue2(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE2_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampGap3(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPGAP3_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetSceneSpecialPPSSaturationRampValue3(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSSATURATIONRAMPVALUE3_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetApplySaturationLutToUberPost(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETAPPLYSATURATIONLUTTOUBERPOST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialPPSIgnoreRidus(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSIGNORERIDUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialPPSRadiusAlphaPow(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSRADIUSALPHAPOW_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSceneSpecialPPSEmissionColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALPPSEMISSIONCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSceneSpecialSkySaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSCENESPECIALSKYSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetForceUseMsaa(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFORCEUSEMSAA_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetPostExposure(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETPOSTEXPOSURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetContrast(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCONTRAST_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGamma(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGAMMA_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLutInvert(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTINVERT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLutToneColors(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONECOLORS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLutToneA(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLutToneB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTTONEB_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLutMiddlePoint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTMIDDLEPOINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLutSoftness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTSOFTNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetDesaturate(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETDESATURATE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetInvert(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINVERT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetToneColors(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLORS_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetToneA(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEA_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetToneB(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONEB_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetMiddlePoint(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLEPOINT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetSoftness(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSOFTNESS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetFxFogMaskPassOn(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXFOGMASKPASSON_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFxColorSaturation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETFXCOLORSATURATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetJustControlParticleLight(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETJUSTCONTROLPARTICLELIGHT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalLightMultiplyIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTMULTIPLYINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalLightThreadHold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTTHREADHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIndirectSpecularIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETINDIRECTSPECULARINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnableLightShaft(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELIGHTSHAFT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftThreshold(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTTHRESHOLD_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLightShaftColorClamp(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLORCLAMP_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetLightShaftColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTLENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLightShaftFadeLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTFADELENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLightShaftBlur(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTBLUR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLightShaftUseCustomCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTUSECUSTOMCENTER_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector2 GetLightShaftCustomCenter(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTCUSTOMCENTER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetOverrideWeatherGIConfig(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETOVERRIDEWEATHERGICONFIG_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetSkyColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSKYCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetMiddleColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETMIDDLECOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Color GetGroundColor(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Color(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETGROUNDCOLOR_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetUseLutWithMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETUSELUTWITHMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_lutWithMaskTex()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GET_LUTWITHMASKTEX_OFFSET))(this);
		}

		::UnityEngine::Texture* GetLutWithMaskTex(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKTEX_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLutWithMaskContribution(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKCONTRIBUTION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetLightShaftIgnoreSceneDepthMask(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLIGHTSHAFTIGNORESCENEDEPTHMASK_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector3 GetCameraClipFxExtraExtension(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCAMERACLIPFXEXTRAEXTENSION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetEnableLocalLightControl(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETENABLELOCALLIGHTCONTROL_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalLightIntensityMultiplier(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALLIGHTINTENSITYMULTIPLIER_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetLocalFogIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLOCALFOGINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::FXColorCorrection_SaturationLutMaskMode GetSaturationLutMaskMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::FXColorCorrection_SaturationLutMaskMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETSATURATIONLUTMASKMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetBlackCanvasKeepWeatherValid(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETBLACKCANVASKEEPWEATHERVALID_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetToneColorOffset(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLOROFFSET_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetToneColorIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETTONECOLORINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::FXColorCorrection_FxMaskLutMode GetLutWithMaskMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::FXColorCorrection_FxMaskLutMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETLUTWITHMASKMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Vector4 GetClipPlaneForLut(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCLIPPLANEFORLUT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetClipPlaneLutExposureMulti(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFXCOLORCORRECTION_GETCLIPPLANELUTEXPOSUREMULTI_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
