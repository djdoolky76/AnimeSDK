#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DisableBattleTarget; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DISABLEBATTLETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E8F40)
#define RPG_GAMECORE_DISABLEBATTLETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E8F50)
#define RPG_GAMECORE_DISABLEBATTLETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E8F10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DisableBattleTarget_TypeDefinitionIndex = 23662;

	class DisableBattleTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleTargetID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEBATTLETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableBattleTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableBattleTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEBATTLETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableBattleTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableBattleTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLEBATTLETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
