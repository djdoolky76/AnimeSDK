#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFOPNAEBMNM_DGJNHAPBNMN.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define PFOPNAEBMNM_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x150C7680)
#define PFOPNAEBMNM_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x150C6150)
#define PFOPNAEBMNM_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x150C76A0)
#define PFOPNAEBMNM_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x150C63F0)
#define PFOPNAEBMNM_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x150C62E0)
#define PFOPNAEBMNM_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x150C7690)
#define PFOPNAEBMNM_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x150C6DE0)
#define PFOPNAEBMNM__CTOR_OFFSET UNITYSDK_OFFSET(0x150C7640)

inline static constexpr unsigned int PFOPNAEBMNM_TypeDefinitionIndex = 39970;

class PFOPNAEBMNM
{
public:
	::System::Single EEGMPNJHCEH; // 0x38
	::System::Single DCNLCJKJFMA; // 0x3C
	::System::Single NIMGFBFOCHM; // 0x40
	::UnityEngine::Vector2 KEBMNHAIDBF; // 0x44
	::System::Boolean MHPABKFDIOI; // 0x4C
	::System::Boolean MBODLOINMAG; // 0x4D
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector2 BPPPMOFGJJA; // 0x50
	::PFOPNAEBMNM_DGJNHAPBNMN IJMHNGFLIKI; // 0x58
	::System::Boolean EOODJMAMOJO; // 0x90
	::System::Boolean CDPIKBAEBNF; // 0x91
	::System::Boolean FJKNDGONLNM; // 0x92
	::System::Boolean PMJGCAOOHJL; // 0x93
	::System::Boolean MPALIPEKPNG; // 0x94
	::System::Boolean ODIIAELMOAL; // 0x95
	::System::Boolean OHMILBPOCNL; // 0x96

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOPNAEBMNM__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOPNAEBMNM_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + PFOPNAEBMNM_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + PFOPNAEBMNM_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PFOPNAEBMNM_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + PFOPNAEBMNM_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + PFOPNAEBMNM_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFOPNAEBMNM_MIDAMEBKOAP_OFFSET))(this);
	}
};
