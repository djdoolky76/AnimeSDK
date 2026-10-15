#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleChangeAvatar_End; }

#define RPG_GAMECORE_BATTLECHANGEAVATAR_END_CTOR_OFFSET UNITYSDK_OFFSET(0x1D425C50)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_END_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D425C60)
#define RPG_GAMECORE_BATTLECHANGEAVATAR_END_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D425B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleChangeAvatar_End_TypeDefinitionIndex = 22779;

	class BattleChangeAvatar_End : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_END_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleChangeAvatar_End* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleChangeAvatar_End*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_END_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleChangeAvatar_End* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleChangeAvatar_End*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECHANGEAVATAR_END_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
