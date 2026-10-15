#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtBattleMoveStopType.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ST_RtMain_MoveToTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA81D10)
#define RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA81D20)
#define RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA81CE0)

namespace RPG::GameCore
{
	class ST_RtMain_MoveToTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::RtBattleMoveStopType StopType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* StopDistance; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_RtMain_MoveToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_RtMain_MoveToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_RtMain_MoveToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_RtMain_MoveToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_RTMAIN_MOVETOTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
