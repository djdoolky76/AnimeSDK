#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PaniniProjectionBehaviour_OBCMCANEJEP.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class PaniniProjection; }

#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_APOJAEPLEFJ_OFFSET UNITYSDK_OFFSET(0x18824F30)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x18824D60)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x18825C00)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x18825C30)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x188253B0)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x18825C10)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18825320)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x18825C20)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18825820)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x188259D0)
#define MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18825BE0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int PaniniProjectionBehaviour_TypeDefinitionIndex = 78052;

	class PaniniProjectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::PaniniProjectionBehaviour_OBCMCANEJEP _methodParm; // 0x18
		::System::Boolean enabled; // 0x2C
		::System::Boolean active_distance; // 0x2D
		::System::Boolean use_distance; // 0x2E
		::System::Byte _padding0[0x1];
		::System::Single distance; // 0x30
		::System::Boolean active_cropToFit; // 0x34
		::System::Boolean use_cropToFit; // 0x35
		::System::Byte _padding1[0x2];
		::System::Single cropToFit; // 0x38
		::System::Byte _padding2[0x4];
		::UnityEngine::Rendering::Universal::PaniniProjection* _PaniniProjection; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::PaniniProjection* APOJAEPLEFJ(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::PaniniProjection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_APOJAEPLEFJ_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_PANINIPROJECTIONBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
