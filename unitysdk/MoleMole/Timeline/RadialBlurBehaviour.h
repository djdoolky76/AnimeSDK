#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/RadialBlurBehaviour_AOGHDHHMFBH.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A0FA300)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_FOGGKGBFGLA_OFFSET UNITYSDK_OFFSET(0x1A0FA790)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A0FD440)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1A0FD430)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1A0FAD90)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1A0FD450)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0FAB80)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A0FD460)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A0FC920)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0FCC40)
#define MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0FD360)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RadialBlurBehaviour_TypeDefinitionIndex = 84027;

	class RadialBlurBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::RadialBlurBehaviour_AOGHDHHMFBH _methodParm; // 0x18
		::System::Boolean enabled; // 0xA0
		::System::Boolean active_downSample; // 0xA1
		::System::Boolean use_downSample; // 0xA2
		::System::Byte _padding0[0x1];
		::UnityEngine::Rendering::Universal::DownSampleLevel downSample; // 0xA4
		::System::Boolean active_sampleDistanceMode; // 0xA8
		::System::Boolean use_sampleDistanceMode; // 0xA9
		::System::Byte _padding1[0x2];
		::UnityEngine::Rendering::Universal::SampleDistanceMode sampleDistanceMode; // 0xAC
		::System::Boolean active_sampleCount; // 0xB0
		::System::Boolean use_sampleCount; // 0xB1
		::System::Byte _padding2[0x2];
		::System::Int32 sampleCount; // 0xB4
		::System::Boolean active_radius; // 0xB8
		::System::Boolean use_radius; // 0xB9
		::System::Byte _padding3[0x2];
		::System::Single radius; // 0xBC
		::System::Boolean active_centerPosition; // 0xC0
		::System::Boolean use_centerPosition; // 0xC1
		::System::Byte _padding4[0x2];
		::UnityEngine::Vector2 centerPosition; // 0xC4
		::System::Boolean active_threshold; // 0xCC
		::System::Boolean use_threshold; // 0xCD
		::System::Byte _padding5[0x2];
		::System::Single threshold; // 0xD0
		::System::Boolean active_useCircleRange; // 0xD4
		::System::Boolean use_useCircleRange; // 0xD5
		::System::Boolean useCircleRange; // 0xD6
		::System::Boolean active_circleRange; // 0xD7
		::System::Boolean use_circleRange; // 0xD8
		::System::Byte _padding6[0x3];
		::UnityEngine::Vector2 circleRange; // 0xDC
		::System::Boolean active_useBloomMode; // 0xE4
		::System::Boolean use_useBloomMode; // 0xE5
		::System::Boolean useBloomMode; // 0xE6
		::System::Boolean active_glareIntensity; // 0xE7
		::System::Boolean use_glareIntensity; // 0xE8
		::System::Byte _padding7[0x3];
		::System::Single glareIntensity; // 0xEC
		::System::Boolean active_glareThreshold; // 0xF0
		::System::Boolean use_glareThreshold; // 0xF1
		::System::Byte _padding8[0x2];
		::System::Single glareThreshold; // 0xF4
		::System::Boolean active_glareCenterFadeRange; // 0xF8
		::System::Boolean use_glareCenterFadeRange; // 0xF9
		::System::Byte _padding9[0x2];
		::System::Single glareCenterFadeRange; // 0xFC
		::System::Boolean active_glareFadeShapeRatio; // 0x100
		::System::Boolean use_glareFadeShapeRatio; // 0x101
		::System::Byte _padding10[0x2];
		::System::Single glareFadeShapeRatio; // 0x104
		::System::Boolean active_BloomModeRadiusAdd; // 0x108
		::System::Boolean use_BloomModeRadiusAdd; // 0x109
		::System::Byte _padding11[0x2];
		::System::Single BloomModeRadiusAdd; // 0x10C
		::System::Boolean active_BloomModeSampleCountAdd; // 0x110
		::System::Boolean use_BloomModeSampleCountAdd; // 0x111
		::System::Byte _padding12[0x2];
		::System::Int32 BloomModeSampleCountAdd; // 0x114
		::System::Boolean active_noiseScale; // 0x118
		::System::Boolean use_noiseScale; // 0x119
		::System::Byte _padding13[0x2];
		::System::Single noiseScale; // 0x11C
		::System::Boolean active_forceActiveOverlayDistortion; // 0x120
		::System::Boolean use_forceActiveOverlayDistortion; // 0x121
		::System::Boolean forceActiveOverlayDistortion; // 0x122
		::System::Boolean active_canBeDisabledByGlobalConfig; // 0x123
		::System::Boolean use_canBeDisabledByGlobalConfig; // 0x124
		::System::Boolean canBeDisabledByGlobalConfig; // 0x125
		::System::Byte _padding14[0x2];
		::UnityEngine::Rendering::Universal::RadialBlur* _RadialBlur; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::RadialBlur* FOGGKGBFGLA(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::RadialBlur*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_FOGGKGBFGLA_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RADIALBLURBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
