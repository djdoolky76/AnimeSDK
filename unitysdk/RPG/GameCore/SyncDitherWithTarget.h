#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SyncDitherWithTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SYNCDITHERWITHTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB50370)
#define RPG_GAMECORE_SYNCDITHERWITHTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB503B0)
#define RPG_GAMECORE_SYNCDITHERWITHTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB50310)

namespace RPG::GameCore
{
	class SyncDitherWithTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* SyncTargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCDITHERWITHTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncDitherWithTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncDitherWithTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCDITHERWITHTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncDitherWithTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncDitherWithTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCDITHERWITHTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
