#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMFGEDJIFIO.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class CCGHDFBDLKD;
class PNJDGHBEMLK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEMIHLLPOCA_KNCFFDBLFIG_BNEGGLFJFOP_OFFSET UNITYSDK_OFFSET(0x16992930)
#define EEMIHLLPOCA_KNCFFDBLFIG_GMDOFMDOCHK_OFFSET UNITYSDK_OFFSET(0x16992B50)
#define EEMIHLLPOCA_KNCFFDBLFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16992920)

inline static constexpr unsigned int EEMIHLLPOCA_KNCFFDBLFIG_TypeDefinitionIndex = 52131;

class EEMIHLLPOCA_KNCFFDBLFIG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::LMFGEDJIFIO>* NDPKLDFBCFN; // 0x10
	::CCGHDFBDLKD* ALIOGDAEFCC; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* DNOAKIIJCBN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_KNCFFDBLFIG__CTOR_OFFSET))(this);
	}

	::System::Boolean BNEGGLFJFOP(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_KNCFFDBLFIG_BNEGGLFJFOP_OFFSET))(this, CDKCJAKODPN);
	}

	::System::Void GMDOFMDOCHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_KNCFFDBLFIG_GMDOFMDOCHK_OFFSET))(this);
	}
};
