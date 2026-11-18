#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOIJIFPAGEJ_LGCOHMFEIDL.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define IOIJIFPAGEJ_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x16AB6130)
#define IOIJIFPAGEJ_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x16AB4BF0)
#define IOIJIFPAGEJ_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x16AB6120)
#define IOIJIFPAGEJ_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x16AB4E80)
#define IOIJIFPAGEJ_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16AB4D70)
#define IOIJIFPAGEJ_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x16AB6140)
#define IOIJIFPAGEJ_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16AB5880)
#define IOIJIFPAGEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16AB60E0)

inline static constexpr unsigned int IOIJIFPAGEJ_TypeDefinitionIndex = 64270;

class IOIJIFPAGEJ
{
public:
	::IOIJIFPAGEJ_LGCOHMFEIDL IJMHNGFLIKI; // 0x38
	::System::Single OCIANCLMDKO; // 0x70
	::UnityEngine::Vector2 MKEGNKPNOAB; // 0x74
	::System::Boolean CNLNONOIFAB; // 0x7C
	::System::Boolean DGINNBDKDJL; // 0x7D
	::System::Boolean COFIDAHNKPK; // 0x7E
	::System::Boolean CDPIKBAEBNF; // 0x7F
	::System::Single KOCABCFPMOH; // 0x80
	::System::Single KNCCJHLEEID; // 0x84
	::System::Boolean OIOGCGMCBNF; // 0x88
	::System::Boolean NJFDGKFBOPD; // 0x89
	::System::Boolean MHPABKFDIOI; // 0x8A
	::System::Boolean HBFLALCKPAK; // 0x8B
	::System::Single INFCANFOFKF; // 0x8C
	::System::Single KDBOCPCLPBG; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOIJIFPAGEJ__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOIJIFPAGEJ_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IOIJIFPAGEJ_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IOIJIFPAGEJ_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOIJIFPAGEJ_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IOIJIFPAGEJ_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IOIJIFPAGEJ_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IOIJIFPAGEJ_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
