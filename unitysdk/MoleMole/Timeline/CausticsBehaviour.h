#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CausticsBehaviour_JCJPPCAKLOM.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class Caustics; }

#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0x13A08190)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x13A0A590)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_KBDIIEDMPHD_OFFSET UNITYSDK_OFFSET(0x13A0A5A0)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_NGJJOCLNFFJ_OFFSET UNITYSDK_OFFSET(0x13A086C0)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x13A08C40)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_OGPBBOPCBKO_OFFSET UNITYSDK_OFFSET(0x13A0A5B0)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13A08AB0)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x13A0A580)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13A09D10)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0x13A09FB0)
#define MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x13A0A520)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CausticsBehaviour_TypeDefinitionIndex = 44029;

	class CausticsBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::CausticsBehaviour_JCJPPCAKLOM _methodParm; // 0x18
		::System::Boolean enabled; // 0x88
		::System::Boolean active_Use_Caustics; // 0x89
		::System::Boolean use_Use_Caustics; // 0x8A
		::System::Boolean Use_Caustics; // 0x8B
		::System::Boolean active_Brightness; // 0x8C
		::System::Boolean use_Brightness; // 0x8D
		::System::Byte _padding0[0x2];
		::System::Single Brightness; // 0x90
		::System::Boolean active_Speed; // 0x94
		::System::Boolean use_Speed; // 0x95
		::System::Byte _padding1[0x2];
		::System::Single Speed; // 0x98
		::System::Boolean active_Range; // 0x9C
		::System::Boolean use_Range; // 0x9D
		::System::Byte _padding2[0x2];
		::System::Single Range; // 0xA0
		::System::Boolean active_HeightOffset; // 0xA4
		::System::Boolean use_HeightOffset; // 0xA5
		::System::Byte _padding3[0x2];
		::System::Single HeightOffset; // 0xA8
		::System::Boolean active_MainLightScale; // 0xAC
		::System::Boolean use_MainLightScale; // 0xAD
		::System::Byte _padding4[0x2];
		::System::Single MainLightScale; // 0xB0
		::System::Boolean active_LocalLightScale; // 0xB4
		::System::Boolean use_LocalLightScale; // 0xB5
		::System::Byte _padding5[0x2];
		::System::Single LocalLightScale; // 0xB8
		::System::Boolean active_IndirectScale; // 0xBC
		::System::Boolean use_IndirectScale; // 0xBD
		::System::Byte _padding6[0x2];
		::System::Single IndirectScale; // 0xC0
		::System::Boolean active_Tilling; // 0xC4
		::System::Boolean use_Tilling; // 0xC5
		::System::Byte _padding7[0x2];
		::System::Single Tilling; // 0xC8
		::System::Boolean active_Tint; // 0xCC
		::System::Boolean use_Tint; // 0xCD
		::System::Byte _padding8[0x2];
		::UnityEngine::Color Tint; // 0xD0
		::System::Boolean active_Strength; // 0xE0
		::System::Boolean use_Strength; // 0xE1
		::System::Byte _padding9[0x2];
		::System::Single Strength; // 0xE4
		::System::Boolean active_Tex; // 0xE8
		::System::Boolean use_Tex; // 0xE9
		::System::Byte _padding10[0x6];
		::UnityEngine::Texture* Tex; // 0xF0
		::UnityEngine::Rendering::Universal::Caustics* _Caustics; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void CopyValueFromComp(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
		}

		::System::Void ProcessFrame(::System::Object* NEEMKJBIIBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_PROCESSFRAME_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void SetValue(::System::String* KEKLFCCONCL, ::System::Single EEKENHBPKGO)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_SETVALUE_OFFSET))(this, KEKLFCCONCL, EEKENHBPKGO);
		}

		::UnityEngine::Rendering::Universal::Caustics* NGJJOCLNFFJ(::System::Object* NEEMKJBIIBC)
		{
			return ((::UnityEngine::Rendering::Universal::Caustics*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_NGJJOCLNFFJ_OFFSET))(this, NEEMKJBIIBC);
		}

		::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void GHDJIEJFFKG(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void KBDIIEDMPHD(::System::Object* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_KBDIIEDMPHD_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void OGPBBOPCBKO(::System::String* MIALFKCCCPI, ::System::Single KMGKAIDEIBA)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_OGPBBOPCBKO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
		}

		::System::Void ODLBLHOKABA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CAUSTICSBEHAVIOUR_ODLBLHOKABA_OFFSET))(this);
		}
	};
}
