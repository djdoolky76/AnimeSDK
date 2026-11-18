#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNJNMLIJKFI_LCNKIODHPCH.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define HNJNMLIJKFI_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15DCDFE0)
#define HNJNMLIJKFI_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x15DCCDE0)
#define HNJNMLIJKFI_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x15DCDFC0)
#define HNJNMLIJKFI_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x15DCCFC0)
#define HNJNMLIJKFI_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15DCCEE0)
#define HNJNMLIJKFI_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15DCDFD0)
#define HNJNMLIJKFI_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15DCD840)
#define HNJNMLIJKFI__CTOR_OFFSET UNITYSDK_OFFSET(0x15DCDF90)

inline static constexpr unsigned int HNJNMLIJKFI_TypeDefinitionIndex = 40218;

class HNJNMLIJKFI
{
public:
	::HNJNMLIJKFI_LCNKIODHPCH IJMHNGFLIKI; // 0x38
	::System::Single OOAOEGILPDH; // 0x5C
	::System::Boolean LIJIGKJMBBD; // 0x60
	::System::Boolean LGFKANMHBBN; // 0x61
	::System::Boolean CDPIKBAEBNF; // 0x62
	::System::Boolean CJOAKEEFPNH; // 0x63
	::System::Single MLDKODBMHIF; // 0x64
	::System::Single NOJCCCKPLCH; // 0x68
	::System::Single HEPJPHNAGLF; // 0x6C
	::System::Boolean CMGDCIGNFJK; // 0x70
	::System::Boolean MHPABKFDIOI; // 0x71
	::System::Boolean EEMEDEKJOOB; // 0x72
	::System::Boolean NGFEOAKMMEH; // 0x73

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJNMLIJKFI__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJNMLIJKFI_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HNJNMLIJKFI_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HNJNMLIJKFI_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNJNMLIJKFI_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HNJNMLIJKFI_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HNJNMLIJKFI_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNJNMLIJKFI_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
