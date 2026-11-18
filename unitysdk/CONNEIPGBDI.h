#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CONNEIPGBDI_HDMDOGIAIBG.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define CONNEIPGBDI_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1204B550)
#define CONNEIPGBDI_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x1204AB10)
#define CONNEIPGBDI_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x1204B560)
#define CONNEIPGBDI_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1204AC10)
#define CONNEIPGBDI_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1204AB80)
#define CONNEIPGBDI_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1204B570)
#define CONNEIPGBDI_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1204AF70)
#define CONNEIPGBDI__CTOR_OFFSET UNITYSDK_OFFSET(0x1204B540)

inline static constexpr unsigned int CONNEIPGBDI_TypeDefinitionIndex = 52072;

class CONNEIPGBDI
{
public:
	::System::Boolean CDPIKBAEBNF; // 0x38
	::System::Boolean MHPABKFDIOI; // 0x39
	::System::Boolean LEEFBMFNIMP; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Single HLNGODNMABG; // 0x3C
	::CONNEIPGBDI_HDMDOGIAIBG IJMHNGFLIKI; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONNEIPGBDI__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONNEIPGBDI_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CONNEIPGBDI_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CONNEIPGBDI_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CONNEIPGBDI_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CONNEIPGBDI_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONNEIPGBDI_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CONNEIPGBDI_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}
};
