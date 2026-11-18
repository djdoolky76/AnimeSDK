#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFHFLPPCAJJ_AOCBMCHKBKP_OFFSET UNITYSDK_OFFSET(0x16B6BA30)
#define NFHFLPPCAJJ_GDALEAFILOL_OFFSET UNITYSDK_OFFSET(0x16B6B960)
#define NFHFLPPCAJJ_IOHOIHOKDMM_OFFSET UNITYSDK_OFFSET(0x16B6B7D0)
#define NFHFLPPCAJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6B7C0)

inline static constexpr unsigned int NFHFLPPCAJJ_TypeDefinitionIndex = 61977;

class NFHFLPPCAJJ : public ::System::Object
{
public:
	::MoleMole::UIHollowChessboard3DModelController* PILAKDILOPM; // 0x10

	::System::Void _ctor(::MoleMole::UIHollowChessboard3DModelController* GLAJBIKOEDG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessboard3DModelController*))((::PBYTE)hIl2Cpp + NFHFLPPCAJJ__CTOR_OFFSET))(this, GLAJBIKOEDG);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> IOHOIHOKDMM(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& GJJMHAHNJMO, ::MoleMole::HollowChessboard::HollowCell PEPMPIKIBAD, ::MoleMole::HollowChessboard::HollowCell LKNIPKKCKIK)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NFHFLPPCAJJ_IOHOIHOKDMM_OFFSET))(this, GJJMHAHNJMO, PEPMPIKIBAD, LKNIPKKCKIK);
	}

	::System::Boolean GDALEAFILOL(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* JGEDALNFLGP, ::MoleMole::HollowChessboard::HollowCell PEPMPIKIBAD, ::MoleMole::HollowChessboard::HollowCell LKNIPKKCKIK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NFHFLPPCAJJ_GDALEAFILOL_OFFSET))(this, JGEDALNFLGP, PEPMPIKIBAD, LKNIPKKCKIK);
	}

	::MoleMole::PlayerOnViewState AOCBMCHKBKP(::MoleMole::HollowChessboard::HollowCell KHGFAKJKDGG, ::MoleMole::HollowChessboard::HollowCell HODAIDNDKHD)
	{
		return ((::MoleMole::PlayerOnViewState(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + NFHFLPPCAJJ_AOCBMCHKBKP_OFFSET))(this, KHGFAKJKDGG, HODAIDNDKHD);
	}
};
