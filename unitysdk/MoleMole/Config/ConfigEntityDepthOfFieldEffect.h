#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofBlurQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"

namespace MoleMole::Config { class ScreenEffectBool; }
namespace MoleMole::Config { class ScreenEffectFloat; }

#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETAPERTURE_OFFSET UNITYSDK_OFFSET(0x1640CC70)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECOUNT_OFFSET UNITYSDK_OFFSET(0x1640CCF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECURVATURE_OFFSET UNITYSDK_OFFSET(0x1640CD70)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADEROTATION_OFFSET UNITYSDK_OFFSET(0x1640CDF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLURQUALITY_OFFSET UNITYSDK_OFFSET(0x1640CF70)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETDEBUGMODE_OFFSET UNITYSDK_OFFSET(0x1640C910)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETDISCARDNEARCOC_OFFSET UNITYSDK_OFFSET(0x1640CE70)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCALLENGTH_OFFSET UNITYSDK_OFFSET(0x1640CBF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCUSDISTANCE_OFFSET UNITYSDK_OFFSET(0x1640CB70)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFORCENODEFAULTDOF_OFFSET UNITYSDK_OFFSET(0x1640CEF0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANEND_OFFSET UNITYSDK_OFFSET(0x1640CA00)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANMAXRADIUS_OFFSET UNITYSDK_OFFSET(0x1640CA80)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANSTART_OFFSET UNITYSDK_OFFSET(0x1640C980)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETHIGHQUALITYSAMPLING_OFFSET UNITYSDK_OFFSET(0x1640CB00)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETMODE_OFFSET UNITYSDK_OFFSET(0x1640C8A0)
#define MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1640CFE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityDepthOfFieldEffect_TypeDefinitionIndex = 88284;

	class ConfigEntityDepthOfFieldEffect : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::MoleMole::Config::ScreenEffectFloat* focalLength; // 0x40
		::MoleMole::Config::ScreenEffectFloat* gaussianEnd; // 0x48
		::MoleMole::Config::ScreenEffectBool* discardNearCoc; // 0x50
		::MoleMole::Config::ScreenEffectFloat* gaussianStart; // 0x58
		::MoleMole::Config::ScreenEffectFloat* bladeRotation; // 0x60
		::MoleMole::Config::ScreenEffectFloat* focusDistance; // 0x68
		::MoleMole::Config::ScreenEffectBool* forceNoDefaultDof; // 0x70
		::MoleMole::Config::ScreenEffectFloat* bladeCount; // 0x78
		::MoleMole::Config::ScreenEffectFloat* aperture; // 0x80
		::MoleMole::Config::ScreenEffectFloat* bladeCurvature; // 0x88
		::MoleMole::Config::ScreenEffectFloat* gaussianMaxRadius; // 0x90
		::MoleMole::Config::ScreenEffectFieldHandleType debugModeHandleType; // 0x98
		::MoleMole::Config::ScreenEffectFieldHandleType focalLengthHandleType; // 0x9C
		::MoleMole::Config::ScreenEffectFieldHandleType bladeRotationHandleType; // 0xA0
		::MoleMole::Config::ScreenEffectFieldHandleType gaussianStartHandleType; // 0xA4
		::System::Boolean highQualitySampling; // 0xA8
		::System::Byte _padding0[0x3];
		::UnityEngine::Rendering::Universal::DofBlurQuality blurQuality; // 0xAC
		::MoleMole::Config::ScreenEffectFieldHandleType apertureHandleType; // 0xB0
		::MoleMole::Config::ScreenEffectFieldHandleType modeHandleType; // 0xB4
		::MoleMole::Config::ScreenEffectFieldHandleType gaussianMaxRadiusHandleType; // 0xB8
		::MoleMole::Config::ScreenEffectFieldHandleType focusDistanceHandleType; // 0xBC
		::MoleMole::Config::ScreenEffectFieldHandleType gaussianEndHandleType; // 0xC0
		::MoleMole::Config::ScreenEffectFieldHandleType bladeCountHandleType; // 0xC4
		::MoleMole::Config::ScreenEffectFieldHandleType highQualitySamplingHandleType; // 0xC8
		::UnityEngine::Rendering::Universal::DepthOfFieldMode mode; // 0xCC
		::MoleMole::Config::ScreenEffectFieldHandleType blurQualityHandleType; // 0xD0
		::MoleMole::Config::ScreenEffectFieldHandleType bladeCurvatureHandleType; // 0xD4
		::UnityEngine::Rendering::Universal::DofDebugMode debugMode; // 0xD8
		::MoleMole::Config::ScreenEffectFieldHandleType discardNearCocHandleType; // 0xDC
		::MoleMole::Config::ScreenEffectFieldHandleType forceNoDefaultDofHandleType; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::DepthOfFieldMode GetMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::DepthOfFieldMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::DofDebugMode GetDebugMode(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::DofDebugMode(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETDEBUGMODE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGaussianStart(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANSTART_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGaussianEnd(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANEND_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetGaussianMaxRadius(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETGAUSSIANMAXRADIUS_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetHighQualitySampling(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETHIGHQUALITYSAMPLING_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFocusDistance(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCUSDISTANCE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetFocalLength(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFOCALLENGTH_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetAperture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETAPERTURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Int32 GetBladeCount(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECOUNT_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBladeCurvature(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADECURVATURE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetBladeRotation(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLADEROTATION_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetDiscardNearCoc(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETDISCARDNEARCOC_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Boolean GetForceNoDefaultDof(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETFORCENODEFAULTDOF_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Rendering::Universal::DofBlurQuality GetBlurQuality(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::DofBlurQuality(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYDEPTHOFFIELDEFFECT_GETBLURQUALITY_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
