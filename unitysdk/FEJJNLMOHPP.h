#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEJJNLMOHPP_DNOMJBLMJMK.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }

#define FEJJNLMOHPP_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x13208740)
#define FEJJNLMOHPP_IIODGIDIHGM_OFFSET UNITYSDK_OFFSET(0x13206AC0)
#define FEJJNLMOHPP_MIDAMEBKOAP_OFFSET UNITYSDK_OFFSET(0x13208720)
#define FEJJNLMOHPP_ODLBLHOKABA_OFFSET UNITYSDK_OFFSET(0x13206E50)
#define FEJJNLMOHPP_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x13206CC0)
#define FEJJNLMOHPP_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x13208730)
#define FEJJNLMOHPP_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13207BC0)
#define FEJJNLMOHPP__CTOR_OFFSET UNITYSDK_OFFSET(0x132086C0)

inline static constexpr unsigned int FEJJNLMOHPP_TypeDefinitionIndex = 65749;

class FEJJNLMOHPP
{
public:
	::UnityEngine::Vector2 MKEGNKPNOAB; // 0x38
	::System::Single AHBFKNMDEHN; // 0x40
	::UnityEngine::Color DBJAPLNDKEJ; // 0x44
	::System::Single OCIANCLMDKO; // 0x54
	::FEJJNLMOHPP_DNOMJBLMJMK IJMHNGFLIKI; // 0x58
	::System::Single MGHJGJPBPJE; // 0xCC
	::UnityEngine::Color NIMDMMPABDN; // 0xD0
	::System::Single HHMDGFHJFHI; // 0xE0
	::UnityEngine::Color HEMIPNOKMPM; // 0xE4
	::System::Boolean DJNIMDMKLPJ; // 0xF4
	::System::Boolean OIOGCGMCBNF; // 0xF5
	::System::Boolean OPANBIEBJMK; // 0xF6
	::System::Boolean LEAAHDJIDLH; // 0xF7
	::System::Boolean MNNIACAIAEJ; // 0xF8
	::System::Boolean GLHJONJCHOL; // 0xF9
	::System::Boolean NCINHBBAIBA; // 0xFA
	::System::Boolean CDPIKBAEBNF; // 0xFB
	::System::Boolean MHPABKFDIOI; // 0xFC
	::System::Boolean GJFPLGEAPFI; // 0xFD
	::System::Boolean HBFLALCKPAK; // 0xFE
	::System::Byte _padding0[0x1];
	::System::Single BNDPKDIPNFK; // 0x100

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJJNLMOHPP__CTOR_OFFSET))(this);
	}

	::System::Void IIODGIDIHGM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJJNLMOHPP_IIODGIDIHGM_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FEJJNLMOHPP_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + FEJJNLMOHPP_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void ODLBLHOKABA(::System::Boolean FFFEBCKEHEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FEJJNLMOHPP_ODLBLHOKABA_OFFSET))(this, FFFEBCKEHEE);
	}

	::System::Void MIDAMEBKOAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEJJNLMOHPP_MIDAMEBKOAP_OFFSET))(this);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + FEJJNLMOHPP_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + FEJJNLMOHPP_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}
};
