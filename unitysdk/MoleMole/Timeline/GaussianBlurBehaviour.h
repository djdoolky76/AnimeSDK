#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/GaussianBlurBehaviour_LECHJJPPKNL.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x131294D0)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_ELONPKCGMOH_OFFSET UNITYSDK_OFFSET(0x13129750)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1312AE00)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1312AE30)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x13129C20)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1312AE20)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13129B40)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1312AE10)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1312A830)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1312AA30)
#define MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1312ADD0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int GaussianBlurBehaviour_TypeDefinitionIndex = 64435;

	class GaussianBlurBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::GaussianBlurBehaviour_LECHJJPPKNL _methodParm; // 0x18
		::System::Boolean enabled; // 0x50
		::System::Boolean active_downSample; // 0x51
		::System::Boolean use_downSample; // 0x52
		::System::Byte _padding0[0x1];
		::System::Int32 downSample; // 0x54
		::System::Boolean active_radius; // 0x58
		::System::Boolean use_radius; // 0x59
		::System::Byte _padding1[0x2];
		::System::Single radius; // 0x5C
		::System::Boolean active_mask; // 0x60
		::System::Boolean use_mask; // 0x61
		::System::Byte _padding2[0x6];
		::UnityEngine::Texture* mask; // 0x68
		::System::Boolean active_maskTiling; // 0x70
		::System::Boolean use_maskTiling; // 0x71
		::System::Byte _padding3[0x2];
		::System::Single maskTiling; // 0x74
		::System::Boolean active_maskRotation; // 0x78
		::System::Boolean use_maskRotation; // 0x79
		::System::Byte _padding4[0x2];
		::System::Single maskRotation; // 0x7C
		::System::Boolean active_maskDebug; // 0x80
		::System::Boolean use_maskDebug; // 0x81
		::System::Boolean maskDebug; // 0x82
		::System::Boolean active_enableBlurWithMonsterMask; // 0x83
		::System::Boolean use_enableBlurWithMonsterMask; // 0x84
		::System::Boolean enableBlurWithMonsterMask; // 0x85
		::System::Byte _padding5[0x2];
		::UnityEngine::Rendering::Universal::GaussianBlur* _GaussianBlur; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::UnityEngine::Rendering::Universal::GaussianBlur* ELONPKCGMOH(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::GaussianBlur*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_ELONPKCGMOH_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_GAUSSIANBLURBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
