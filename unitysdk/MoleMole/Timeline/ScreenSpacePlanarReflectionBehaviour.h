#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/ScreenSpacePlanarReflectionBehaviour_JDDOPMKLDMA.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PostLight_RenderLayerMask.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ScreenSpacePlanarReflection; }

#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_CFKEGAJFCBC_OFFSET UNITYSDK_OFFSET(0x198E03A0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x198DFFD0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x198E21C0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x198E21D0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x198E08F0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x198E21B0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x198E0790)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x198E21A0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x198E19F0)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x198E1C70)
#define MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x198E2150)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ScreenSpacePlanarReflectionBehaviour_TypeDefinitionIndex = 66333;

	class ScreenSpacePlanarReflectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ScreenSpacePlanarReflectionBehaviour_JDDOPMKLDMA _methodParm; // 0x18
		::System::Boolean enabled; // 0x70
		::System::Boolean active_mirrorReflectionOverride; // 0x71
		::System::Boolean use_mirrorReflectionOverride; // 0x72
		::System::Boolean mirrorReflectionOverride; // 0x73
		::System::Boolean active_planarReflectionBlurAmount; // 0x74
		::System::Boolean use_planarReflectionBlurAmount; // 0x75
		::System::Byte _padding0[0x2];
		::System::Single planarReflectionBlurAmount; // 0x78
		::System::Boolean active_planarReflectionLodSteps; // 0x7C
		::System::Boolean use_planarReflectionLodSteps; // 0x7D
		::System::Byte _padding1[0x2];
		::System::Single planarReflectionLodSteps; // 0x80
		::System::Boolean active_planarReflectionMinSmoothness; // 0x84
		::System::Boolean use_planarReflectionMinSmoothness; // 0x85
		::System::Byte _padding2[0x2];
		::System::Single planarReflectionMinSmoothness; // 0x88
		::System::Boolean active_planarReflectionSmoothnessFadeStart; // 0x8C
		::System::Boolean use_planarReflectionSmoothnessFadeStart; // 0x8D
		::System::Byte _padding3[0x2];
		::System::Single planarReflectionSmoothnessFadeStart; // 0x90
		::System::Boolean active_Enabled; // 0x94
		::System::Boolean use_Enabled; // 0x95
		::System::Boolean Enabled; // 0x96
		::System::Boolean active_FadeDistance; // 0x97
		::System::Boolean use_FadeDistance; // 0x98
		::System::Byte _padding4[0x3];
		::System::Single FadeDistance; // 0x9C
		::System::Boolean active_StretchScale; // 0xA0
		::System::Boolean use_StretchScale; // 0xA1
		::System::Byte _padding5[0x2];
		::System::Single StretchScale; // 0xA4
		::System::Boolean active_ScreenStretchThreshold; // 0xA8
		::System::Boolean use_ScreenStretchThreshold; // 0xA9
		::System::Byte _padding6[0x2];
		::System::Single ScreenStretchThreshold; // 0xAC
		::System::Boolean active_planarReflectionCameraDisabledLayerMask; // 0xB0
		::System::Boolean use_planarReflectionCameraDisabledLayerMask; // 0xB1
		::System::Byte _padding7[0x2];
		::UnityEngine::LayerMask planarReflectionCameraDisabledLayerMask; // 0xB4
		::System::Boolean active_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0xB8
		::System::Boolean use_planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0xB9
		::System::Byte _padding8[0x2];
		::UnityEngine::LayerMask planarReflectionCameraDisabledLayerMaskForSpecialSceneAndDevice; // 0xBC
		::System::Boolean active_planarReflectionCameraDisabledRenderLayerMask; // 0xC0
		::System::Boolean use_planarReflectionCameraDisabledRenderLayerMask; // 0xC1
		::System::Byte _padding9[0x2];
		::UnityEngine::Rendering::Universal::Internal::PostLight_RenderLayerMask planarReflectionCameraDisabledRenderLayerMask; // 0xC4
		::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* _ScreenSpacePlanarReflection; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection* CFKEGAJFCBC(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::ScreenSpacePlanarReflection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCREENSPACEPLANARREFLECTIONBEHAVIOUR_CFKEGAJFCBC_OFFSET))(this, NEEMKJBIIBC);
		}
	};
}
