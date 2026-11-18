#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/OldCRTBehaviour_MAJGIIDFPJA.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class OldCRT; }

#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x1A0F7030)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_GEDHKDEOJCB_OFFSET UNITYSDK_OFFSET(0x1A0F7250)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A0F8360)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x1A0F8370)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1A0F76F0)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x1A0F8350)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0F7640)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A0F8340)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A0F7E50)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x1A0F8020)
#define MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0F8300)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int OldCRTBehaviour_TypeDefinitionIndex = 86532;

	class OldCRTBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::OldCRTBehaviour_MAJGIIDFPJA _methodParm; // 0x18
		::System::Boolean enabled; // 0x48
		::System::Boolean active_pattern; // 0x49
		::System::Boolean use_pattern; // 0x4A
		::System::Byte _padding0[0x5];
		::UnityEngine::Texture* pattern; // 0x50
		::System::Boolean active_tiling; // 0x58
		::System::Boolean use_tiling; // 0x59
		::System::Byte _padding1[0x2];
		::UnityEngine::Vector2 tiling; // 0x5C
		::System::Boolean active_scanlineBrightness; // 0x64
		::System::Boolean use_scanlineBrightness; // 0x65
		::System::Byte _padding2[0x2];
		::System::Single scanlineBrightness; // 0x68
		::System::Boolean active_fade; // 0x6C
		::System::Boolean use_fade; // 0x6D
		::System::Byte _padding3[0x2];
		::System::Single fade; // 0x70
		::System::Byte _padding4[0x4];
		::UnityEngine::Rendering::Universal::OldCRT* _OldCRT; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::OldCRT* GEDHKDEOJCB(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::OldCRT*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_GEDHKDEOJCB_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OLDCRTBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
