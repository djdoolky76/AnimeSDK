#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FXFogBehaviour_GIPGJELJLAK.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1896B330)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_FHHMGNCKDAI_OFFSET UNITYSDK_OFFSET(0x1896BA20)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x189700E0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x189700D0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1896C0D0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x189700B0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1896BE10)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x189700C0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1896E2D0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1896E6B0)
#define MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1896FF80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXFogBehaviour_TypeDefinitionIndex = 84315;

	class FXFogBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FXFogBehaviour_GIPGJELJLAK _methodParm; // 0x18
		::System::Boolean enabled; // 0xE8
		::System::Boolean active_PPFogEnable; // 0xE9
		::System::Boolean use_PPFogEnable; // 0xEA
		::System::Boolean PPFogEnable; // 0xEB
		::System::Boolean active_PPFogStartDistance; // 0xEC
		::System::Boolean use_PPFogStartDistance; // 0xED
		::System::Byte _padding0[0x2];
		::System::Single PPFogStartDistance; // 0xF0
		::System::Boolean active_PPFogEndDistance; // 0xF4
		::System::Boolean use_PPFogEndDistance; // 0xF5
		::System::Byte _padding1[0x2];
		::System::Single PPFogEndDistance; // 0xF8
		::System::Boolean active_PPFogEnd2Distance; // 0xFC
		::System::Boolean use_PPFogEnd2Distance; // 0xFD
		::System::Byte _padding2[0x2];
		::System::Single PPFogEnd2Distance; // 0x100
		::System::Boolean active_PPFogColor; // 0x104
		::System::Boolean use_PPFogColor; // 0x105
		::System::Byte _padding3[0x2];
		::UnityEngine::Color PPFogColor; // 0x108
		::System::Boolean active_PPFogMaxDensity; // 0x118
		::System::Boolean use_PPFogMaxDensity; // 0x119
		::System::Byte _padding4[0x2];
		::System::Single PPFogMaxDensity; // 0x11C
		::System::Boolean active_fxFogOverrideCustomData; // 0x120
		::System::Boolean use_fxFogOverrideCustomData; // 0x121
		::System::Boolean fxFogOverrideCustomData; // 0x122
		::System::Boolean active_fxFog; // 0x123
		::System::Boolean use_fxFog; // 0x124
		::System::Boolean fxFog; // 0x125
		::System::Boolean active_fxFogStart; // 0x126
		::System::Boolean use_fxFogStart; // 0x127
		::System::Single fxFogStart; // 0x128
		::System::Boolean active_fxFogStartColor; // 0x12C
		::System::Boolean use_fxFogStartColor; // 0x12D
		::System::Byte _padding5[0x2];
		::UnityEngine::Color fxFogStartColor; // 0x130
		::System::Boolean active_fxFogDistance; // 0x140
		::System::Boolean use_fxFogDistance; // 0x141
		::System::Byte _padding6[0x2];
		::System::Single fxFogDistance; // 0x144
		::System::Boolean active_fxFogEndColor; // 0x148
		::System::Boolean use_fxFogEndColor; // 0x149
		::System::Byte _padding7[0x2];
		::UnityEngine::Color fxFogEndColor; // 0x14C
		::System::Boolean active_fxFogDistance2; // 0x15C
		::System::Boolean use_fxFogDistance2; // 0x15D
		::System::Byte _padding8[0x2];
		::System::Single fxFogDistance2; // 0x160
		::System::Boolean active_fxFogFinalColor; // 0x164
		::System::Boolean use_fxFogFinalColor; // 0x165
		::System::Byte _padding9[0x2];
		::UnityEngine::Color fxFogFinalColor; // 0x168
		::System::Boolean active_fxFogForCharacter; // 0x178
		::System::Boolean use_fxFogForCharacter; // 0x179
		::System::Boolean fxFogForCharacter; // 0x17A
		::System::Boolean active_fxFogStartForChar; // 0x17B
		::System::Boolean use_fxFogStartForChar; // 0x17C
		::System::Byte _padding10[0x3];
		::System::Single fxFogStartForChar; // 0x180
		::System::Boolean active_fxFogDistanceForChar; // 0x184
		::System::Boolean use_fxFogDistanceForChar; // 0x185
		::System::Byte _padding11[0x2];
		::System::Single fxFogDistanceForChar; // 0x188
		::System::Boolean active_fxFogIntensityForSky; // 0x18C
		::System::Boolean use_fxFogIntensityForSky; // 0x18D
		::System::Byte _padding12[0x2];
		::System::Single fxFogIntensityForSky; // 0x190
		::System::Boolean active_fxVolumetricFogIntensity; // 0x194
		::System::Boolean use_fxVolumetricFogIntensity; // 0x195
		::System::Byte _padding13[0x2];
		::System::Single fxVolumetricFogIntensity; // 0x198
		::System::Boolean active_fxFogIntensityForSceneAndChar; // 0x19C
		::System::Boolean use_fxFogIntensityForSceneAndChar; // 0x19D
		::System::Byte _padding14[0x2];
		::System::Single fxFogIntensityForSceneAndChar; // 0x1A0
		::System::Boolean active_fxFogFixFxFogFinalColorANotWork; // 0x1A4
		::System::Boolean use_fxFogFixFxFogFinalColorANotWork; // 0x1A5
		::System::Boolean fxFogFixFxFogFinalColorANotWork; // 0x1A6
		::System::Boolean active_fxFogKeepCharFogSameAsScene; // 0x1A7
		::System::Boolean use_fxFogKeepCharFogSameAsScene; // 0x1A8
		::System::Boolean fxFogKeepCharFogSameAsScene; // 0x1A9
		::System::Boolean active_fxFogIntensityScaleForChar; // 0x1AA
		::System::Boolean use_fxFogIntensityScaleForChar; // 0x1AB
		::System::Single fxFogIntensityScaleForChar; // 0x1AC
		::System::Boolean active_fxFogBlendWithFogCard; // 0x1B0
		::System::Boolean use_fxFogBlendWithFogCard; // 0x1B1
		::System::Byte _padding15[0x2];
		::System::Single fxFogBlendWithFogCard; // 0x1B4
		::UnityEngine::Rendering::Universal::FXFog* _FXFog; // 0x1B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::FXFog* FHHMGNCKDAI(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::FXFog*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_FHHMGNCKDAI_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXFOGBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
