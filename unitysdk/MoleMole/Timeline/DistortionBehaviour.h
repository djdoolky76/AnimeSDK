#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/DistortionBehaviour_NPDJPLFJFNJ.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DistortionQueueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x13F1B5C0)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x13F1D080)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x13F1D070)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_MPIMEENIPNO_OFFSET UNITYSDK_OFFSET(0x13F1B860)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x13F1BD40)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x13F1D090)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13F1BC50)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x13F1D0A0)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13F1CA60)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x13F1CC60)
#define MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13F1D050)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int DistortionBehaviour_TypeDefinitionIndex = 82377;

	class DistortionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::DistortionBehaviour_NPDJPLFJFNJ _methodParm; // 0x18
		::System::Boolean enabled; // 0x54
		::System::Boolean active_downScaleFactor; // 0x55
		::System::Boolean use_downScaleFactor; // 0x56
		::System::Byte _padding0[0x1];
		::System::Int32 downScaleFactor; // 0x58
		::System::Boolean active_intensity; // 0x5C
		::System::Boolean use_intensity; // 0x5D
		::System::Byte _padding1[0x2];
		::System::Single intensity; // 0x60
		::System::Boolean active_rgbShift; // 0x64
		::System::Boolean use_rgbShift; // 0x65
		::System::Byte _padding2[0x2];
		::UnityEngine::Vector3 rgbShift; // 0x68
		::System::Boolean active_separateRGBIntensity; // 0x74
		::System::Boolean use_separateRGBIntensity; // 0x75
		::System::Byte _padding3[0x2];
		::System::Single separateRGBIntensity; // 0x78
		::System::Boolean active_forceActive; // 0x7C
		::System::Boolean use_forceActive; // 0x7D
		::System::Boolean forceActive; // 0x7E
		::System::Boolean active_effectRenderQueue; // 0x7F
		::System::Boolean use_effectRenderQueue; // 0x80
		::System::Byte _padding4[0x3];
		::UnityEngine::NAPRenderPipeline0::DistortionQueueType effectRenderQueue; // 0x84
		::System::Boolean active_forceDistortionOnLowPlatform; // 0x88
		::System::Boolean use_forceDistortionOnLowPlatform; // 0x89
		::System::Boolean forceDistortionOnLowPlatform; // 0x8A
		::System::Byte _padding5[0x5];
		::UnityEngine::Rendering::Universal::Distortion* _Distortion; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::Distortion* MPIMEENIPNO(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::Distortion*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_MPIMEENIPNO_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_DISTORTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
