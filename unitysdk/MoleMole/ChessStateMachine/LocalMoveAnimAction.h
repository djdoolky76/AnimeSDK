#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"
#include "unitysdk/MoleMole/PieceModelAnimType.h"

class AIKGHHJKNCE;
class PINBHKFHPAL;
class PNJDGHBEMLK;
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfig; }
namespace MoleMole::Config { class ConfigHollowChessboard_PieceChangeStructConfigGroup; }
namespace MoleMole::HollowChessboard::ChessboardView { class ChessPieceLocalMoveEffect; }
namespace System { class Action; }

#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x1BA17E30)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_BUILDLOCALMOVEEFFECT_OFFSET UNITYSDK_OFFSET(0x1BA17240)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_CHECKISBIGTVMOVE_OFFSET UNITYSDK_OFFSET(0x1BA17180)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_DORISEORSINKBYCONFIG_OFFSET UNITYSDK_OFFSET(0x1BA172E0)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0x1BA17CD0)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GETCHANGESTRUCTCONFIG_1_OFFSET UNITYSDK_OFFSET(0x1BA17C00)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GETCHANGESTRUCTCONFIG_OFFSET UNITYSDK_OFFSET(0x1BA175D0)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0x1BA17E80)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1BA17D50)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_RUNINNER_OFFSET UNITYSDK_OFFSET(0x1BA17120)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_RUN_OFFSET UNITYSDK_OFFSET(0x1BA16EF0)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_STOP_OFFSET UNITYSDK_OFFSET(0x1BA17D10)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA17E90)
#define MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0x1BA17EA0)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int LocalMoveAnimAction_TypeDefinitionIndex = 65234;

	class LocalMoveAnimAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Boolean ForceCloseMultipleDisplay; // 0x28
		::System::Byte _padding0[0x3];
		::MoleMole::PieceModelAnimType animType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_RUN_OFFSET))(this, context);
		}

		static ::System::Void RunInner(::AIKGHHJKNCE* chessPieceProxy, ::MoleMole::PieceModelAnimType animType, ::System::Action* onEnd, ::System::Boolean forceCloseMultipleDisplay)
		{
			return ((::System::Void(*)(::AIKGHHJKNCE*, ::MoleMole::PieceModelAnimType, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_RUNINNER_OFFSET))(chessPieceProxy, animType, onEnd, forceCloseMultipleDisplay);
		}

		static ::System::Boolean CheckIsBigTVMove(::PNJDGHBEMLK* chessPiece3dModel, ::MoleMole::PieceModelAnimType pieceModelAnimType)
		{
			return ((::System::Boolean(*)(::PNJDGHBEMLK*, ::MoleMole::PieceModelAnimType))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_CHECKISBIGTVMOVE_OFFSET))(chessPiece3dModel, pieceModelAnimType);
		}

		static ::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect* BuildLocalMoveEffect(::MoleMole::PieceModelAnimType animType, ::System::Boolean forceCloseMultipleDisplay, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* config, ::System::Action* onEnd)
		{
			return ((::MoleMole::HollowChessboard::ChessboardView::ChessPieceLocalMoveEffect*(*)(::MoleMole::PieceModelAnimType, ::System::Boolean, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_BUILDLOCALMOVEEFFECT_OFFSET))(animType, forceCloseMultipleDisplay, config, onEnd);
		}

		static ::System::Void DoRiseOrSinkByConfig(::MoleMole::PieceModelAnimType animType, ::System::Action* onEnd, ::System::Boolean forceCloseMultipleDisplay, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig* config, ::PNJDGHBEMLK* chessPiece3dModel, ::System::Boolean preserveVE, ::System::Single speed)
		{
			return ((::System::Void(*)(::MoleMole::PieceModelAnimType, ::System::Action*, ::System::Boolean, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*, ::PNJDGHBEMLK*, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_DORISEORSINKBYCONFIG_OFFSET))(animType, onEnd, forceCloseMultipleDisplay, config, chessPiece3dModel, preserveVE, speed);
		}

		static ::System::Boolean GetChangeStructConfig(::AIKGHHJKNCE* chessPieceProxy, ::MoleMole::PieceModelAnimType changeType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*& config)
		{
			return ((::System::Boolean(*)(::AIKGHHJKNCE*, ::MoleMole::PieceModelAnimType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GETCHANGESTRUCTCONFIG_OFFSET))(chessPieceProxy, changeType, config);
		}

		static ::System::Boolean GetChangeStructConfig_1(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*& config, ::AIKGHHJKNCE* chessPieceProxy, ::MoleMole::PieceModelAnimType changeType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup* configGroup)
		{
			return ((::System::Boolean(*)(::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfig*&, ::AIKGHHJKNCE*, ::MoleMole::PieceModelAnimType, ::MoleMole::Config::ConfigHollowChessboard_PieceChangeStructConfigGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GETCHANGESTRUCTCONFIG_1_OFFSET))(config, chessPieceProxy, changeType, configGroup);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_STOP_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_ONSTOP_OFFSET))(this);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_LOCALMOVEANIMACTION___BASE_ACTIONOVER_OFFSET))(this);
		}
	};
}
