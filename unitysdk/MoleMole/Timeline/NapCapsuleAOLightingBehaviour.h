#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/NapCapsuleAOLightingBehaviour_HGDMIMJIAAC.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class NapCapsuleAOLighting; }

#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x198DE2F0)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x198DF770)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x198DF760)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x198DE9D0)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_OGOGOFPMFHK_OFFSET UNITYSDK_OFFSET(0x198DE520)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x198DF750)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x198DE910)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x198DF740)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x198DF210)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x198DF3F0)
#define MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x198DF710)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int NapCapsuleAOLightingBehaviour_TypeDefinitionIndex = 73041;

	class NapCapsuleAOLightingBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::NapCapsuleAOLightingBehaviour_HGDMIMJIAAC _methodParm; // 0x18
		::System::Boolean enabled; // 0x3C
		::System::Boolean active_enableCapsuleAO; // 0x3D
		::System::Boolean use_enableCapsuleAO; // 0x3E
		::System::Boolean enableCapsuleAO; // 0x3F
		::System::Boolean active_ambientIntensity; // 0x40
		::System::Boolean use_ambientIntensity; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single ambientIntensity; // 0x44
		::System::Boolean active_shadowIntensity; // 0x48
		::System::Boolean use_shadowIntensity; // 0x49
		::System::Byte _padding1[0x2];
		::System::Single shadowIntensity; // 0x4C
		::System::Boolean active_shadowSharpness; // 0x50
		::System::Boolean use_shadowSharpness; // 0x51
		::System::Byte _padding2[0x2];
		::System::Single shadowSharpness; // 0x54
		::System::Boolean active_luminanceBlend; // 0x58
		::System::Boolean use_luminanceBlend; // 0x59
		::System::Byte _padding3[0x2];
		::System::Single luminanceBlend; // 0x5C
		::UnityEngine::Rendering::Universal::NapCapsuleAOLighting* _NapCapsuleAOLighting; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::NapCapsuleAOLighting* OGOGOFPMFHK(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::NapCapsuleAOLighting*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_OGOGOFPMFHK_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_NAPCAPSULEAOLIGHTINGBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}
	};
}
