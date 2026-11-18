#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FILGGMBPDJD.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"

class FBAMLABJMKF;
class PEOIIIGPCBA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMDNFKLIBNB_BAJDNELJJAO_OFFSET UNITYSDK_OFFSET(0x150DA8F0)
#define PMDNFKLIBNB_CICNLCBEIGI_OFFSET UNITYSDK_OFFSET(0x150DA6B0)
#define PMDNFKLIBNB_MCKAGGFHDMO_OFFSET UNITYSDK_OFFSET(0x150DA4F0)
#define PMDNFKLIBNB__CTOR_OFFSET UNITYSDK_OFFSET(0x150DA4D0)

inline static constexpr unsigned int PMDNFKLIBNB_TypeDefinitionIndex = 68573;

class PMDNFKLIBNB : public ::System::Object
{
public:
	::MoleMole::HollowChessboard::HollowCell KGDJEJOOHPA; // 0x10
	::FILGGMBPDJD KLMBCBMDFLP; // 0x1C

	::System::Void _ctor(::FILGGMBPDJD FGDPOAFBDID, ::MoleMole::HollowChessboard::HollowCell KGDJEJOOHPA)
	{
		return ((::System::Void(*)(::PVOID, ::FILGGMBPDJD, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + PMDNFKLIBNB__CTOR_OFFSET))(this, FGDPOAFBDID, KGDJEJOOHPA);
	}

	::System::Boolean MCKAGGFHDMO(::FBAMLABJMKF* COBEJJHGMPO, ::PEOIIIGPCBA* FJBHBMIGONG, ::System::Collections::Generic::List_1<::System::Object*>*& MFMMNJOHAIE)
	{
		return ((::System::Boolean(*)(::PVOID, ::FBAMLABJMKF*, ::PEOIIIGPCBA*, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + PMDNFKLIBNB_MCKAGGFHDMO_OFFSET))(this, COBEJJHGMPO, FJBHBMIGONG, MFMMNJOHAIE);
	}

	::System::Collections::Generic::List_1<::System::Object*>* CICNLCBEIGI(::PEOIIIGPCBA* GENNIFDPOAM, ::FBAMLABJMKF* COBEJJHGMPO, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* CKOCENEJDOB)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::PEOIIIGPCBA*, ::FBAMLABJMKF*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + PMDNFKLIBNB_CICNLCBEIGI_OFFSET))(this, GENNIFDPOAM, COBEJJHGMPO, CKOCENEJDOB);
	}

	static ::System::Nullable_1<::System::Object*> BAJDNELJJAO(::PEOIIIGPCBA* GENNIFDPOAM, ::FBAMLABJMKF* COBEJJHGMPO, ::MoleMole::HollowChessboard::HollowCell PJIHOFJIPHP)
	{
		return ((::System::Nullable_1<::System::Object*>(*)(::PEOIIIGPCBA*, ::FBAMLABJMKF*, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + PMDNFKLIBNB_BAJDNELJJAO_OFFSET))(GENNIFDPOAM, COBEJJHGMPO, PJIHOFJIPHP);
	}
};
