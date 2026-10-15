#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleChangeAvatar_EnterStage; }

#define RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D425DE0)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D425DF0)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D425D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleChangeAvatar_EnterStage_TypeDefinitionIndex = 22778;

	class BattleChangeAvatar_EnterStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleChangeAvatar_EnterStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleChangeAvatar_EnterStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleChangeAvatar_EnterStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleChangeAvatar_EnterStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_ENTERSTAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
