#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEDODBKHGND_IDGHHMMICKP.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define NEDODBKHGND_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1313C7A0)
#define NEDODBKHGND_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x1313B900)
#define NEDODBKHGND_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x1313C7B0)
#define NEDODBKHGND_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1313BAC0)
#define NEDODBKHGND_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1313B9F0)
#define NEDODBKHGND_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1313C7C0)
#define NEDODBKHGND_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1313C0B0)
#define NEDODBKHGND__CTOR_OFFSET UNITYSDK_OFFSET(0x1313C770)

inline static constexpr unsigned int NEDODBKHGND_TypeDefinitionIndex = 54755;

class NEDODBKHGND
{
public:
	::UnityEngine::Vector4 DBIKPEEKPFO; // 0x38
	::UnityEngine::Vector4 LIILFKIOBCH; // 0x48
	::NEDODBKHGND_IDGHHMMICKP IJMHNGFLIKI; // 0x58
	::UnityEngine::Vector4 AAPBHCBIHAI; // 0x98
	::System::Boolean DMCFOEIDDPI; // 0xA8
	::System::Boolean CDPIKBAEBNF; // 0xA9
	::System::Boolean FCHCKHNHPEC; // 0xAA
	::System::Boolean MHPABKFDIOI; // 0xAB
	::System::Boolean BIDMBKGBHPH; // 0xAC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDODBKHGND__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDODBKHGND_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NEDODBKHGND_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NEDODBKHGND_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + NEDODBKHGND_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEDODBKHGND_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEDODBKHGND_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + NEDODBKHGND_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}
};
