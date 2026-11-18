#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FILGGMBPDJD.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class BFEFACBOBJM;
class JMIGPHLOLAJ;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace MoleMole::HollowChessboard::ChessboardView { class ChessPieceLocalMoveEffect; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NGBAAHLHMLI_EPCBOAIBJJF_OFFSET UNITYSDK_OFFSET(0x16B6DED0)
#define NGBAAHLHMLI_FEEDDLLEMFE_OFFSET UNITYSDK_OFFSET(0x16B6E430)
#define NGBAAHLHMLI_JDAKCDNGJON_OFFSET UNITYSDK_OFFSET(0x16B6E320)
#define NGBAAHLHMLI_PJFPEPHIEGE_OFFSET UNITYSDK_OFFSET(0x16B6E3C0)
#define NGBAAHLHMLI__CTOR_OFFSET UNITYSDK_OFFSET(0x16B6DEC0)

inline static constexpr unsigned int NGBAAHLHMLI_TypeDefinitionIndex = 40513;

class NGBAAHLHMLI : public ::System::Object
{
public:
	::System::Action* CEADCLIDDMJ; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* DCBEJGPDDAC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBAAHLHMLI__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask EPCBOAIBJJF(::MoleMole::HollowChessboard::HollowCell JLNIFKHFEFB, ::BFEFACBOBJM* NLKHAICJJAL, ::JMIGPHLOLAJ* GKMBLDIMMIJ, ::System::Boolean IFEGEFOJBFB, ::MoleMole::PieceModelAnimType HCEINBJDDBN, ::FILGGMBPDJD FGDPOAFBDID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean>* KNODJJNIKMJ)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::BFEFACBOBJM*, ::JMIGPHLOLAJ*, ::System::Boolean, ::MoleMole::PieceModelAnimType, ::FILGGMBPDJD, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean>*))((::PBYTE)hIl2Cpp + NGBAAHLHMLI_EPCBOAIBJJF_OFFSET))(this, JLNIFKHFEFB, NLKHAICJJAL, GKMBLDIMMIJ, IFEGEFOJBFB, HCEINBJDDBN, FGDPOAFBDID, KNODJJNIKMJ);
	}

	static ::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect* JDAKCDNGJON(::MoleMole::PieceModelAnimType HCEINBJDDBN, ::System::Boolean KIDADCKFHLF, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* DFMKILICPFB, ::System::Action* IHLBALNBGKM)
	{
		return ((::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect*(*)(::MoleMole::PieceModelAnimType, ::System::Boolean, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + NGBAAHLHMLI_JDAKCDNGJON_OFFSET))(HCEINBJDDBN, KIDADCKFHLF, DFMKILICPFB, IHLBALNBGKM);
	}

	::System::Void PJFPEPHIEGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBAAHLHMLI_PJFPEPHIEGE_OFFSET))(this);
	}

	::System::Void FEEDDLLEMFE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBAAHLHMLI_FEEDDLLEMFE_OFFSET))(this);
	}
};
