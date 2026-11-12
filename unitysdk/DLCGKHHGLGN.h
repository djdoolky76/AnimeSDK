#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNAKIBHJLFN.h"
namespace RPG::Client { class UIController; }
namespace System { class Exception; }

#define DLCGKHHGLGN_CTOR_OFFSET UNITYSDK_OFFSET(0x10605250)
#define DLCGKHHGLGN_DMJOKNMPLHJ_OFFSET UNITYSDK_OFFSET(0x106053D0)
#define DLCGKHHGLGN_HGAMLCFBAHL_OFFSET UNITYSDK_OFFSET(0x10605390)
#define DLCGKHHGLGN_KGDLMPEABGG_OFFSET UNITYSDK_OFFSET(0x10605290)
#define DLCGKHHGLGN__PLAYTRANSITION_B__1_0_OFFSET UNITYSDK_OFFSET(0x10605520)

inline static constexpr unsigned int DLCGKHHGLGN_TypeDefinitionIndex = 75224;

	class DLCGKHHGLGN : public ::KNAKIBHJLFN
	{
	public:
		::RPG::Client::UIController* IBLBKLNHKLL; // 0x28
		::System::Void _ctor(::RPG::Client::UIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + DLCGKHHGLGN_CTOR_OFFSET))(this, a1);
		}

		::System::Void KGDLMPEABGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCGKHHGLGN_KGDLMPEABGG_OFFSET))(this);
		}

		::System::Boolean HGAMLCFBAHL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCGKHHGLGN_HGAMLCFBAHL_OFFSET))(this);
		}

		::System::Void DMJOKNMPLHJ(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + DLCGKHHGLGN_DMJOKNMPLHJ_OFFSET))(this, a1);
		}

		::System::Void _PlayTransition_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCGKHHGLGN__PLAYTRANSITION_B__1_0_OFFSET))(this);
		}

	};
