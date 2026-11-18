#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LNGMPGFHBIJ_KAKJGOCGJEJ.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define LNGMPGFHBIJ_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x151AE030)
#define LNGMPGFHBIJ_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x151ACAD0)
#define LNGMPGFHBIJ_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x151AE050)
#define LNGMPGFHBIJ_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x151ACCD0)
#define LNGMPGFHBIJ_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x151ACBE0)
#define LNGMPGFHBIJ_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x151AE040)
#define LNGMPGFHBIJ_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x151AD7D0)
#define LNGMPGFHBIJ__CTOR_OFFSET UNITYSDK_OFFSET(0x151AE010)

inline static constexpr unsigned int LNGMPGFHBIJ_TypeDefinitionIndex = 78091;

class LNGMPGFHBIJ
{
public:
	::System::Single PDJKHPKBLFD; // 0x38
	::LNGMPGFHBIJ_KAKJGOCGJEJ IJMHNGFLIKI; // 0x3C
	::System::Boolean CLAFIKPPDCP; // 0x64
	::System::Boolean JAFAEFBMMBH; // 0x65
	::System::Boolean JIFNPBHELJG; // 0x66
	::System::Boolean FFIIPMJBDMP; // 0x67
	::System::Single NLLBANODGHC; // 0x68
	::System::Single GEEMKIKDHLB; // 0x6C
	::System::Boolean LCHNIELKLLA; // 0x70
	::System::Boolean PNFLIAAKFDF; // 0x71
	::System::Boolean DMMJHLMLAAP; // 0x72
	::System::Boolean JFCKMFBJMFM; // 0x73
	::System::Boolean CDPIKBAEBNF; // 0x74
	::System::Boolean MHPABKFDIOI; // 0x75
	::System::Byte _padding0[0x2];
	::System::Int32 GOKFLFLFDKD; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGMPGFHBIJ__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGMPGFHBIJ_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LNGMPGFHBIJ_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LNGMPGFHBIJ_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LNGMPGFHBIJ_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNGMPGFHBIJ_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LNGMPGFHBIJ_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGMPGFHBIJ_MIDAMEBKOAP_OFFSET))(this);
	}
};
