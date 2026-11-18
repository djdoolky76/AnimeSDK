#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NICHNBOLCLJ_OLLLPIBBACK.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define NICHNBOLCLJ_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x11F7A740)
#define NICHNBOLCLJ_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x11F78D70)
#define NICHNBOLCLJ_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x11F7A760)
#define NICHNBOLCLJ_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x11F790B0)
#define NICHNBOLCLJ_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x11F78F30)
#define NICHNBOLCLJ_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x11F7A750)
#define NICHNBOLCLJ_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x11F79D60)
#define NICHNBOLCLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11F7A710)

inline static constexpr unsigned int NICHNBOLCLJ_TypeDefinitionIndex = 84133;

class NICHNBOLCLJ
{
public:
	::NICHNBOLCLJ_OLLLPIBBACK IJMHNGFLIKI; // 0x38
	::System::Boolean CDPIKBAEBNF; // 0x84
	::System::Boolean MKFMKPCOAPJ; // 0x85
	::System::Boolean LKGHAAJJPAP; // 0x86
	::System::Boolean JJNMBEMPDBE; // 0x87
	::System::Boolean HDPJHHAMLIJ; // 0x88
	::System::Boolean BPICOFODBPG; // 0x89
	::System::Boolean BFEGHIHCBFK; // 0x8A
	::System::Boolean MEHFHEDELBD; // 0x8B
	::System::Boolean BJHFJONNFEA; // 0x8C
	::System::Boolean MHPABKFDIOI; // 0x8D
	::System::Boolean LKIDEIKKGOD; // 0x8E
	::System::Byte _padding0[0x1];
	::System::Single KOOGNHEEKAN; // 0x90
	::System::Single GMELAJLGHCB; // 0x94
	::System::Single HLGNJHPBMCA; // 0x98
	::System::Single DPKDKGKCJNO; // 0x9C
	::System::Single OODPPNJBJDE; // 0xA0
	::System::Single DNBBLEPPOCI; // 0xA4
	::System::Single KJNCAPAHJMO; // 0xA8
	::System::Single BBCFAIPCFOM; // 0xAC
	::System::Single PCKABOIHDIK; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICHNBOLCLJ__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICHNBOLCLJ_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NICHNBOLCLJ_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NICHNBOLCLJ_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NICHNBOLCLJ_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NICHNBOLCLJ_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NICHNBOLCLJ_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NICHNBOLCLJ_MIDAMEBKOAP_OFFSET))(this);
	}
};
