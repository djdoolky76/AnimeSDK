#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/ScreenSpaceAmbientOcclusionBehaviour_MAEBELENIGH.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceAmbientOcclusion; }

#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_ALPDDDPMDFH_OFFSET UNITYSDK_OFFSET(0x1A0B1E30)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A0B1A50)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A0B4680)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1A0B46B0)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1A0B23C0)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1A0B4690)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0B2220)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A0B46A0)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A0B3D40)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0B4000)
#define MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B4610)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ScreenSpaceAmbientOcclusionBehaviour_TypeDefinitionIndex = 64426;

	class ScreenSpaceAmbientOcclusionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ScreenSpaceAmbientOcclusionBehaviour_MAEBELENIGH _methodParm; // 0x18
		::System::Boolean enabled; // 0x7C
		::System::Boolean active_Intensity; // 0x7D
		::System::Boolean use_Intensity; // 0x7E
		::System::Byte _padding0[0x1];
		::System::Single Intensity; // 0x80
		::System::Boolean active_DirectLightingStrength; // 0x84
		::System::Boolean use_DirectLightingStrength; // 0x85
		::System::Byte _padding1[0x2];
		::System::Single DirectLightingStrength; // 0x88
		::System::Boolean active_Radius; // 0x8C
		::System::Boolean use_Radius; // 0x8D
		::System::Byte _padding2[0x2];
		::System::Single Radius; // 0x90
		::System::Boolean active_FullResolution; // 0x94
		::System::Boolean use_FullResolution; // 0x95
		::System::Boolean FullResolution; // 0x96
		::System::Boolean active_TemporalAccumulation; // 0x97
		::System::Boolean use_TemporalAccumulation; // 0x98
		::System::Boolean TemporalAccumulation; // 0x99
		::System::Boolean active_GhostingReduction; // 0x9A
		::System::Boolean use_GhostingReduction; // 0x9B
		::System::Single GhostingReduction; // 0x9C
		::System::Boolean active_BlurSharpness; // 0xA0
		::System::Boolean use_BlurSharpness; // 0xA1
		::System::Byte _padding3[0x2];
		::System::Single BlurSharpness; // 0xA4
		::System::Boolean active_SampleCount; // 0xA8
		::System::Boolean use_SampleCount; // 0xA9
		::System::Byte _padding4[0x2];
		::System::Int32 SampleCount; // 0xAC
		::System::Boolean active_Denoise; // 0xB0
		::System::Boolean use_Denoise; // 0xB1
		::System::Boolean Denoise; // 0xB2
		::System::Boolean active_DenoiserRadius; // 0xB3
		::System::Boolean use_DenoiserRadius; // 0xB4
		::System::Byte _padding5[0x3];
		::System::Single DenoiserRadius; // 0xB8
		::System::Boolean active_StepCount; // 0xBC
		::System::Boolean use_StepCount; // 0xBD
		::System::Byte _padding6[0x2];
		::System::Int32 StepCount; // 0xC0
		::System::Boolean active_BilateralUpsample; // 0xC4
		::System::Boolean use_BilateralUpsample; // 0xC5
		::System::Boolean BilateralUpsample; // 0xC6
		::System::Boolean active_MaximumRadiusInPixels; // 0xC7
		::System::Boolean use_MaximumRadiusInPixels; // 0xC8
		::System::Byte _padding7[0x3];
		::System::Int32 MaximumRadiusInPixels; // 0xCC
		::System::Boolean active_DirectionCount; // 0xD0
		::System::Boolean use_DirectionCount; // 0xD1
		::System::Byte _padding8[0x2];
		::System::Int32 DirectionCount; // 0xD4
		::System::Boolean active_DebugMode; // 0xD8
		::System::Boolean use_DebugMode; // 0xD9
		::System::Boolean DebugMode; // 0xDA
		::System::Byte _padding9[0x5];
		::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion* _ScreenSpaceAmbientOcclusion; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion* ALPDDDPMDFH(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusion*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_ALPDDDPMDFH_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEAMBIENTOCCLUSIONBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
