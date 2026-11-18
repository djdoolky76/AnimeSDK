#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJKHNKJFMJO;
class IJDMEKNFDHL;
class NPCBBDGEGPM;
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class RenderTexture; }

#define KDHPACKOJOP_ADFILPGAKKF_OFFSET UNITYSDK_OFFSET(0x176F97C0)
#define KDHPACKOJOP_DHDMCHMGDPK_OFFSET UNITYSDK_OFFSET(0x176F9250)
#define KDHPACKOJOP_HFMHCGHEOCI_OFFSET UNITYSDK_OFFSET(0x176F9390)
#define KDHPACKOJOP_JBHAJJMEGIL_OFFSET UNITYSDK_OFFSET(0x176F95B0)
#define KDHPACKOJOP_KGGKFDFCLDL_OFFSET UNITYSDK_OFFSET(0x176F97B0)
#define KDHPACKOJOP__CTOR_OFFSET UNITYSDK_OFFSET(0x176F9240)

inline static constexpr unsigned int KDHPACKOJOP_TypeDefinitionIndex = 82214;

class KDHPACKOJOP : public ::System::Object
{
public:
	// static const ::System::String* BGLCEKIKEOF; // 0x0
	::NPCBBDGEGPM* DMMFCBPBLGJ; // 0x10
	::DJKHNKJFMJO* JHJLBBCGFAI; // 0x18
	::IJDMEKNFDHL* _KHDJGKPEDEH_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPACKOJOP__CTOR_OFFSET))(this);
	}

	::System::Void DHDMCHMGDPK(::UnityEngine::RenderTexture* FJEEKLKBFHN, ::System::String* HLHNLPCOAFE, ::System::Action* CAAFEGLOALC, ::System::Action* HGBOMLCCBEE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::System::String*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + KDHPACKOJOP_DHDMCHMGDPK_OFFSET))(this, FJEEKLKBFHN, HLHNLPCOAFE, CAAFEGLOALC, HGBOMLCCBEE);
	}

	::System::Void JBHAJJMEGIL(::System::String* CEKNHIDPNNA, ::NPCBBDGEGPM*& HDIJAHIHLLH)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::NPCBBDGEGPM*&))((::PBYTE)hIl2Cpp + KDHPACKOJOP_JBHAJJMEGIL_OFFSET))(this, CEKNHIDPNNA, HDIJAHIHLLH);
	}

	::IJDMEKNFDHL* KGGKFDFCLDL()
	{
		return ((::IJDMEKNFDHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDHPACKOJOP_KGGKFDFCLDL_OFFSET))(this);
	}

	::System::Void HFMHCGHEOCI(::System::Action* CAAFEGLOALC, ::System::Action* HGBOMLCCBEE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + KDHPACKOJOP_HFMHCGHEOCI_OFFSET))(this, CAAFEGLOALC, HGBOMLCCBEE);
	}

	::System::Void ADFILPGAKKF(::IJDMEKNFDHL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IJDMEKNFDHL*))((::PBYTE)hIl2Cpp + KDHPACKOJOP_ADFILPGAKKF_OFFSET))(this, EGEGIMGMJHN);
	}
};
