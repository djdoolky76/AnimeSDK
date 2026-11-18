#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/ValueTuple_2.h"

class CABHBNNDMDE;
class EAJKEDGLGDL;
class FBAMLABJMKF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HILFGNKLBFN_CCMAEIPFHON_OFFSET UNITYSDK_OFFSET(0x140BA0D0)
#define HILFGNKLBFN_CDEBBOODMPB_OFFSET UNITYSDK_OFFSET(0x140B9EB0)
#define HILFGNKLBFN_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x140B9F50)
#define HILFGNKLBFN_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x140BA080)
#define HILFGNKLBFN_GAOMJEFAFNE_OFFSET UNITYSDK_OFFSET(0x140B9F00)
#define HILFGNKLBFN_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x140BA020)
#define HILFGNKLBFN_KLNKABJLJKB_OFFSET UNITYSDK_OFFSET(0x140B9E60)
#define HILFGNKLBFN_MOAIMMNOFJF_OFFSET UNITYSDK_OFFSET(0x140BA240)
#define HILFGNKLBFN__CTOR_OFFSET UNITYSDK_OFFSET(0x140BA0C0)

inline static constexpr unsigned int HILFGNKLBFN_TypeDefinitionIndex = 68093;

class HILFGNKLBFN
{
public:
	::EAJKEDGLGDL* EFKMGPGJDND; // 0x40
	::System::Boolean EGCCIODCJIA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILFGNKLBFN__CTOR_OFFSET))(this);
	}

	::System::Void KLNKABJLJKB(::CABHBNNDMDE* EBPLCHKANML)
	{
		return ((::System::Void(*)(::PVOID, ::CABHBNNDMDE*))((::PBYTE)hIl2Cpp + HILFGNKLBFN_KLNKABJLJKB_OFFSET))(this, EBPLCHKANML);
	}

	::System::Void CDEBBOODMPB(::CABHBNNDMDE* KDEHMPGOCEP, ::CABHBNNDMDE* PADJNMGMGHO)
	{
		return ((::System::Void(*)(::PVOID, ::CABHBNNDMDE*, ::CABHBNNDMDE*))((::PBYTE)hIl2Cpp + HILFGNKLBFN_CDEBBOODMPB_OFFSET))(this, KDEHMPGOCEP, PADJNMGMGHO);
	}

	::System::Void GAOMJEFAFNE(::CABHBNNDMDE* IFNPJMALIHE)
	{
		return ((::System::Void(*)(::PVOID, ::CABHBNNDMDE*))((::PBYTE)hIl2Cpp + HILFGNKLBFN_GAOMJEFAFNE_OFFSET))(this, IFNPJMALIHE);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HILFGNKLBFN_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean HLJPINPGIJN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HILFGNKLBFN_HLJPINPGIJN_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILFGNKLBFN_ELMEFBBHCEG_OFFSET))(this);
	}

	::System::Void CCMAEIPFHON(::FBAMLABJMKF* COBEJJHGMPO, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* GECJGHOPJBN, ::MoleMole::Vector2Int MPLDDNMCECG, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> PNPIEHKLDEM, ::System::Single DCLLEEBPILN, ::System::Boolean IBPPKLKGNOO)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::Vector2Int, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + HILFGNKLBFN_CCMAEIPFHON_OFFSET))(this, COBEJJHGMPO, GECJGHOPJBN, MPLDDNMCECG, PNPIEHKLDEM, DCLLEEBPILN, IBPPKLKGNOO);
	}

	::System::Void MOAIMMNOFJF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HILFGNKLBFN_MOAIMMNOFJF_OFFSET))(this);
	}
};
