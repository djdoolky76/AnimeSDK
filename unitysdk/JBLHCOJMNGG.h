#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBLHCOJMNGG_OJBBNPNNHDA.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define JBLHCOJMNGG_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1989C5B0)
#define JBLHCOJMNGG_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x1989AEB0)
#define JBLHCOJMNGG_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x1989C5D0)
#define JBLHCOJMNGG_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1989B190)
#define JBLHCOJMNGG_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1989B040)
#define JBLHCOJMNGG_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1989C5C0)
#define JBLHCOJMNGG_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1989BC50)
#define JBLHCOJMNGG__CTOR_OFFSET UNITYSDK_OFFSET(0x1989C560)

inline static constexpr unsigned int JBLHCOJMNGG_TypeDefinitionIndex = 48492;

class JBLHCOJMNGG
{
public:
	::System::Boolean IHGGNODBDIL; // 0x38
	::System::Boolean MHPABKFDIOI; // 0x39
	::System::Boolean CDPIKBAEBNF; // 0x3A
	::System::Boolean AOKBBOJBFPN; // 0x3B
	::System::Single PPEGAIOIOOF; // 0x3C
	::UnityEngine::Vector4 LJGIEIOMABE; // 0x40
	::System::Single CBENDDOAHDN; // 0x50
	::UnityEngine::Vector4 CGLLEEEAJNK; // 0x54
	::JBLHCOJMNGG_OJBBNPNNHDA IJMHNGFLIKI; // 0x64
	::System::Single GEKAMGLHJEL; // 0xC4
	::System::Single GOBLFPBAPLE; // 0xC8
	::System::Boolean BAEALODMOMC; // 0xCC
	::System::Boolean OBILBNMOJHF; // 0xCD
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector4 PFPFHEOJCGN; // 0xD0
	::System::Boolean GKLKJFKLKHE; // 0xE0
	::System::Boolean EHMMFDDMKPN; // 0xE1
	::System::Boolean PPODLGMNBNC; // 0xE2

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLHCOJMNGG__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLHCOJMNGG_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + JBLHCOJMNGG_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + JBLHCOJMNGG_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBLHCOJMNGG_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + JBLHCOJMNGG_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + JBLHCOJMNGG_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBLHCOJMNGG_MIDAMEBKOAP_OFFSET))(this);
	}
};
