#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
#include "unitysdk/RPG/GameCore/FiveDimMiniGameCoinType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMiniGameCoinCollectedAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C7CD0)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C7CE0)
#define RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C7CA0)

namespace RPG::GameCore
{
	class FiveDimMiniGameCoinCollectedAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::RPG::GameCore::FiveDimMiniGameCoinType CoinType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* LevelVarName; // 0x18
		::System::Int16 Score; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMiniGameCoinCollectedAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMINIGAMECOINCOLLECTEDACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
