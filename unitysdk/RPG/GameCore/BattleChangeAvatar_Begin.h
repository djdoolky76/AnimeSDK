#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleChangeAvatar_Begin; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4259A0)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D425A10)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D425910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleChangeAvatar_Begin_TypeDefinitionIndex = 22775;

	class BattleChangeAvatar_Begin : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* LeaveStageTarget; // 0x18
		::RPG::GameCore::DynamicFloat* EnterStageIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleChangeAvatar_Begin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleChangeAvatar_Begin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleChangeAvatar_Begin* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleChangeAvatar_Begin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_BEGIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
