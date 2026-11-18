#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ChromaticAberrationBehaviour_DACKNEECNDF.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ChromaticAberration; }

#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x14BD2BF0)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x14BD4A50)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_JCMDLBMDKMF_OFFSET UNITYSDK_OFFSET(0x14BD2F30)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x14BD4A30)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x14BD3470)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x14BD4A20)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x14BD3320)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x14BD4A40)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x14BD41B0)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x14BD4410)
#define MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x14BD49A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ChromaticAberrationBehaviour_TypeDefinitionIndex = 53572;

	class ChromaticAberrationBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ChromaticAberrationBehaviour_DACKNEECNDF _methodParm; // 0x18
		::System::Boolean enabled; // 0x8C
		::System::Boolean active_intensity; // 0x8D
		::System::Boolean use_intensity; // 0x8E
		::System::Byte _padding0[0x1];
		::System::Single intensity; // 0x90
		::System::Boolean active_center; // 0x94
		::System::Boolean use_center; // 0x95
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector2 center; // 0x98
		::System::Boolean active_power; // 0xA0
		::System::Boolean use_power; // 0xA1
		::System::Byte _padding2[0x2];
		::System::Single power; // 0xA4
		::System::Boolean active_ColorR; // 0xA8
		::System::Boolean use_ColorR; // 0xA9
		::System::Byte _padding3[0x2];
		::UnityEngine::Color ColorR; // 0xAC
		::System::Boolean active_PowerR; // 0xBC
		::System::Boolean use_PowerR; // 0xBD
		::System::Byte _padding4[0x2];
		::System::Single PowerR; // 0xC0
		::System::Boolean active_ColorG; // 0xC4
		::System::Boolean use_ColorG; // 0xC5
		::System::Byte _padding5[0x2];
		::UnityEngine::Color ColorG; // 0xC8
		::System::Boolean active_PowerG; // 0xD8
		::System::Boolean use_PowerG; // 0xD9
		::System::Byte _padding6[0x2];
		::System::Single PowerG; // 0xDC
		::System::Boolean active_ColorB; // 0xE0
		::System::Boolean use_ColorB; // 0xE1
		::System::Byte _padding7[0x2];
		::UnityEngine::Color ColorB; // 0xE4
		::System::Boolean active_PowerB; // 0xF4
		::System::Boolean use_PowerB; // 0xF5
		::System::Byte _padding8[0x2];
		::System::Single PowerB; // 0xF8
		::System::Byte _padding9[0x4];
		::UnityEngine::Rendering::Universal::ChromaticAberration* _ChromaticAberration; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::UnityEngine::Rendering::Universal::ChromaticAberration* JCMDLBMDKMF(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::ChromaticAberration*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_JCMDLBMDKMF_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHROMATICABERRATIONBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
