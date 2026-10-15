#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseExpeditionBattleAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleTutorialTaskUnlockAction; }
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D663590)
#define RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D6635A0)
#define RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6634C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleTutorialTaskUnlockAction_TypeDefinitionIndex = 16226;

	class ExpeditionBattleTutorialTaskUnlockAction : public ::RPG::GameCore::BaseExpeditionBattleAction
	{
	public:
		::System::String* TutorialID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleTutorialTaskUnlockAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleTutorialTaskUnlockAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleTutorialTaskUnlockAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleTutorialTaskUnlockAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLETUTORIALTASKUNLOCKACTION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
