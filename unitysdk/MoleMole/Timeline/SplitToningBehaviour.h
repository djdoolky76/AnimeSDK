#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/SplitToningBehaviour_ACFFEJBLGBN.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class SplitToning; }

#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x19F5FBE0)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x19F60D70)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x19F60DA0)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_KDEIDHLDFGK_OFFSET UNITYSDK_OFFSET(0x19F5FE00)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x19F60290)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x19F60D90)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x19F601F0)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x19F60D80)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x19F60840)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x19F60A00)
#define MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x19F60D50)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SplitToningBehaviour_TypeDefinitionIndex = 47011;

	class SplitToningBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::SplitToningBehaviour_ACFFEJBLGBN _methodParm; // 0x18
		::System::Boolean enabled; // 0x4C
		::System::Boolean active_shadows; // 0x4D
		::System::Boolean use_shadows; // 0x4E
		::System::Byte _padding0[0x1];
		::UnityEngine::Color shadows; // 0x50
		::System::Boolean active_highlights; // 0x60
		::System::Boolean use_highlights; // 0x61
		::System::Byte _padding1[0x2];
		::UnityEngine::Color highlights; // 0x64
		::System::Boolean active_balance; // 0x74
		::System::Boolean use_balance; // 0x75
		::System::Byte _padding2[0x2];
		::System::Single balance; // 0x78
		::System::Byte _padding3[0x4];
		::UnityEngine::Rendering::Universal::SplitToning* _SplitToning; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::SplitToning* KDEIDHLDFGK(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::SplitToning*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_KDEIDHLDFGK_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SPLITTONINGBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
