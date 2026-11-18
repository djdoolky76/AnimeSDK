#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/FilmGrainBehaviour_OIJNIMFPDAH.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }

#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x198D87C0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x198D99E0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_GMFBJEOAPMA_OFFSET UNITYSDK_OFFSET(0x198D89D0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x198D99B0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x198D8E70)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x198D99C0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x198D8DC0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x198D99D0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x198D9500)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x198D96D0)
#define MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x198D9990)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int FilmGrainBehaviour_TypeDefinitionIndex = 38406;

	class FilmGrainBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::FilmGrainBehaviour_OIJNIMFPDAH _methodParm; // 0x18
		::System::Boolean enabled; // 0x48
		::System::Boolean active_type; // 0x49
		::System::Boolean use_type; // 0x4A
		::System::Byte _padding0[0x1];
		::UnityEngine::Rendering::Universal::FilmGrainLookup type; // 0x4C
		::System::Boolean active_intensity; // 0x50
		::System::Boolean use_intensity; // 0x51
		::System::Byte _padding1[0x2];
		::System::Single intensity; // 0x54
		::System::Boolean active_response; // 0x58
		::System::Boolean use_response; // 0x59
		::System::Byte _padding2[0x2];
		::System::Single response; // 0x5C
		::System::Boolean active_texture; // 0x60
		::System::Boolean use_texture; // 0x61
		::System::Byte _padding3[0x6];
		::UnityEngine::Texture* texture; // 0x68
		::UnityEngine::Rendering::Universal::FilmGrain* _FilmGrain; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::UnityEngine::Rendering::Universal::FilmGrain* GMFBJEOAPMA(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::FilmGrain*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_GMFBJEOAPMA_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_FILMGRAINBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
