#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/ValueTuple_2.h"

class FBAMLABJMKF;
class IKPNFEPCOFI;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EAJKEDGLGDL_FAFGOACDBKG_OFFSET UNITYSDK_OFFSET(0x10627F60)
#define EAJKEDGLGDL_FMILOCFONMC_OFFSET UNITYSDK_OFFSET(0x10628380)
#define EAJKEDGLGDL_HOADCMABAIM_OFFSET UNITYSDK_OFFSET(0x10628370)
#define EAJKEDGLGDL_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x10627EE0)
#define EAJKEDGLGDL__CTOR_OFFSET UNITYSDK_OFFSET(0x10627ED0)

inline static constexpr unsigned int EAJKEDGLGDL_TypeDefinitionIndex = 56289;

class EAJKEDGLGDL : public ::System::Object
{
public:
	::IKPNFEPCOFI* HHGDCEMJCKA; // 0x10
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x18
	::System::Boolean BNPFOGHFOBD; // 0x20
	::System::Boolean JMDILJBFPFH; // 0x21

	::System::Void _ctor(::FBAMLABJMKF* COBEJJHGMPO)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + EAJKEDGLGDL__CTOR_OFFSET))(this, COBEJJHGMPO);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAJKEDGLGDL_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void FAFGOACDBKG(::MoleMole::Vector2Int MPLDDNMCECG, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* GECJGHOPJBN, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell> PNPIEHKLDEM, ::System::Single DCLLEEBPILN, ::System::Boolean IBPPKLKGNOO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vector2Int, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::System::ValueTuple_2<::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell>, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + EAJKEDGLGDL_FAFGOACDBKG_OFFSET))(this, MPLDDNMCECG, GECJGHOPJBN, PNPIEHKLDEM, DCLLEEBPILN, IBPPKLKGNOO);
	}

	::System::Boolean HOADCMABAIM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAJKEDGLGDL_HOADCMABAIM_OFFSET))(this);
	}

	::System::Void FMILOCFONMC(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* ANJGNKPAJAN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + EAJKEDGLGDL_FMILOCFONMC_OFFSET))(this, ANJGNKPAJAN);
	}
};
