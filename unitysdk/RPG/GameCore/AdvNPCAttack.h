#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCAttack; }

#define RPG_GAMECORE_ADVNPCATTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5B3550)
#define RPG_GAMECORE_ADVNPCATTACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E5B3560)
#define RPG_GAMECORE_ADVNPCATTACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E5B3510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCAttack_TypeDefinitionIndex = 20317;

	class AdvNPCAttack : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single AttackCD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCATTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCATTACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCATTACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
