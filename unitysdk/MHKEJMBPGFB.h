#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MHKEJMBPGFB_HCGLOBBDCEI.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define MHKEJMBPGFB_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x10752840)
#define MHKEJMBPGFB_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x10751900)
#define MHKEJMBPGFB_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x10752830)
#define MHKEJMBPGFB_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x10751A50)
#define MHKEJMBPGFB_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x107519A0)
#define MHKEJMBPGFB_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x10752850)
#define MHKEJMBPGFB_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x10752160)
#define MHKEJMBPGFB__CTOR_OFFSET UNITYSDK_OFFSET(0x10752800)

inline static constexpr unsigned int MHKEJMBPGFB_TypeDefinitionIndex = 85038;

class MHKEJMBPGFB
{
public:
	::System::Boolean MHPABKFDIOI; // 0x38
	::System::Boolean MLEKOIJDHCD; // 0x39
	::System::Boolean OGHPOADIING; // 0x3A
	::System::Boolean DMMJHLMLAAP; // 0x3B
	::MHKEJMBPGFB_HCGLOBBDCEI IJMHNGFLIKI; // 0x3C
	::System::Boolean CDPIKBAEBNF; // 0x50
	::System::Boolean BMKCNIPBLDG; // 0x51
	::System::Byte _padding0[0x2];
	::System::Single FAMMFFOFPOH; // 0x54
	::System::Int32 GOKFLFLFDKD; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKEJMBPGFB__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKEJMBPGFB_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MHKEJMBPGFB_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MHKEJMBPGFB_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHKEJMBPGFB_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKEJMBPGFB_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MHKEJMBPGFB_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MHKEJMBPGFB_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}
};
