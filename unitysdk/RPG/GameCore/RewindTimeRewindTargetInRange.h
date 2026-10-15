#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RewindTimeRewindTargetInRange; }

#define RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99C0A0)
#define RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99C0B0)
#define RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99C070)

namespace RPG::GameCore
{
	class RewindTimeRewindTargetInRange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single Range; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RewindTimeRewindTargetInRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RewindTimeRewindTargetInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RewindTimeRewindTargetInRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RewindTimeRewindTargetInRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REWINDTIMEREWINDTARGETINRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
