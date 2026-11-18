#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/EffectResult.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BFDAMBNHMFN.h"

class BPHFOAJNBOP;
class EHJOEHBIMJG_MFFHHFPCAOA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLPOOFBMDLC_ADGCPPFAPIA_OFFSET UNITYSDK_OFFSET(0xFD07600)
#define NLPOOFBMDLC__CTOR_OFFSET UNITYSDK_OFFSET(0xFD075F0)

inline static constexpr unsigned int NLPOOFBMDLC_TypeDefinitionIndex = 58710;

class NLPOOFBMDLC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::BPHFOAJNBOP*>* GMEEABNNMHL; // 0x10
	::MoleMole::HollowChessboard::EffectResult EPMNNELBGFG; // 0x18

	::System::Void _ctor(::MoleMole::HollowChessboard::EffectResult IGAAKDOIPNN, ::System::Collections::Generic::List_1<::BPHFOAJNBOP*>* FHIOINIPKNO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::EffectResult, ::System::Collections::Generic::List_1<::BPHFOAJNBOP*>*))((::PBYTE)hIl2Cpp + NLPOOFBMDLC__CTOR_OFFSET))(this, IGAAKDOIPNN, FHIOINIPKNO);
	}

	::System::Boolean ADGCPPFAPIA(::BFDAMBNHMFN& BNPHMKKOOAE, ::BFDAMBNHMFN& AKEOCMBBFDO, ::EHJOEHBIMJG_MFFHHFPCAOA* AAOCANGHBDG, ::MoleMole::HollowChessboard::EffectResult& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::BFDAMBNHMFN&, ::BFDAMBNHMFN&, ::EHJOEHBIMJG_MFFHHFPCAOA*, ::MoleMole::HollowChessboard::EffectResult&))((::PBYTE)hIl2Cpp + NLPOOFBMDLC_ADGCPPFAPIA_OFFSET))(this, BNPHMKKOOAE, AKEOCMBBFDO, AAOCANGHBDG, IGAAKDOIPNN);
	}
};
