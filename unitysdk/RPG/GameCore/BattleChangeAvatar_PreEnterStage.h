#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleChangeAvatar_PreEnterStage; }

#define RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D426100)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D426110)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D426040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleChangeAvatar_PreEnterStage_TypeDefinitionIndex = 22777;

	class BattleChangeAvatar_PreEnterStage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleChangeAvatar_PreEnterStage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_PREENTERSTAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
