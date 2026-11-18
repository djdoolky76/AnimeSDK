#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHHBDOEIKMC_GDFCNDLFKIN.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DepthOfFieldMode.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofBlurQuality.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DofDebugMode.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define KHHBDOEIKMC_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x18628580)
#define KHHBDOEIKMC_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x186259E0)
#define KHHBDOEIKMC_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x186285A0)
#define KHHBDOEIKMC_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x18625EA0)
#define KHHBDOEIKMC_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x18625C80)
#define KHHBDOEIKMC_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x18628590)
#define KHHBDOEIKMC_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x186274F0)
#define KHHBDOEIKMC__CTOR_OFFSET UNITYSDK_OFFSET(0x18628520)

inline static constexpr unsigned int KHHBDOEIKMC_TypeDefinitionIndex = 54412;

class KHHBDOEIKMC
{
public:
	::System::Boolean NJBKFDLHIMK; // 0x38
	::System::Boolean MAHKCDOBNKN; // 0x39
	::System::Boolean HHIFDHHBMIB; // 0x3A
	::System::Boolean DPANKKGLDFE; // 0x3B
	::System::Boolean JNFLNEIFKJM; // 0x3C
	::System::Boolean CGIEFHNFONK; // 0x3D
	::System::Boolean MHPABKFDIOI; // 0x3E
	::System::Boolean HCJDMPKACDO; // 0x3F
	::UnityEngine::Rendering::Universal::DepthOfFieldMode EJHGOKAMACC; // 0x40
	::System::Single GFFPKPIKAAP; // 0x44
	::KHHBDOEIKMC_GDFCNDLFKIN IJMHNGFLIKI; // 0x48
	::System::Single JDCLOAPCBDD; // 0xB4
	::System::Single KMPNEMDOHDH; // 0xB8
	::System::Single AMMKFFLGBLN; // 0xBC
	::System::Boolean DJKBAPEMAEL; // 0xC0
	::System::Boolean DOLCHBDKKDP; // 0xC1
	::System::Boolean IOAEPHOLEFE; // 0xC2
	::System::Boolean CDPIKBAEBNF; // 0xC3
	::System::Boolean HECJNDILPDA; // 0xC4
	::System::Boolean OEBCCJDFNLH; // 0xC5
	::System::Boolean JAFAEFBMMBH; // 0xC6
	::System::Boolean ANIICDAFLMP; // 0xC7
	::System::Single LEFCNADDNPE; // 0xC8
	::System::Boolean HFFHAFJAJJK; // 0xCC
	::System::Boolean CGGDCDBIKCC; // 0xCD
	::System::Boolean FCNAMADJFDA; // 0xCE
	::System::Boolean LMIDGJDKCHC; // 0xCF
	::UnityEngine::Rendering::Universal::DofBlurQuality HJIHEMFDDON; // 0xD0
	::System::Int32 IMAADMDCFGH; // 0xD4
	::System::Single GDJEODCNGKJ; // 0xD8
	::UnityEngine::Rendering::Universal::DofDebugMode JIFNPBHELJG; // 0xDC
	::System::Single BLELKBFJIIM; // 0xE0
	::System::Single GKGAPMMEANL; // 0xE4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBDOEIKMC__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBDOEIKMC_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KHHBDOEIKMC_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KHHBDOEIKMC_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHHBDOEIKMC_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + KHHBDOEIKMC_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + KHHBDOEIKMC_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHBDOEIKMC_MIDAMEBKOAP_OFFSET))(this);
	}
};
