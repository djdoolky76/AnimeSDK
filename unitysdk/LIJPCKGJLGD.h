#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIJPCKGJLGD_DGHALEABEMM.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Texture; }

#define LIJPCKGJLGD_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15E01330)
#define LIJPCKGJLGD_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x15DFEF40)
#define LIJPCKGJLGD_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x15E01340)
#define LIJPCKGJLGD_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x15DFF500)
#define LIJPCKGJLGD_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15DFF320)
#define LIJPCKGJLGD_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15E01320)
#define LIJPCKGJLGD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15E00600)
#define LIJPCKGJLGD__CTOR_OFFSET UNITYSDK_OFFSET(0x15E012C0)

inline static constexpr unsigned int LIJPCKGJLGD_TypeDefinitionIndex = 87771;

class LIJPCKGJLGD
{
public:
	::UnityEngine::Texture* DNMELBNALGJ; // 0x38
	::LIJPCKGJLGD_DGHALEABEMM IJMHNGFLIKI; // 0x40
	::System::Single HKGBNFGNMDG; // 0xB0
	::System::Single OJKCBLEGMEG; // 0xB4
	::System::Single IPBMMOKKHEH; // 0xB8
	::System::Single MIBFOHFAHGG; // 0xBC
	::System::Single JBIFDBEDMIE; // 0xC0
	::System::Single AOACDIOHNCO; // 0xC4
	::System::Boolean IDGMJPFDFKE; // 0xC8
	::System::Boolean APBMLEDJPNN; // 0xC9
	::System::Boolean EIKKGAJALFM; // 0xCA
	::System::Boolean BDIDGGIAMGH; // 0xCB
	::System::Boolean HCJOHPACKNL; // 0xCC
	::System::Boolean JMIONKGIPDL; // 0xCD
	::System::Boolean MGCDAFMAFLF; // 0xCE
	::System::Boolean MHPABKFDIOI; // 0xCF
	::System::Boolean BPFGJKMNLIC; // 0xD0
	::System::Boolean OFDLKNIOGGE; // 0xD1
	::System::Boolean FCONBGGHDAI; // 0xD2
	::System::Byte _padding0[0x1];
	::UnityEngine::Color EFKJJHFDKAB; // 0xD4
	::System::Boolean KCCPKFGBJLK; // 0xE4
	::System::Boolean GPIKKNBLMLA; // 0xE5
	::System::Boolean CDPIKBAEBNF; // 0xE6
	::System::Boolean DLKGNJFFAKP; // 0xE7
	::System::Single BFLHMPHLLHP; // 0xE8
	::System::Single PKHBKBGIKIF; // 0xEC
	::System::Single FPFPBNNLHIC; // 0xF0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJPCKGJLGD__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJPCKGJLGD_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LIJPCKGJLGD_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LIJPCKGJLGD_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + LIJPCKGJLGD_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + LIJPCKGJLGD_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LIJPCKGJLGD_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIJPCKGJLGD_MIDAMEBKOAP_OFFSET))(this);
	}
};
