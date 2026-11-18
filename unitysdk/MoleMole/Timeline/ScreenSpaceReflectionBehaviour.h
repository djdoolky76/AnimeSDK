#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/ScreenSpaceReflectionBehaviour_BGGLNIHIJEB.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SsrQuality.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ScreenSpaceReflection; }

#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x19F5E390)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_GHAKDDDHDNC_OFFSET UNITYSDK_OFFSET(0x19F5E600)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x19F5FBD0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x19F5FBB0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x19F5EAD0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x19F5FBC0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x19F5E9F0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x19F5FBA0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19F5F5E0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x19F5F7D0)
#define MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F5FB70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ScreenSpaceReflectionBehaviour_TypeDefinitionIndex = 50996;

	class ScreenSpaceReflectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ScreenSpaceReflectionBehaviour_BGGLNIHIJEB _methodParm; // 0x18
		::System::Boolean behaviorEnabled; // 0x48
		::System::Boolean active_enabled; // 0x49
		::System::Boolean use_enabled; // 0x4A
		::System::Boolean enabled; // 0x4B
		::System::Boolean active_intensity; // 0x4C
		::System::Boolean use_intensity; // 0x4D
		::System::Byte _padding0[0x2];
		::System::Single intensity; // 0x50
		::System::Boolean active_depthBufferThickness; // 0x54
		::System::Boolean use_depthBufferThickness; // 0x55
		::System::Byte _padding1[0x2];
		::System::Single depthBufferThickness; // 0x58
		::System::Boolean active_screenFadeDistance; // 0x5C
		::System::Boolean use_screenFadeDistance; // 0x5D
		::System::Byte _padding2[0x2];
		::System::Single screenFadeDistance; // 0x60
		::System::Boolean active_quality; // 0x64
		::System::Boolean use_quality; // 0x65
		::System::Byte _padding3[0x2];
		::UnityEngine::NAPRenderPipeline0::SsrQuality quality; // 0x68
		::System::Boolean active_overrideGlobalPlanarReflectionConfig; // 0x6C
		::System::Boolean use_overrideGlobalPlanarReflectionConfig; // 0x6D
		::System::Boolean overrideGlobalPlanarReflectionConfig; // 0x6E
		::System::Boolean active_planarReflectionBlurAmount; // 0x6F
		::System::Boolean use_planarReflectionBlurAmount; // 0x70
		::System::Byte _padding4[0x3];
		::System::Single planarReflectionBlurAmount; // 0x74
		::UnityEngine::Rendering::Universal::ScreenSpaceReflection* _ScreenSpaceReflection; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::ScreenSpaceReflection* GHAKDDDHDNC(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::ScreenSpaceReflection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_GHAKDDDHDNC_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEREFLECTIONBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
