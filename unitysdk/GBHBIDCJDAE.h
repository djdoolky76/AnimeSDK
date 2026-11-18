#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBHBIDCJDAE_NAGJCIOBBCP.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define GBHBIDCJDAE_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x179CAF20)
#define GBHBIDCJDAE_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x179C8110)
#define GBHBIDCJDAE_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x179CAF30)
#define GBHBIDCJDAE_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x179C8590)
#define GBHBIDCJDAE_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x179C8370)
#define GBHBIDCJDAE_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x179CAF40)
#define GBHBIDCJDAE_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x179C9F80)
#define GBHBIDCJDAE__CTOR_OFFSET UNITYSDK_OFFSET(0x179CAEC0)

inline static constexpr unsigned int GBHBIDCJDAE_TypeDefinitionIndex = 63789;

class GBHBIDCJDAE
{
public:
	::System::Single PMNGIAFHPBL; // 0x38
	::System::Boolean GJFPPGPMBIB; // 0x3C
	::System::Boolean HIDDDJPJMGH; // 0x3D
	::System::Boolean AFGIINNCAOA; // 0x3E
	::System::Boolean KJFJBPGDKDK; // 0x3F
	::System::Boolean MHPABKFDIOI; // 0x40
	::System::Boolean FJCOHCNEHKA; // 0x41
	::System::Boolean CKOCJFKBCPN; // 0x42
	::System::Boolean GPCPNBKCMJE; // 0x43
	::System::Single APJEHLINPBF; // 0x44
	::System::Int32 DBDGDLMLGJC; // 0x48
	::System::Int32 NCABAEEBFAC; // 0x4C
	::System::Int32 KNEDIAGLCOI; // 0x50
	::System::Boolean CDPIKBAEBNF; // 0x54
	::System::Boolean BADHDNHEJIC; // 0x55
	::System::Byte _padding0[0x2];
	::System::Int32 CKIFKNAPIDG; // 0x58
	::System::Boolean OCDNHDKDGHK; // 0x5C
	::System::Boolean NJMIBNIFPGM; // 0x5D
	::System::Boolean KPPHPONOKIF; // 0x5E
	::System::Boolean LDBIHFIOIID; // 0x5F
	::System::Single KOCACKOIIFK; // 0x60
	::System::Boolean PMOJBNAFCNM; // 0x64
	::System::Boolean MMKDFBMHDIA; // 0x65
	::System::Boolean DOKNPLOGIBK; // 0x66
	::System::Boolean JBLABFJAKDJ; // 0x67
	::System::Single DCOLHGMEMOI; // 0x68
	::GBHBIDCJDAE_NAGJCIOBBCP IJMHNGFLIKI; // 0x6C
	::System::Single MJMLBEAAKDE; // 0xD0
	::System::Boolean IABACJLJOPL; // 0xD4
	::System::Boolean KGIJCNAKBEE; // 0xD5
	::System::Boolean LGIIFAAGHCP; // 0xD6
	::System::Boolean IMBJKOMBFLG; // 0xD7
	::System::Single EFJJBLDHICC; // 0xD8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHBIDCJDAE__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHBIDCJDAE_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + GBHBIDCJDAE_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GBHBIDCJDAE_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + GBHBIDCJDAE_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHBIDCJDAE_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + GBHBIDCJDAE_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBHBIDCJDAE_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
