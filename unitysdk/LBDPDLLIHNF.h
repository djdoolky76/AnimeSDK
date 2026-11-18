#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LBDPDLLIHNF_NENIBBGAJLC.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define LBDPDLLIHNF_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x16356730)
#define LBDPDLLIHNF_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x163553B0)
#define LBDPDLLIHNF_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x16356750)
#define LBDPDLLIHNF_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x16355580)
#define LBDPDLLIHNF_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x163554A0)
#define LBDPDLLIHNF_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x16356740)
#define LBDPDLLIHNF_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16355F80)
#define LBDPDLLIHNF__CTOR_OFFSET UNITYSDK_OFFSET(0x16356710)

inline static constexpr unsigned int LBDPDLLIHNF_TypeDefinitionIndex = 51719;

class LBDPDLLIHNF
{
public:
	::System::Single OEOLINOMKPF; // 0x38
	::System::Int32 JBCIOEGIBMO; // 0x3C
	::System::Int32 LHLGNEHOBFG; // 0x40
	::LBDPDLLIHNF_NENIBBGAJLC IJMHNGFLIKI; // 0x44
	::System::Single GEEMKIKDHLB; // 0x6C
	::System::Boolean LCHNIELKLLA; // 0x70
	::System::Boolean ODMBKIGKOPM; // 0x71
	::System::Boolean MHPABKFDIOI; // 0x72
	::System::Boolean MAPGMADDDBL; // 0x73
	::System::Boolean ELCHKBKCLOL; // 0x74
	::System::Boolean CDPIKBAEBNF; // 0x75
	::System::Boolean IIKNELFHNCL; // 0x76
	::System::Boolean FFPKLJEOCAN; // 0x77

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDPDLLIHNF__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDPDLLIHNF_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LBDPDLLIHNF_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LBDPDLLIHNF_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBDPDLLIHNF_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LBDPDLLIHNF_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LBDPDLLIHNF_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDPDLLIHNF_MIDAMEBKOAP_OFFSET))(this);
	}
};
