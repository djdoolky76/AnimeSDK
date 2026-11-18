#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class EEMIHLLPOCA;
class FBAMLABJMKF;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EEMIHLLPOCA_JIBOGMCIADB_LOKGPMJEIIJ_OFFSET UNITYSDK_OFFSET(0x11A6EBA0)
#define EEMIHLLPOCA_JIBOGMCIADB_PEBEBDIAABG_OFFSET UNITYSDK_OFFSET(0x11A6EB70)
#define EEMIHLLPOCA_JIBOGMCIADB__CTOR_OFFSET UNITYSDK_OFFSET(0x11A6EB60)

inline static constexpr unsigned int EEMIHLLPOCA_JIBOGMCIADB_TypeDefinitionIndex = 52133;

class EEMIHLLPOCA_JIBOGMCIADB : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* ANKNDFPDGDH; // 0x10
	::FBAMLABJMKF* JDBIEANMJLH; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* FDIDOEEOPAL; // 0x20
	::EEMIHLLPOCA* KLHPEBKNIFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_JIBOGMCIADB__CTOR_OFFSET))(this);
	}

	::System::Void PEBEBDIAABG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_JIBOGMCIADB_PEBEBDIAABG_OFFSET))(this);
	}

	::System::Void LOKGPMJEIIJ(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_JIBOGMCIADB_LOKGPMJEIIJ_OFFSET))(this, EGEGIMGMJHN);
	}
};
