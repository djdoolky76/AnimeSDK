#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLMPGPJOKLD_ELEFFIIBCBG.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Texture; }

#define MLMPGPJOKLD_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1A69B3A0)
#define MLMPGPJOKLD_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x1A69A3A0)
#define MLMPGPJOKLD_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x1A69B390)
#define MLMPGPJOKLD_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x1A69A550)
#define MLMPGPJOKLD_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1A69A480)
#define MLMPGPJOKLD_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1A69B3B0)
#define MLMPGPJOKLD_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1A69AC40)
#define MLMPGPJOKLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A69B370)

inline static constexpr unsigned int MLMPGPJOKLD_TypeDefinitionIndex = 53182;

class MLMPGPJOKLD
{
public:
	::MLMPGPJOKLD_ELEFFIIBCBG IJMHNGFLIKI; // 0x38
	::UnityEngine::Texture* HJPGOMCLLDG; // 0x68
	::UnityEngine::Rendering::Universal::FilmGrainLookup FNLGDLHAEGD; // 0x70
	::System::Single ECACMPOOFKA; // 0x74
	::System::Boolean CDPIKBAEBNF; // 0x78
	::System::Boolean IJLCIHHDBAB; // 0x79
	::System::Byte _padding0[0x2];
	::System::Single OCIANCLMDKO; // 0x7C
	::System::Boolean OAJFPLDBDOE; // 0x80
	::System::Boolean HBFLALCKPAK; // 0x81
	::System::Boolean LBDHMIKEACF; // 0x82
	::System::Boolean MHPABKFDIOI; // 0x83

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMPGPJOKLD__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMPGPJOKLD_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MLMPGPJOKLD_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MLMPGPJOKLD_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLMPGPJOKLD_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MLMPGPJOKLD_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MLMPGPJOKLD_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MLMPGPJOKLD_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}
};
