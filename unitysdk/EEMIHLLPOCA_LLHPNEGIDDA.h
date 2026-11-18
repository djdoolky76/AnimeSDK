#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

class EEMIHLLPOCA_EOBNKEENKAJ;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define EEMIHLLPOCA_LLHPNEGIDDA_EGJNAJBMHMO_OFFSET UNITYSDK_OFFSET(0x106340E0)
#define EEMIHLLPOCA_LLHPNEGIDDA_NEMMKLONKMJ_OFFSET UNITYSDK_OFFSET(0x106340B0)
#define EEMIHLLPOCA_LLHPNEGIDDA__CTOR_OFFSET UNITYSDK_OFFSET(0x106340A0)

inline static constexpr unsigned int EEMIHLLPOCA_LLHPNEGIDDA_TypeDefinitionIndex = 52139;

class EEMIHLLPOCA_LLHPNEGIDDA : public ::System::Object
{
public:
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* ANKNDFPDGDH; // 0x10
	::EEMIHLLPOCA_EOBNKEENKAJ* FGBNBFHOKAA; // 0x18
	::System::Collections::Generic::HashSet_1<::MoleMole::HollowChessboard::HollowCell>* FDIDOEEOPAL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_LLHPNEGIDDA__CTOR_OFFSET))(this);
	}

	::System::Void NEMMKLONKMJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_LLHPNEGIDDA_NEMMKLONKMJ_OFFSET))(this);
	}

	::System::Void EGJNAJBMHMO(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Single>*))((::PBYTE)hIl2Cpp + EEMIHLLPOCA_LLHPNEGIDDA_EGJNAJBMHMO_OFFSET))(this, EGEGIMGMJHN);
	}
};
