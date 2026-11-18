#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFDAMBNHMFN.h"

class BPHFOAJNBOP;
class EHJOEHBIMJG_MFFHHFPCAOA;
namespace MoleMole::HollowChessboard { class AnyEffectExpressionConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNNJNLLNKAM_ADGCPPFAPIA_OFFSET UNITYSDK_OFFSET(0x16F4FDC0)
#define HNNJNLLNKAM_LNIINGEMJNO_OFFSET UNITYSDK_OFFSET(0x16F4FFE0)
#define HNNJNLLNKAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4FB70)

inline static constexpr unsigned int HNNJNLLNKAM_TypeDefinitionIndex = 41685;

class HNNJNLLNKAM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::BPHFOAJNBOP*>* GMEEABNNMHL; // 0x10

	::System::Void _ctor(::MoleMole::HollowChessboard::AnyEffectExpressionConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::AnyEffectExpressionConfig*))((::PBYTE)hIl2Cpp + HNNJNLLNKAM__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean ADGCPPFAPIA(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& PCKHKPFPKAB, ::EHJOEHBIMJG_MFFHHFPCAOA* CEPMNLOPKDF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*))((::PBYTE)hIl2Cpp + HNNJNLLNKAM_ADGCPPFAPIA_OFFSET))(this, BNPHMKKOOAE, PCKHKPFPKAB, CEPMNLOPKDF);
	}

	::System::Boolean LNIINGEMJNO(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& PCKHKPFPKAB, ::EHJOEHBIMJG_MFFHHFPCAOA* CEPMNLOPKDF)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*))((::PBYTE)hIl2Cpp + HNNJNLLNKAM_LNIINGEMJNO_OFFSET))(this, BNPHMKKOOAE, PCKHKPFPKAB, CEPMNLOPKDF);
	}
};
