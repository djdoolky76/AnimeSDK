#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SyncBattleEventPropertyValues; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB22780)
#define RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB22790)
#define RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB22750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncBattleEventPropertyValues_TypeDefinitionIndex = 22508;

	class SyncBattleEventPropertyValues : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* PropertyFromTarget; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncBattleEventPropertyValues* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncBattleEventPropertyValues*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncBattleEventPropertyValues* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncBattleEventPropertyValues*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCBATTLEEVENTPROPERTYVALUES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
