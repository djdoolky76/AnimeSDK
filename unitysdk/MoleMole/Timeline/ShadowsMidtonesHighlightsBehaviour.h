#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/MoleMole/Timeline/ShadowsMidtonesHighlightsBehaviour_JADKMJGGDBB.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class ShadowsMidtonesHighlights; }

#define MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x18970F70)
#define MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x189728D0)
#define MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_JDBLFAJIMFA_OFFSET UNITYSDK_OFFSET(0x18971250)
#define MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x189728F0)
#define MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x18971750)
#define MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x189728E0)
#define MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18971640)
#define MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x189728C0)
#define MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x18972170)
#define MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x18972390)
#define MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18972870)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ShadowsMidtonesHighlightsBehaviour_TypeDefinitionIndex = 82930;

	class ShadowsMidtonesHighlightsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::ShadowsMidtonesHighlightsBehaviour_JADKMJGGDBB _methodParm; // 0x18
		::System::Boolean enabled; // 0x78
		::System::Boolean active_shadows; // 0x79
		::System::Boolean use_shadows; // 0x7A
		::System::Byte _padding0[0x1];
		::UnityEngine::Vector4 shadows; // 0x7C
		::System::Boolean active_midtones; // 0x8C
		::System::Boolean use_midtones; // 0x8D
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector4 midtones; // 0x90
		::System::Boolean active_highlights; // 0xA0
		::System::Boolean use_highlights; // 0xA1
		::System::Byte _padding2[0x2];
		::UnityEngine::Vector4 highlights; // 0xA4
		::System::Boolean active_shadowsStart; // 0xB4
		::System::Boolean use_shadowsStart; // 0xB5
		::System::Byte _padding3[0x2];
		::System::Single shadowsStart; // 0xB8
		::System::Boolean active_shadowsEnd; // 0xBC
		::System::Boolean use_shadowsEnd; // 0xBD
		::System::Byte _padding4[0x2];
		::System::Single shadowsEnd; // 0xC0
		::System::Boolean active_highlightsStart; // 0xC4
		::System::Boolean use_highlightsStart; // 0xC5
		::System::Byte _padding5[0x2];
		::System::Single highlightsStart; // 0xC8
		::System::Boolean active_highlightsEnd; // 0xCC
		::System::Boolean use_highlightsEnd; // 0xCD
		::System::Byte _padding6[0x2];
		::System::Single highlightsEnd; // 0xD0
		::System::Byte _padding7[0x4];
		::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights* _ShadowsMidtonesHighlights; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights* JDBLFAJIMFA(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::ShadowsMidtonesHighlights*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_JDBLFAJIMFA_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SHADOWSMIDTONESHIGHLIGHTSBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
