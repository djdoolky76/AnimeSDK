#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_ChessEffectBase.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"

class GDCCBKJDPGE;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_ChessEffectRunContextBase; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_GET_TOTALDURATION_OFFSET UNITYSDK_OFFSET(0x14AEDA30)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_ONONCEFINISH_OFFSET UNITYSDK_OFFSET(0x14AEE110)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_RUN_OFFSET UNITYSDK_OFFSET(0x14AEDB00)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_SEARCHINNEEDCHANGE_OFFSET UNITYSDK_OFFSET(0x14AEDA40)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_SETNEEDCHANGE_OFFSET UNITYSDK_OFFSET(0x14AEE0C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEE170)

namespace MoleMole::HollowChessboard::ChessboardView
{
	inline static constexpr unsigned int ChessPieceLocalMoveEffect_TypeDefinitionIndex = 41980;

	class ChessPieceLocalMoveEffect : public ::MoleMole::Config::ConfigHollowChessboard_ChessEffectBase
	{
	public:
		::System::Action* mergedEnd; // 0x20
		::System::Action* OnEnd; // 0x28
		::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* Config; // 0x30
		::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean>* _needChange; // 0x38
		::System::Int32 _waitCount; // 0x40
		::System::Boolean ModifyHollowRenderWorld; // 0x44
		::System::Boolean DoAllPiece; // 0x45
		::System::Boolean ForceCloseMultipleDisplay; // 0x46
		::System::Boolean PreserveVE; // 0x47
		::MoleMole::PieceModelAnimType AnimType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT__CTOR_OFFSET))(this);
		}

		::System::Single get_totalDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_GET_TOTALDURATION_OFFSET))(this);
		}

		::System::Boolean SearchInNeedChange(::MoleMole::HollowChessboard::HollowCell cell, ::System::Boolean& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_SEARCHINNEEDCHANGE_OFFSET))(this, cell, result);
		}

		::System::Void Run(::PNJDGHBEMLK* chessPiece, ::System::Action_1<::System::Object*>* endCallback, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase* context, ::GDCCBKJDPGE* timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::PNJDGHBEMLK*, ::System::Action_1<::System::Object*>*, ::MoleMole::Config::ConfigHollowChessboard_ChessEffectRunContextBase*, ::GDCCBKJDPGE*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_RUN_OFFSET))(this, chessPiece, endCallback, context, timeScale);
		}

		::System::Void SetNeedChange(::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean>* needChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::HollowCell, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_SETNEEDCHANGE_OFFSET))(this, needChange);
		}

		::System::Void OnOnceFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CHESSBOARDVIEW_CHESSPIECELOCALMOVEEFFECT_ONONCEFINISH_OFFSET))(this);
		}
	};
}
