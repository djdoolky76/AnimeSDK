#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKFLCBLBDAA_NMHEKJOIOAK.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define CKFLCBLBDAA_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1496F810)
#define CKFLCBLBDAA_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x1496B720)
#define CKFLCBLBDAA_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x1496F7F0)
#define CKFLCBLBDAA_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1496C020)
#define CKFLCBLBDAA_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1496BC90)
#define CKFLCBLBDAA_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1496F800)
#define CKFLCBLBDAA_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1496E2B0)
#define CKFLCBLBDAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1496F770)

inline static constexpr unsigned int CKFLCBLBDAA_TypeDefinitionIndex = 68160;

class CKFLCBLBDAA
{
public:
	::System::Boolean CGOBIJEIFKG; // 0x38
	::System::Boolean JOBKEDGKMAC; // 0x39
	::System::Boolean MJHJALKHOAN; // 0x3A
	::System::Boolean ICHEDCFBNAN; // 0x3B
	::System::Boolean NFAOJPAHMDF; // 0x3C
	::System::Boolean GKFECFJAMPB; // 0x3D
	::System::Boolean KNNJJBGKPAH; // 0x3E
	::System::Boolean MGEOMJFFHBJ; // 0x3F
	::UnityEngine::Color OINJHBMKLIM; // 0x40
	::System::Boolean OMDKKNLJBOC; // 0x50
	::System::Boolean IPJLOIJFGOK; // 0x51
	::System::Boolean KEHMLNHPLPP; // 0x52
	::System::Boolean DCCCGNADBCB; // 0x53
	::System::Single NDBFNEODLFB; // 0x54
	::System::Single FNJEAPEAEGD; // 0x58
	::System::Single JHAJCFBBNHA; // 0x5C
	::UnityEngine::Color EOMPFMNCDPH; // 0x60
	::System::Single GOBPKBOOHFG; // 0x70
	::System::Single FAAJIDGHMOD; // 0x74
	::System::Single MLPNLDPEAJC; // 0x78
	::System::Single MIBLFIFLANL; // 0x7C
	::System::Single PIAKFJLMGOD; // 0x80
	::System::Boolean EMPNAJKMOID; // 0x84
	::System::Boolean JNDIFMMDKGM; // 0x85
	::System::Boolean BOBBDPCPIHG; // 0x86
	::System::Boolean OCCAABDAIPN; // 0x87
	::UnityEngine::Color IMHKLPJJEDE; // 0x88
	::UnityEngine::Color IFMPHJAHFBN; // 0x98
	::System::Boolean ANANBIKNFHB; // 0xA8
	::System::Boolean MHPABKFDIOI; // 0xA9
	::System::Boolean CDPIKBAEBNF; // 0xAA
	::System::Boolean OKDAIHBJNHD; // 0xAB
	::System::Single JGCDPPGOOFD; // 0xAC
	::System::Boolean NKLAOJAOJID; // 0xB0
	::System::Boolean IAHFDBJKKAI; // 0xB1
	::System::Boolean GCJJKFHPBMA; // 0xB2
	::System::Boolean LNIIOJHDGJN; // 0xB3
	::System::Single FCLJKKMMJIN; // 0xB4
	::System::Single NJANIOOGKAN; // 0xB8
	::System::Single OIKLLNMDFDI; // 0xBC
	::CKFLCBLBDAA_NMHEKJOIOAK IJMHNGFLIKI; // 0xC0
	::System::Boolean HEEGPEJLDAP; // 0x190
	::System::Boolean IIOKLNEGFFA; // 0x191
	::System::Boolean PMLEBPIIMEG; // 0x192
	::System::Boolean KOGEBALHGAG; // 0x193
	::System::Single PCOLIHFPEMI; // 0x194
	::System::Single MJAJCPBMBCO; // 0x198
	::System::Boolean EBJHADJLKKK; // 0x19C
	::System::Boolean GCGGJNLLMBL; // 0x19D
	::System::Boolean OEADMBNJICL; // 0x19E
	::System::Boolean OCMGGOFJAFK; // 0x19F

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFLCBLBDAA__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFLCBLBDAA_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CKFLCBLBDAA_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CKFLCBLBDAA_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFLCBLBDAA_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKFLCBLBDAA_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + CKFLCBLBDAA_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + CKFLCBLBDAA_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
