#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CullingBehaviour_DDDMDHLKHPB.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class Culling; }

#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A723550)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A7268B0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1A7268D0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_NFCNLDBAENJ_OFFSET UNITYSDK_OFFSET(0x1A723A50)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1A723FF0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1A7268C0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A723E40)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A7268A0)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A725D40)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A726000)
#define MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A726840)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CullingBehaviour_TypeDefinitionIndex = 57582;

	class CullingBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::CullingBehaviour_DDDMDHLKHPB _methodParm; // 0x18
		::System::Boolean enabled; // 0x9C
		::System::Boolean active_EnableHizCulling; // 0x9D
		::System::Boolean use_EnableHizCulling; // 0x9E
		::System::Boolean EnableHizCulling; // 0x9F
		::System::Boolean active_EnableShadowHizCulling; // 0xA0
		::System::Boolean use_EnableShadowHizCulling; // 0xA1
		::System::Boolean EnableShadowHizCulling; // 0xA2
		::System::Boolean active_ForceUseSMAA; // 0xA3
		::System::Boolean use_ForceUseSMAA; // 0xA4
		::System::Boolean ForceUseSMAA; // 0xA5
		::System::Boolean active_outlineOverrideGlobalConfig; // 0xA6
		::System::Boolean use_outlineOverrideGlobalConfig; // 0xA7
		::System::Boolean outlineOverrideGlobalConfig; // 0xA8
		::System::Boolean active_BlitOutlineBeforeTransparent; // 0xA9
		::System::Boolean use_BlitOutlineBeforeTransparent; // 0xAA
		::System::Boolean BlitOutlineBeforeTransparent; // 0xAB
		::System::Boolean active_outlineEnableMultiLayer; // 0xAC
		::System::Boolean use_outlineEnableMultiLayer; // 0xAD
		::System::Boolean outlineEnableMultiLayer; // 0xAE
		::System::Boolean active_outlineUseSingleColor; // 0xAF
		::System::Boolean use_outlineUseSingleColor; // 0xB0
		::System::Boolean outlineUseSingleColor; // 0xB1
		::System::Boolean active_outlineSingleColor; // 0xB2
		::System::Boolean use_outlineSingleColor; // 0xB3
		::UnityEngine::Color outlineSingleColor; // 0xB4
		::System::Boolean active_outlineDisable; // 0xC4
		::System::Boolean use_outlineDisable; // 0xC5
		::System::Boolean outlineDisable; // 0xC6
		::System::Boolean active_outlineFillInner; // 0xC7
		::System::Boolean use_outlineFillInner; // 0xC8
		::System::Boolean outlineFillInner; // 0xC9
		::System::Boolean active_outlineFillInnerBehindScene; // 0xCA
		::System::Boolean use_outlineFillInnerBehindScene; // 0xCB
		::System::Boolean outlineFillInnerBehindScene; // 0xCC
		::System::Boolean active_outlineFillInnerColor; // 0xCD
		::System::Boolean use_outlineFillInnerColor; // 0xCE
		::System::Byte _padding0[0x1];
		::UnityEngine::Color outlineFillInnerColor; // 0xD0
		::System::Boolean active_outlineFillInnerColorIntensity; // 0xE0
		::System::Boolean use_outlineFillInnerColorIntensity; // 0xE1
		::System::Byte _padding1[0x2];
		::System::Single outlineFillInnerColorIntensity; // 0xE4
		::System::Boolean active_outlineThickness; // 0xE8
		::System::Boolean use_outlineThickness; // 0xE9
		::System::Byte _padding2[0x2];
		::System::Single outlineThickness; // 0xEC
		::System::Boolean active_outlineFlicker; // 0xF0
		::System::Boolean use_outlineFlicker; // 0xF1
		::System::Boolean outlineFlicker; // 0xF2
		::System::Boolean active_outlineSingleColor1; // 0xF3
		::System::Boolean use_outlineSingleColor1; // 0xF4
		::System::Byte _padding3[0x3];
		::UnityEngine::Color outlineSingleColor1; // 0xF8
		::System::Boolean active_outlineSingleColor2; // 0x108
		::System::Boolean use_outlineSingleColor2; // 0x109
		::System::Byte _padding4[0x2];
		::UnityEngine::Color outlineSingleColor2; // 0x10C
		::System::Byte _padding5[0x4];
		::UnityEngine::Rendering::Universal::Culling* _Culling; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::Culling* NFCNLDBAENJ(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::Culling*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CULLINGBEHAVIOUR_NFCNLDBAENJ_OFFSET))(this, NEEMKJBIIBC);
		}
	};
}
