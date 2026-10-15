#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleByImmuneAttackBack; }

#define RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D83A430)
#define RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D83A440)
#define RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D83A3E0)

namespace RPG::GameCore
{
	class MarbleByImmuneAttackBack : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByImmuneAttackBack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByImmuneAttackBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleByImmuneAttackBack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleByImmuneAttackBack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYIMMUNEATTACKBACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
