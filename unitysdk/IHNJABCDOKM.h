#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHNJABCDOKM_BICCDIJKLMO.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SampleCountLevel.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define IHNJABCDOKM_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x160A95A0)
#define IHNJABCDOKM_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x160A66F0)
#define IHNJABCDOKM_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x160A95B0)
#define IHNJABCDOKM_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x160A6BE0)
#define IHNJABCDOKM_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x160A6990)
#define IHNJABCDOKM_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x160A9590)
#define IHNJABCDOKM_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x160A8560)
#define IHNJABCDOKM__CTOR_OFFSET UNITYSDK_OFFSET(0x160A9520)

inline static constexpr unsigned int IHNJABCDOKM_TypeDefinitionIndex = 60770;

class IHNJABCDOKM
{
public:
	::System::Boolean LCHNIELKLLA; // 0x38
	::System::Boolean BPONPCNHNDG; // 0x39
	::System::Boolean DIOINOMLLPF; // 0x3A
	::System::Boolean CHIJOJNOKMM; // 0x3B
	::System::Boolean CCEMMHIKPHE; // 0x3C
	::System::Boolean LCAFGIFBEEH; // 0x3D
	::System::Boolean HFDJBKECEIC; // 0x3E
	::System::Boolean KMOIKEBHIGO; // 0x3F
	::System::Boolean BCFFMJEDHKI; // 0x40
	::System::Boolean HBFLALCKPAK; // 0x41
	::System::Boolean MHPABKFDIOI; // 0x42
	::System::Boolean IIDFOJOFOCL; // 0x43
	::System::Single BEJEHFCJMMA; // 0x44
	::System::Boolean FHFOLFFOHJH; // 0x48
	::System::Boolean KIOBNIIMMGD; // 0x49
	::System::Boolean DMMJHLMLAAP; // 0x4A
	::System::Boolean HKPENDKMHAC; // 0x4B
	::System::Single GEEMKIKDHLB; // 0x4C
	::System::Single KFPGDPFOENA; // 0x50
	::System::Single OCIANCLMDKO; // 0x54
	::System::Boolean JOPENFJKBOO; // 0x58
	::System::Boolean CDPIKBAEBNF; // 0x59
	::System::Boolean GOHGFOCDJCP; // 0x5A
	::System::Boolean IEDPMGNEOIE; // 0x5B
	::UnityEngine::Color FHPNBGCKFBI; // 0x5C
	::System::Int32 HAADEEPJOMM; // 0x6C
	::System::Boolean EONKIPICLBN; // 0x70
	::System::Boolean FAEMLPCAHCH; // 0x71
	::System::Byte _padding0[0x2];
	::UnityEngine::NAPRenderPipeline0::SampleCountLevel GOKFLFLFDKD; // 0x74
	::System::Single EJCBPEKEGHJ; // 0x78
	::System::Int32 PDBNEPCLKLN; // 0x7C
	::System::Single MOJPDNOKHAB; // 0x80
	::System::Single OLENFMNLKJO; // 0x84
	::System::Single KKEKGIFMIEK; // 0x88
	::IHNJABCDOKM_BICCDIJKLMO IJMHNGFLIKI; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNJABCDOKM__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNJABCDOKM_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IHNJABCDOKM_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IHNJABCDOKM_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IHNJABCDOKM_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IHNJABCDOKM_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHNJABCDOKM_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IHNJABCDOKM_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
