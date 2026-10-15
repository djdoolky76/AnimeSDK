#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RemoveBattleEventData; }

#define RPG_GAMECORE_REMOVEBATTLEEVENTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D984060)
#define RPG_GAMECORE_REMOVEBATTLEEVENTDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D984070)
#define RPG_GAMECORE_REMOVEBATTLEEVENTDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D984020)

namespace RPG::GameCore
{
	class RemoveBattleEventData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBATTLEEVENTDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveBattleEventData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveBattleEventData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBATTLEEVENTDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RemoveBattleEventData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RemoveBattleEventData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVEBATTLEEVENTDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
