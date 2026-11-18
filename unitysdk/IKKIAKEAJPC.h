#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKKIAKEAJPC_HDLCBEJKOKC.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Texture; }

#define IKKIAKEAJPC_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x15ED3280)
#define IKKIAKEAJPC_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x15ED1A70)
#define IKKIAKEAJPC_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x15ED3260)
#define IKKIAKEAJPC_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x15ED1CE0)
#define IKKIAKEAJPC_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x15ED1BC0)
#define IKKIAKEAJPC_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x15ED3270)
#define IKKIAKEAJPC_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x15ED2900)
#define IKKIAKEAJPC__CTOR_OFFSET UNITYSDK_OFFSET(0x15ED3240)

inline static constexpr unsigned int IKKIAKEAJPC_TypeDefinitionIndex = 79911;

class IKKIAKEAJPC
{
public:
	::IKKIAKEAJPC_HDLCBEJKOKC IJMHNGFLIKI; // 0x38
	::UnityEngine::Texture* KDOKMHKLHJG; // 0x70
	::System::Boolean IDAMLMIHEHC; // 0x78
	::System::Boolean CDPIKBAEBNF; // 0x79
	::System::Boolean ONAMDGBBOEJ; // 0x7A
	::System::Boolean LCHNIELKLLA; // 0x7B
	::System::Boolean COLHPDKLLEA; // 0x7C
	::System::Boolean IDMANOKHGPM; // 0x7D
	::System::Boolean BCIOFCKHIIN; // 0x7E
	::System::Boolean NHHCILBGGLC; // 0x7F
	::System::Int32 CCEMMHIKPHE; // 0x80
	::System::Single EADHNDEJONJ; // 0x84
	::System::Boolean KJGKKHANGJE; // 0x88
	::System::Boolean KIOBNIIMMGD; // 0x89
	::System::Boolean MHPABKFDIOI; // 0x8A
	::System::Byte _padding0[0x1];
	::System::Single HMEHCDEEEPE; // 0x8C
	::System::Single GEEMKIKDHLB; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKIAKEAJPC__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKIAKEAJPC_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IKKIAKEAJPC_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IKKIAKEAJPC_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKKIAKEAJPC_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKIAKEAJPC_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + IKKIAKEAJPC_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + IKKIAKEAJPC_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
