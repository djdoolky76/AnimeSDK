#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/ColorLookupBehaviour_DALFGBPIENJ.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class ColorLookup; }

#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_ABIHELEFKHP_OFFSET UNITYSDK_OFFSET(0x1C0C14A0)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1C0C12E0)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1C0C2130)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1C0C2120)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1C0C1920)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1C0C2110)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1C0C1890)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1C0C2140)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1C0C1D90)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1C0C1F40)
#define MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0C20F0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ColorLookupBehaviour_TypeDefinitionIndex = 65763;

	class ColorLookupBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ColorLookupBehaviour_DALFGBPIENJ _methodParm; // 0x18
		::System::Boolean enabled; // 0x38
		::System::Boolean active_texture; // 0x39
		::System::Boolean use_texture; // 0x3A
		::System::Byte _padding0[0x5];
		::UnityEngine::Texture* texture; // 0x40
		::System::Boolean active_contribution; // 0x48
		::System::Boolean use_contribution; // 0x49
		::System::Byte _padding1[0x2];
		::System::Single contribution; // 0x4C
		::UnityEngine::Rendering::Universal::ColorLookup* _ColorLookup; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::ColorLookup* ABIHELEFKHP(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::ColorLookup*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_ABIHELEFKHP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_COLORLOOKUPBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
