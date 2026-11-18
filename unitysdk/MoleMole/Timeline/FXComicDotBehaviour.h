#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FXComicDotBehaviour_LEGPEPGIHBO.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class FXComicDot; }

#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x181240A0)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x18126050)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_JODKOCNODLD_OFFSET UNITYSDK_OFFSET(0x18124470)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x18126060)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x18124990)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x18126040)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18124860)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x18126070)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18125940)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x18125B80)
#define MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18126010)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FXComicDotBehaviour_TypeDefinitionIndex = 51267;

	class FXComicDotBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FXComicDotBehaviour_LEGPEPGIHBO _methodParm; // 0x18
		::System::Boolean enabled; // 0x5C
		::System::Boolean active_pixelationOn; // 0x5D
		::System::Boolean use_pixelationOn; // 0x5E
		::System::Boolean pixelationOn; // 0x5F
		::System::Boolean active_pixelSize; // 0x60
		::System::Boolean use_pixelSize; // 0x61
		::System::Byte _padding0[0x2];
		::System::Single pixelSize; // 0x64
		::System::Boolean active_outlineOn; // 0x68
		::System::Boolean use_outlineOn; // 0x69
		::System::Boolean outlineOn; // 0x6A
		::System::Boolean active_outlineOpacity; // 0x6B
		::System::Boolean use_outlineOpacity; // 0x6C
		::System::Byte _padding1[0x3];
		::System::Single outlineOpacity; // 0x70
		::System::Boolean active_outlineDiffOffset; // 0x74
		::System::Boolean use_outlineDiffOffset; // 0x75
		::System::Byte _padding2[0x2];
		::System::Single outlineDiffOffset; // 0x78
		::System::Boolean active_outlineDepthThreshold; // 0x7C
		::System::Boolean use_outlineDepthThreshold; // 0x7D
		::System::Byte _padding3[0x2];
		::System::Single outlineDepthThreshold; // 0x80
		::System::Boolean active_outlineNormalDiffThreshold; // 0x84
		::System::Boolean use_outlineNormalDiffThreshold; // 0x85
		::System::Byte _padding4[0x2];
		::System::Single outlineNormalDiffThreshold; // 0x88
		::System::Boolean active_outlineNormalThreshold; // 0x8C
		::System::Boolean use_outlineNormalThreshold; // 0x8D
		::System::Byte _padding5[0x2];
		::System::Single outlineNormalThreshold; // 0x90
		::System::Boolean active_outlineNormalThresholdScale; // 0x94
		::System::Boolean use_outlineNormalThresholdScale; // 0x95
		::System::Byte _padding6[0x2];
		::System::Single outlineNormalThresholdScale; // 0x98
		::System::Boolean active_outlineInUberShader; // 0x9C
		::System::Boolean use_outlineInUberShader; // 0x9D
		::System::Boolean outlineInUberShader; // 0x9E
		::System::Byte _padding7[0x1];
		::UnityEngine::Rendering::Universal::FXComicDot* _FXComicDot; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::FXComicDot* JODKOCNODLD(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::FXComicDot*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_JODKOCNODLD_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FXCOMICDOTBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
