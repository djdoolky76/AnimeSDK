#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraAbilityProgressBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraBattleRunOut; }
namespace RPG::GameCore { class ChimeraBattleTargetEvaluator; }

#define RPG_GAMECORE_CHIMERABATTLERUNOUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D56A860)
#define RPG_GAMECORE_CHIMERABATTLERUNOUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D56A870)
#define RPG_GAMECORE_CHIMERABATTLERUNOUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56C040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraBattleRunOut_TypeDefinitionIndex = 15879;

	class ChimeraBattleRunOut : public ::RPG::GameCore::ChimeraAbilityProgressBase
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraBattleTargetEvaluator*>* Targets; // 0x18
		::System::Single TurnTime; // 0x20
		::System::Single RunTimeParam; // 0x24
		::System::Single TurnAngle; // 0x28
		::System::Single TurnRatio; // 0x2C
		::System::Single SpeedParam; // 0x30
		::System::Single Interval; // 0x34
		::System::Single FillPositionTime; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLERUNOUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleRunOut* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleRunOut*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLERUNOUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraBattleRunOut* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraBattleRunOut*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERABATTLERUNOUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
