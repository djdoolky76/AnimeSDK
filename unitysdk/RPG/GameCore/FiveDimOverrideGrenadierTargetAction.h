#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimOverrideGrenadierTargetAction; }

#define RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CF7C0)
#define RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6CF7D0)
#define RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CF720)

namespace RPG::GameCore
{
	class FiveDimOverrideGrenadierTargetAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 OverrideTargetConfigID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimOverrideGrenadierTargetAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMOVERRIDEGRENADIERTARGETACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
