#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/DepthOfFieldBehaviour_JFNOFGBPNIC.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofBlurQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class DepthOfField; }

#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x13F18C60)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x13F1B5A0)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_IKKBNPBNANO_OFFSET UNITYSDK_OFFSET(0x13F19050)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x13F1B590)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x13F19600)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x13F1B580)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13F19440)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x13F1B5B0)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13F1ABE0)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x13F1AEB0)
#define MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13F1B4C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DepthOfFieldBehaviour_TypeDefinitionIndex = 40668;

	class DepthOfFieldBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::DepthOfFieldBehaviour_JFNOFGBPNIC _methodParm; // 0x18
		::System::Boolean enabled; // 0x84
		::System::Boolean active_mode; // 0x85
		::System::Boolean use_mode; // 0x86
		::System::Byte _padding0[0x1];
		::UnityEngine::Rendering::Universal::DepthOfFieldMode mode; // 0x88
		::System::Boolean active_gaussianStart; // 0x8C
		::System::Boolean use_gaussianStart; // 0x8D
		::System::Byte _padding1[0x2];
		::System::Single gaussianStart; // 0x90
		::System::Boolean active_gaussianEnd; // 0x94
		::System::Boolean use_gaussianEnd; // 0x95
		::System::Byte _padding2[0x2];
		::System::Single gaussianEnd; // 0x98
		::System::Boolean active_gaussianMaxRadius; // 0x9C
		::System::Boolean use_gaussianMaxRadius; // 0x9D
		::System::Byte _padding3[0x2];
		::System::Single gaussianMaxRadius; // 0xA0
		::System::Boolean active_highQualitySampling; // 0xA4
		::System::Boolean use_highQualitySampling; // 0xA5
		::System::Boolean highQualitySampling; // 0xA6
		::System::Boolean active_focusDistance; // 0xA7
		::System::Boolean use_focusDistance; // 0xA8
		::System::Byte _padding4[0x3];
		::System::Single focusDistance; // 0xAC
		::System::Boolean active_aperture; // 0xB0
		::System::Boolean use_aperture; // 0xB1
		::System::Byte _padding5[0x2];
		::System::Single aperture; // 0xB4
		::System::Boolean active_focalLength; // 0xB8
		::System::Boolean use_focalLength; // 0xB9
		::System::Byte _padding6[0x2];
		::System::Single focalLength; // 0xBC
		::System::Boolean active_bladeCount; // 0xC0
		::System::Boolean use_bladeCount; // 0xC1
		::System::Byte _padding7[0x2];
		::System::Int32 bladeCount; // 0xC4
		::System::Boolean active_bladeCurvature; // 0xC8
		::System::Boolean use_bladeCurvature; // 0xC9
		::System::Byte _padding8[0x2];
		::System::Single bladeCurvature; // 0xCC
		::System::Boolean active_bladeRotation; // 0xD0
		::System::Boolean use_bladeRotation; // 0xD1
		::System::Byte _padding9[0x2];
		::System::Single bladeRotation; // 0xD4
		::System::Boolean active_debugMode; // 0xD8
		::System::Boolean use_debugMode; // 0xD9
		::System::Byte _padding10[0x2];
		::UnityEngine::Rendering::Universal::DofDebugMode debugMode; // 0xDC
		::System::Boolean active_discardNearCoc; // 0xE0
		::System::Boolean use_discardNearCoc; // 0xE1
		::System::Boolean discardNearCoc; // 0xE2
		::System::Boolean active_forceNoDefaultDof; // 0xE3
		::System::Boolean use_forceNoDefaultDof; // 0xE4
		::System::Boolean forceNoDefaultDof; // 0xE5
		::System::Boolean active_blurQuality; // 0xE6
		::System::Boolean use_blurQuality; // 0xE7
		::UnityEngine::Rendering::Universal::DofBlurQuality blurQuality; // 0xE8
		::System::Byte _padding11[0x4];
		::UnityEngine::Rendering::Universal::DepthOfField* _DepthOfField; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::DepthOfField* IKKBNPBNANO(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::DepthOfField*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_IKKBNPBNANO_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DEPTHOFFIELDBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
