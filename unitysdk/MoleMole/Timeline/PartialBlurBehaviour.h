#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PartialBlurBehaviour_EPFHDFFAHLA.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class PartialBlur; }

#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A0F8750)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A0F9D40)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1A0F9D30)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_LIAGHLBCOAL_OFFSET UNITYSDK_OFFSET(0x1A0F8980)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1A0F8E30)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1A0F9D20)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0F8D70)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A0F9D10)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A0F97F0)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0F99C0)
#define MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F9CF0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PartialBlurBehaviour_TypeDefinitionIndex = 59751;

	class PartialBlurBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::PartialBlurBehaviour_EPFHDFFAHLA _methodParm; // 0x18
		::System::Boolean enabled; // 0x40
		::System::Boolean active_downScaleFactor; // 0x41
		::System::Boolean use_downScaleFactor; // 0x42
		::System::Byte _padding0[0x1];
		::System::Int32 downScaleFactor; // 0x44
		::System::Boolean active_radius; // 0x48
		::System::Boolean use_radius; // 0x49
		::System::Byte _padding1[0x2];
		::System::Single radius; // 0x4C
		::System::Boolean active_standardDeviation; // 0x50
		::System::Boolean use_standardDeviation; // 0x51
		::System::Byte _padding2[0x2];
		::System::Single standardDeviation; // 0x54
		::System::Boolean active_sampleCountMain; // 0x58
		::System::Boolean use_sampleCountMain; // 0x59
		::System::Byte _padding3[0x2];
		::System::Int32 sampleCountMain; // 0x5C
		::System::Boolean active_canBeDisabledByGlobalConfig; // 0x60
		::System::Boolean use_canBeDisabledByGlobalConfig; // 0x61
		::System::Boolean canBeDisabledByGlobalConfig; // 0x62
		::System::Byte _padding4[0x5];
		::UnityEngine::Rendering::Universal::PartialBlur* _PartialBlur; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::PartialBlur* LIAGHLBCOAL(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::PartialBlur*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_LIAGHLBCOAL_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PARTIALBLURBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
