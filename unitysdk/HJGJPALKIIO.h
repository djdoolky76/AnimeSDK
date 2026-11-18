#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJGJPALKIIO_HFMDKKKMLEO.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class Texture; }

#define HJGJPALKIIO_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x10117900)
#define HJGJPALKIIO_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x10114DD0)
#define HJGJPALKIIO_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x10117920)
#define HJGJPALKIIO_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x10115430)
#define HJGJPALKIIO_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x101151D0)
#define HJGJPALKIIO_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x10117910)
#define HJGJPALKIIO_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x101169C0)
#define HJGJPALKIIO__CTOR_OFFSET UNITYSDK_OFFSET(0x101178E0)

inline static constexpr unsigned int HJGJPALKIIO_TypeDefinitionIndex = 87966;

class HJGJPALKIIO
{
public:
	::UnityEngine::Texture* EGJODIFGBID; // 0x38
	::HJGJPALKIIO_HFMDKKKMLEO IJMHNGFLIKI; // 0x40
	::System::Single MKKHPAMHBNB; // 0xC8
	::System::Single KPJDAJCJMMO; // 0xCC
	::System::Single CKKMDAMEPEG; // 0xD0
	::System::Boolean KLAOGHOFOIN; // 0xD4
	::System::Boolean LLMLJNJFIEN; // 0xD5
	::System::Boolean OFNGOGDDPMK; // 0xD6
	::System::Byte _padding0[0x1];
	::System::Single JNPGAIOBICL; // 0xD8
	::System::Boolean LDNFHDMOHIB; // 0xDC
	::System::Boolean FINIHJBGMOP; // 0xDD
	::System::Boolean MHPABKFDIOI; // 0xDE
	::System::Boolean ADEGHLFEOFB; // 0xDF
	::System::Single HEPGKFLDALD; // 0xE0
	::System::Single LEIPDBCLINI; // 0xE4
	::System::Single ILJGOGFBGLN; // 0xE8
	::System::Boolean COKJJBPOIAJ; // 0xEC
	::System::Boolean DAIJMMLPHBP; // 0xED
	::System::Boolean DPOEGKPPPHK; // 0xEE
	::System::Boolean PBAAEAONOCC; // 0xEF
	::System::Single FCENLIJGNGA; // 0xF0
	::System::Boolean FLHHMPNDPMK; // 0xF4
	::System::Boolean AEFFDPCEBNE; // 0xF5
	::System::Boolean MBIKDGELIEA; // 0xF6
	::System::Boolean DLHDCOEOHEL; // 0xF7
	::System::Single BBBOKEJAFNA; // 0xF8
	::System::Single FKGNOAEICFB; // 0xFC
	::System::Boolean CDPIKBAEBNF; // 0x100
	::System::Boolean DNPKLHHFJBH; // 0x101
	::System::Boolean ABIFMFLHLCF; // 0x102
	::System::Boolean MOMEGMDJOMA; // 0x103
	::System::Single JNFHEGIIJIM; // 0x104
	::UnityEngine::Color MKAHDEIDCCF; // 0x108

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGJPALKIIO__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGJPALKIIO_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HJGJPALKIIO_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HJGJPALKIIO_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HJGJPALKIIO_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HJGJPALKIIO_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJGJPALKIIO_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HJGJPALKIIO_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}
};
