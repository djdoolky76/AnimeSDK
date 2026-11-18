#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHFJJHDFIIK_CNGDCPLHCOG.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define AHFJJHDFIIK_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x17DD6D60)
#define AHFJJHDFIIK_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x17DD6160)
#define AHFJJHDFIIK_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x17DD6D70)
#define AHFJJHDFIIK_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x17DD6290)
#define AHFJJHDFIIK_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17DD61F0)
#define AHFJJHDFIIK_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x17DD6D50)
#define AHFJJHDFIIK_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17DD6730)
#define AHFJJHDFIIK__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD6D40)

inline static constexpr unsigned int AHFJJHDFIIK_TypeDefinitionIndex = 74816;

class AHFJJHDFIIK
{
public:
	::System::Single FHPNBGCKFBI; // 0x38
	::AHFJJHDFIIK_CNGDCPLHCOG IJMHNGFLIKI; // 0x3C
	::System::Single HCPEDBAFCHL; // 0x50
	::System::Boolean CDPIKBAEBNF; // 0x54
	::System::Boolean MHPABKFDIOI; // 0x55
	::System::Boolean DIOINOMLLPF; // 0x56
	::System::Boolean HKJEJIEOAKG; // 0x57

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJJHDFIIK__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJJHDFIIK_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AHFJJHDFIIK_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AHFJJHDFIIK_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AHFJJHDFIIK_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AHFJJHDFIIK_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AHFJJHDFIIK_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFJJHDFIIK_MIDAMEBKOAP_OFFSET))(this);
	}
};
