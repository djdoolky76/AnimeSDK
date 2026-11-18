#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LMFGEDJIFIO.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;
class PNJDGHBEMLK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EEMIHLLPOCA_CICFPEBLEDL_PJGHNEFJEFL_OFFSET UNITYSDK_OFFSET(0x1589A790)
#define EEMIHLLPOCA_CICFPEBLEDL__CTOR_OFFSET UNITYSDK_OFFSET(0x1589A780)

inline static constexpr unsigned int EEMIHLLPOCA_CICFPEBLEDL_TypeDefinitionIndex = 52141;

class EEMIHLLPOCA_CICFPEBLEDL : public ::System::Object
{
public:
	::FBAMLABJMKF* LBCDKDKLKHH; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* EECFEKKIBMA; // 0x18
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::LMFGEDJIFIO>* NDPKLDFBCFN; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_CICFPEBLEDL__CTOR_OFFSET))(this);
	}

	::System::Boolean PJGHNEFJEFL(::PNJDGHBEMLK* CDKCJAKODPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_CICFPEBLEDL_PJGHNEFJEFL_OFFSET))(this, CDKCJAKODPN);
	}
};
