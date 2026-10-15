#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeReasonMask.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockActionDelayChange; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_LOCKACTIONDELAYCHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EF9E0)
#define RPG_GAMECORE_LOCKACTIONDELAYCHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7EF9F0)
#define RPG_GAMECORE_LOCKACTIONDELAYCHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7EF9A0)

namespace RPG::GameCore
{
	class LockActionDelayChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LockTargetType; // 0x18
		::System::Boolean IsLock; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* LockKey; // 0x28
		::RPG::GameCore::TargetEvaluator* WhitelistSourceEntity; // 0x30
		::RPG::GameCore::ActionDelayChangeReasonMask WhitelistChangeReason; // 0x38
		::RPG::GameCore::ActionDelayChangeTypeMask WhitelistChangeType; // 0x3A
		::System::Boolean IsDynamicCalculateWhitelistChangeType; // 0x3C
		::System::Byte _padding1[0x1];
		::RPG::GameCore::ActionDelayChangeTypeMask WhitelistRedirectChangeType; // 0x3E
		::System::Boolean Preshow_UnlockOnBreak; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKACTIONDELAYCHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockActionDelayChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockActionDelayChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKACTIONDELAYCHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockActionDelayChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockActionDelayChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKACTIONDELAYCHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
