#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFDAMBNHMFN.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"

class EHJOEHBIMJG_MFFHHFPCAOA;
namespace MoleMole { class ChessboardTextureTagConfig; }
namespace MoleMole { class TextureSheetTagEntry; }

#define PBIKOOHOGEF_ADGCPPFAPIA_1_OFFSET UNITYSDK_OFFSET(0x1845EE00)
#define PBIKOOHOGEF_ADGCPPFAPIA_OFFSET UNITYSDK_OFFSET(0x1845E9C0)
#define PBIKOOHOGEF_DCNLGEOPDAA_OFFSET UNITYSDK_OFFSET(0x1845EEF0)
#define PBIKOOHOGEF_KLFKEDOIGNC_OFFSET UNITYSDK_OFFSET(0x1845EF80)
#define PBIKOOHOGEF_KOEMPIBJBDL_OFFSET UNITYSDK_OFFSET(0x1845EBB0)
#define PBIKOOHOGEF_LNIINGEMJNO_OFFSET UNITYSDK_OFFSET(0x1845EE70)
#define PBIKOOHOGEF__CTOR_OFFSET UNITYSDK_OFFSET(0x1845EE60)

inline static constexpr unsigned int PBIKOOHOGEF_TypeDefinitionIndex = 49561;

class PBIKOOHOGEF : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBIKOOHOGEF__CTOR_OFFSET))(this);
	}

	::System::Boolean ADGCPPFAPIA(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& PCKHKPFPKAB, ::EHJOEHBIMJG_MFFHHFPCAOA* CEPMNLOPKDF, ::MoleMole::HollowChessboard::EffectResult& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*, ::MoleMole::HollowChessboard::EffectResult&))((::PBYTE)hIl2Cpp + PBIKOOHOGEF_ADGCPPFAPIA_OFFSET))(this, BNPHMKKOOAE, PCKHKPFPKAB, CEPMNLOPKDF, IGAAKDOIPNN);
	}

	::System::Boolean ADGCPPFAPIA_1(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& PCKHKPFPKAB, ::EHJOEHBIMJG_MFFHHFPCAOA* CEPMNLOPKDF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*))((::PBYTE)hIl2Cpp + PBIKOOHOGEF_ADGCPPFAPIA_1_OFFSET))(this, BNPHMKKOOAE, PCKHKPFPKAB, CEPMNLOPKDF);
	}

	::System::Boolean LNIINGEMJNO(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& PCKHKPFPKAB, ::EHJOEHBIMJG_MFFHHFPCAOA* CEPMNLOPKDF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*))((::PBYTE)hIl2Cpp + PBIKOOHOGEF_LNIINGEMJNO_OFFSET))(this, BNPHMKKOOAE, PCKHKPFPKAB, CEPMNLOPKDF);
	}

	::System::Boolean DCNLGEOPDAA(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& PCKHKPFPKAB, ::EHJOEHBIMJG_MFFHHFPCAOA* CEPMNLOPKDF, ::MoleMole::HollowChessboard::EffectResult& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*, ::MoleMole::HollowChessboard::EffectResult&))((::PBYTE)hIl2Cpp + PBIKOOHOGEF_DCNLGEOPDAA_OFFSET))(this, BNPHMKKOOAE, PCKHKPFPKAB, CEPMNLOPKDF, IGAAKDOIPNN);
	}

	static ::System::Boolean KLFKEDOIGNC(::MoleMole::TextureSheetTagEntry* AAIJGGIEOGK, ::Foundation::Unreal::FGameplayTagContainer BPPOOLBHMHL, ::MoleMole::HollowChessboard::EffectResult& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::MoleMole::TextureSheetTagEntry*, ::Foundation::Unreal::FGameplayTagContainer, ::MoleMole::HollowChessboard::EffectResult&))((::PBYTE)hIl2Cpp + PBIKOOHOGEF_KLFKEDOIGNC_OFFSET))(AAIJGGIEOGK, BPPOOLBHMHL, IGAAKDOIPNN);
	}

	static ::System::Boolean KOEMPIBJBDL(::MoleMole::ChessboardTextureTagConfig* BMKHKMKILMA, ::BFDAMBNHMFN& HEFKILJEFEE, ::MoleMole::HollowChessboard::EffectResult& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::MoleMole::ChessboardTextureTagConfig*, ::BFDAMBNHMFN&, ::MoleMole::HollowChessboard::EffectResult&))((::PBYTE)hIl2Cpp + PBIKOOHOGEF_KOEMPIBJBDL_OFFSET))(BMKHKMKILMA, HEFKILJEFEE, IGAAKDOIPNN);
	}
};
