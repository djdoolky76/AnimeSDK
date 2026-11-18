#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/MotionBlurBehaviour_ENNKNPDKCPN.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurDirection.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MotionBlurQuality.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class MotionBlur; }

#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_ABNOKELIKOC_OFFSET UNITYSDK_OFFSET(0x15AE48E0)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x15AE4690)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15AE5C30)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x15AE5C20)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x15AE4DA0)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x15AE5C40)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15AE4CD0)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15AE5C10)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15AE5680)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x15AE5870)
#define MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x15AE5BD0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MotionBlurBehaviour_TypeDefinitionIndex = 80732;

	class MotionBlurBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::MotionBlurBehaviour_ENNKNPDKCPN _methodParm; // 0x18
		::System::Boolean enabled; // 0x4C
		::System::Boolean active_mode; // 0x4D
		::System::Boolean use_mode; // 0x4E
		::System::Byte _padding0[0x1];
		::UnityEngine::NAPRenderPipeline0::MotionBlurMode mode; // 0x50
		::System::Boolean active_intensity; // 0x54
		::System::Boolean use_intensity; // 0x55
		::System::Byte _padding1[0x2];
		::System::Single intensity; // 0x58
		::System::Boolean active_clamp; // 0x5C
		::System::Boolean use_clamp; // 0x5D
		::System::Byte _padding2[0x2];
		::System::Single clamp; // 0x60
		::System::Boolean active_quality; // 0x64
		::System::Boolean use_quality; // 0x65
		::System::Byte _padding3[0x2];
		::UnityEngine::NAPRenderPipeline0::MotionBlurQuality quality; // 0x68
		::System::Boolean active_direction; // 0x6C
		::System::Boolean use_direction; // 0x6D
		::System::Byte _padding4[0x2];
		::UnityEngine::NAPRenderPipeline0::MotionBlurDirection direction; // 0x70
		::System::Boolean active_motionVectorBlendRadius; // 0x74
		::System::Boolean use_motionVectorBlendRadius; // 0x75
		::System::Byte _padding5[0x2];
		::System::Single motionVectorBlendRadius; // 0x78
		::System::Byte _padding6[0x4];
		::UnityEngine::Rendering::Universal::MotionBlur* _MotionBlur; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::MotionBlur* ABNOKELIKOC(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::MotionBlur*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_ABNOKELIKOC_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MOTIONBLURBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}
	};
}
