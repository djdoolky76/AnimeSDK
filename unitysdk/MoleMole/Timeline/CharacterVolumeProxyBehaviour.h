#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CharacterVolumeProxyBehaviour_EKMFJANDOEO.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::Rendering::Universal { class CharacterVolumeProxy; }

#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_CJLCHIOJKGM_OFFSET UNITYSDK_OFFSET(0x198D5B00)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x198D5960)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x198D65E0)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x198D65F0)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x198D5F70)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x198D65D0)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x198D5EF0)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x198D6600)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x198D62D0)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x198D6470)
#define MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x198D65C0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CharacterVolumeProxyBehaviour_TypeDefinitionIndex = 59917;

	class CharacterVolumeProxyBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::CharacterVolumeProxyBehaviour_EKMFJANDOEO _methodParm; // 0x18
		::System::Boolean enabled; // 0x24
		::System::Boolean active_indoorWeight; // 0x25
		::System::Boolean use_indoorWeight; // 0x26
		::System::Byte _padding0[0x1];
		::System::Single indoorWeight; // 0x28
		::System::Byte _padding1[0x4];
		::UnityEngine::Rendering::Universal::CharacterVolumeProxy* _CharacterVolumeProxy; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::CharacterVolumeProxy* CJLCHIOJKGM(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::CharacterVolumeProxy*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_CJLCHIOJKGM_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERVOLUMEPROXYBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
