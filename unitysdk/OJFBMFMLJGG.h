#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFDAMBNHMFN.h"

class EHJOEHBIMJG_MFFHHFPCAOA;
namespace MoleMole::HollowChessboard { class ScreenPlayKeyChangedExpressionConfig; }

#define OJFBMFMLJGG_ADGCPPFAPIA_OFFSET UNITYSDK_OFFSET(0x16F805E0)
#define OJFBMFMLJGG_LNIINGEMJNO_OFFSET UNITYSDK_OFFSET(0x16F80680)
#define OJFBMFMLJGG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F805D0)

inline static constexpr unsigned int OJFBMFMLJGG_TypeDefinitionIndex = 75324;

class OJFBMFMLJGG : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::ScreenPlayKeyChangedExpressionConfig* AHMFPFACACD; // 0x10

	::System::Void _ctor(::MoleMole::HollowChessboard::ScreenPlayKeyChangedExpressionConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::ScreenPlayKeyChangedExpressionConfig*))((::PBYTE)hIl2Cpp + OJFBMFMLJGG__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean ADGCPPFAPIA(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& PCKHKPFPKAB, ::EHJOEHBIMJG_MFFHHFPCAOA* CEPMNLOPKDF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*))((::PBYTE)hIl2Cpp + OJFBMFMLJGG_ADGCPPFAPIA_OFFSET))(this, BNPHMKKOOAE, PCKHKPFPKAB, CEPMNLOPKDF);
	}

	::System::Boolean LNIINGEMJNO(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& PCKHKPFPKAB, ::EHJOEHBIMJG_MFFHHFPCAOA* CEPMNLOPKDF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*))((::PBYTE)hIl2Cpp + OJFBMFMLJGG_LNIINGEMJNO_OFFSET))(this, BNPHMKKOOAE, PCKHKPFPKAB, CEPMNLOPKDF);
	}
};
