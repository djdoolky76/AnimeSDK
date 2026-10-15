#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleUIPanelType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ShowBattleUIInTimeline; }

#define RPG_GAMECORE_SHOWBATTLEUIINTIMELINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD8DB0)
#define RPG_GAMECORE_SHOWBATTLEUIINTIMELINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAD8DC0)
#define RPG_GAMECORE_SHOWBATTLEUIINTIMELINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAD8D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowBattleUIInTimeline_TypeDefinitionIndex = 22928;

	class ShowBattleUIInTimeline : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BattleUIPanelType>* PanelTypes; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUIINTIMELINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleUIInTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleUIInTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUIINTIMELINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowBattleUIInTimeline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowBattleUIInTimeline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWBATTLEUIINTIMELINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
