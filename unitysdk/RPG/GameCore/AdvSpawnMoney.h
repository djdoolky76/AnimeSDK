#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSpawnMoney; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVSPAWNMONEY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B28E0)
#define RPG_GAMECORE_ADVSPAWNMONEY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B29A0)
#define RPG_GAMECORE_ADVSPAWNMONEY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B2800)

namespace RPG::GameCore
{
	class AdvSpawnMoney : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* BatchID; // 0x20
		::RPG::GameCore::DynamicFloat* Interval; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPAWNMONEY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSpawnMoney* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSpawnMoney*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPAWNMONEY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSpawnMoney* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSpawnMoney*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSPAWNMONEY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
