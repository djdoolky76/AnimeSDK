#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECJHCFBKICA_MDCKPPLJEEJ.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define ECJHCFBKICA_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x16BD0E90)
#define ECJHCFBKICA_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x16BCEFA0)
#define ECJHCFBKICA_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x16BD0EA0)
#define ECJHCFBKICA_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x16BCF390)
#define ECJHCFBKICA_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16BCF220)
#define ECJHCFBKICA_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x16BD0E80)
#define ECJHCFBKICA_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16BD0390)
#define ECJHCFBKICA__CTOR_OFFSET UNITYSDK_OFFSET(0x16BD0E50)

inline static constexpr unsigned int ECJHCFBKICA_TypeDefinitionIndex = 39331;

class ECJHCFBKICA
{
public:
	::System::Boolean MHPABKFDIOI; // 0x38
	::System::Boolean CADAMIFAKEA; // 0x39
	::System::Boolean CDPIKBAEBNF; // 0x3A
	::System::Boolean LLBABNHLDPB; // 0x3B
	::System::Boolean BCCNOCNIHDK; // 0x3C
	::System::Boolean FCNAPDHKFEF; // 0x3D
	::System::Boolean LGFLGNIFKBL; // 0x3E
	::System::Boolean HPLAPPKFJDE; // 0x3F
	::System::Single JKHLIMELPLI; // 0x40
	::System::Single LGALHEHDDFF; // 0x44
	::System::Boolean LAMHLBHCEKB; // 0x48
	::System::Boolean NPGCPCPCGJD; // 0x49
	::System::Boolean BPEIPDELDCE; // 0x4A
	::System::Boolean GAAAHBGMJBH; // 0x4B
	::System::Boolean MAENKLCFFHM; // 0x4C
	::System::Boolean FFLLPBHBENA; // 0x4D
	::System::Boolean IMJLNPDOCNE; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Single FGIGLFJLCEG; // 0x50
	::System::Single LJLBGNKKEPG; // 0x54
	::System::Single MEEIOAOPCLM; // 0x58
	::System::Single DCPKPNJNKMJ; // 0x5C
	::ECJHCFBKICA_MDCKPPLJEEJ IJMHNGFLIKI; // 0x60
	::System::Single FLLIJKELHAM; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJHCFBKICA__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJHCFBKICA_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + ECJHCFBKICA_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + ECJHCFBKICA_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + ECJHCFBKICA_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + ECJHCFBKICA_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECJHCFBKICA_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECJHCFBKICA_MIDAMEBKOAP_OFFSET))(this);
	}
};
