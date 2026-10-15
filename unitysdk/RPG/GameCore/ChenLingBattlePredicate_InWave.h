#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattlePredicate.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattlePredicate_InWave; }

#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D586E00)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D586E10)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D586D40)

namespace RPG::GameCore
{
	class ChenLingBattlePredicate_InWave : public ::RPG::GameCore::BaseChenLingBattlePredicate
	{
	public:
		::System::UInt32 Wave; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePredicate_InWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePredicate_InWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePredicate_InWave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePredicate_InWave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INWAVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
