#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChenLingBattlePredicate.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingBattlePredicate_InStage; }

#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D586CA0)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D586CB0)
#define RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D586BE0)

namespace RPG::GameCore
{
	class ChenLingBattlePredicate_InStage : public ::RPG::GameCore::BaseChenLingBattlePredicate
	{
	public:
		::System::UInt32 StageID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePredicate_InStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePredicate_InStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattlePredicate_InStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattlePredicate_InStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEPREDICATE_INSTAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
