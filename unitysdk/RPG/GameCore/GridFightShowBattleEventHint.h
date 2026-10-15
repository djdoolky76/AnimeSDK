#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightBattleEventHintType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class GridFightShowBattleEventHint; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D714330)
#define RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D714340)
#define RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D714300)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowBattleEventHint_TypeDefinitionIndex = 23232;

	class GridFightShowBattleEventHint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ActionDelayChangeValue; // 0x18
		::RPG::GameCore::GridFightBattleEventHintType HintType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowBattleEventHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowBattleEventHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowBattleEventHint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowBattleEventHint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWBATTLEEVENTHINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
