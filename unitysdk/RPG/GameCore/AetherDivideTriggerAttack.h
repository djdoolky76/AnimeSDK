#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureTriggerAttack.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideTriggerAttack; }

#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A13C0)
#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A1420)
#define RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3AF430)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideTriggerAttack_TypeDefinitionIndex = 20208;

	class AetherDivideTriggerAttack : public ::RPG::GameCore::AdventureTriggerAttack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideTriggerAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideTriggerAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideTriggerAttack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideTriggerAttack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDETRIGGERATTACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
