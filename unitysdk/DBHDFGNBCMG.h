#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBHDFGNBCMG_BEJCGMFPBHA.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define DBHDFGNBCMG_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x193F8780)
#define DBHDFGNBCMG_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x193F7920)
#define DBHDFGNBCMG_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x193F8760)
#define DBHDFGNBCMG_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x193F7AB0)
#define DBHDFGNBCMG_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x193F79F0)
#define DBHDFGNBCMG_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x193F8770)
#define DBHDFGNBCMG_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x193F8090)
#define DBHDFGNBCMG__CTOR_OFFSET UNITYSDK_OFFSET(0x193F8730)

inline static constexpr unsigned int DBHDFGNBCMG_TypeDefinitionIndex = 75911;

class DBHDFGNBCMG
{
public:
	::System::Boolean CDPIKBAEBNF; // 0x38
	::System::Boolean IHGGNODBDIL; // 0x39
	::System::Boolean HIALAEDAJLF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Single BONAPJOBPDA; // 0x3C
	::DBHDFGNBCMG_BEJCGMFPBHA IJMHNGFLIKI; // 0x40
	::UnityEngine::Color LJGIEIOMABE; // 0x74
	::System::Boolean MHPABKFDIOI; // 0x84
	::System::Boolean EHMMFDDMKPN; // 0x85
	::System::Byte _padding1[0x2];
	::UnityEngine::Color CGLLEEEAJNK; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHDFGNBCMG__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHDFGNBCMG_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DBHDFGNBCMG_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DBHDFGNBCMG_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBHDFGNBCMG_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBHDFGNBCMG_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + DBHDFGNBCMG_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + DBHDFGNBCMG_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
