#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateBattleTarget; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CREATEBATTLETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E2C20)
#define RPG_GAMECORE_CREATEBATTLETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E2C30)
#define RPG_GAMECORE_CREATEBATTLETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E2BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateBattleTarget_TypeDefinitionIndex = 23182;

	class CreateBattleTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* BattleTargetID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateBattleTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateBattleTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEBATTLETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
