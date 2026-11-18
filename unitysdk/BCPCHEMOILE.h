#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PlayerOnViewState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueTuple_2.h"

class OBKNEEOLOPB;
class PNJDGHBEMLK;
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BCPCHEMOILE_AOCBMCHKBKP_OFFSET UNITYSDK_OFFSET(0x169E4410)
#define BCPCHEMOILE_CGOJEODAMPD_OFFSET UNITYSDK_OFFSET(0x169E4080)
#define BCPCHEMOILE_GDALEAFILOL_OFFSET UNITYSDK_OFFSET(0x169E4340)
#define BCPCHEMOILE_IOHOIHOKDMM_OFFSET UNITYSDK_OFFSET(0x169E3E20)
#define BCPCHEMOILE__CTOR_OFFSET UNITYSDK_OFFSET(0x169E3D50)

inline static constexpr unsigned int BCPCHEMOILE_TypeDefinitionIndex = 55230;

class BCPCHEMOILE : public ::System::Object
{
public:
	::MoleMole::UIHollowChessboard3DModelController* PILAKDILOPM; // 0x10
	::OBKNEEOLOPB* HJLKIJBHDBM; // 0x18
	::System::Boolean JNOMIJECKAA; // 0x20

	::System::Void _ctor(::MoleMole::UIHollowChessboard3DModelController* GLAJBIKOEDG, ::System::Boolean JAIINGDNLFL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowChessboard3DModelController*, ::System::Boolean))((::PBYTE)hIl2Cpp + BCPCHEMOILE__CTOR_OFFSET))(this, GLAJBIKOEDG, JAIINGDNLFL);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> IOHOIHOKDMM(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*& GJJMHAHNJMO, ::MoleMole::HollowChessboard::HollowCell PEPMPIKIBAD, ::MoleMole::HollowChessboard::HollowCell LKNIPKKCKIK)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*&, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BCPCHEMOILE_IOHOIHOKDMM_OFFSET))(this, GJJMHAHNJMO, PEPMPIKIBAD, LKNIPKKCKIK);
	}

	::System::Boolean GDALEAFILOL(::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>* JGEDALNFLGP, ::MoleMole::HollowChessboard::HollowCell PEPMPIKIBAD, ::MoleMole::HollowChessboard::HollowCell LKNIPKKCKIK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::HollowChessboard::HollowCell>*, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BCPCHEMOILE_GDALEAFILOL_OFFSET))(this, JGEDALNFLGP, PEPMPIKIBAD, LKNIPKKCKIK);
	}

	::MoleMole::PlayerOnViewState AOCBMCHKBKP(::MoleMole::HollowChessboard::HollowCell LGJDIKAJJNK, ::MoleMole::HollowChessboard::HollowCell AKGGKGEPJLP)
	{
		return ((::MoleMole::PlayerOnViewState(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell))((::PBYTE)hIl2Cpp + BCPCHEMOILE_AOCBMCHKBKP_OFFSET))(this, LGJDIKAJJNK, AKGGKGEPJLP);
	}

	::System::Boolean CGOJEODAMPD(::PNJDGHBEMLK* MMGOLFLEADB)
	{
		return ((::System::Boolean(*)(::PVOID, ::PNJDGHBEMLK*))((::PBYTE)hIl2Cpp + BCPCHEMOILE_CGOJEODAMPD_OFFSET))(this, MMGOLFLEADB);
	}
};
