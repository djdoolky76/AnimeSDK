#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ChessStateMachine/StateMachineAction.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class CEDHMCAELMM;
class PINBHKFHPAL;

#define MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0xFA9D780)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_FORCESTOP_OFFSET UNITYSDK_OFFSET(0xFA9D740)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_GET_ISINSTANT_OFFSET UNITYSDK_OFFSET(0xFA9D830)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_PLAYTEXTURESHEETSOUND_OFFSET UNITYSDK_OFFSET(0xFA9D6D0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_RUN_OFFSET UNITYSDK_OFFSET(0xFA9D680)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_STOP_OFFSET UNITYSDK_OFFSET(0xFA9D7F0)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION__CTOR_OFFSET UNITYSDK_OFFSET(0xFA9D840)
#define MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION___BASE_ACTIONOVER_OFFSET UNITYSDK_OFFSET(0xFA9D850)

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ShowVideoViewByServerInfoAction_TypeDefinitionIndex = 91773;

	class ShowVideoViewByServerInfoAction : public ::MoleMole::ChessStateMachine::StateMachineAction
	{
	public:
		::System::Boolean IsNeedVideoPlayEndPause; // 0x28
		::System::Boolean IsUseOverrideID; // 0x29
		::System::Byte _padding0[0x2];
		::System::Int32 OverrideEventAnimConfigID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION__CTOR_OFFSET))(this);
		}

		::System::Void Run(::PINBHKFHPAL* context)
		{
			return ((::System::Void(*)(::PVOID, ::PINBHKFHPAL*))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_RUN_OFFSET))(this, context);
		}

		::System::Boolean PlayTextureSheetSound(::CEDHMCAELMM* template_, ::MoleMole::HollowChessboard::HollowCell fullIndex, ::System::Boolean needReSeek)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEDHMCAELMM*, ::MoleMole::HollowChessboard::HollowCell, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_PLAYTEXTURESHEETSOUND_OFFSET))(this, template_, fullIndex, needReSeek);
		}

		::System::Void ForceStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_FORCESTOP_OFFSET))(this);
		}

		::System::Void ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_ACTIONOVER_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_STOP_OFFSET))(this);
		}

		::System::Boolean get_isInstant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION_GET_ISINSTANT_OFFSET))(this);
		}

		::System::Void __base_ActionOver()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CHESSSTATEMACHINE_SHOWVIDEOVIEWBYSERVERINFOACTION___BASE_ACTIONOVER_OFFSET))(this);
		}
	};
}
