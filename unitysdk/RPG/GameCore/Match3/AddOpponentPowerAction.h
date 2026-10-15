#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/Match3ActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Match3 { class AddOpponentPowerAction; }

#define RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81C3D0)
#define RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D81C3E0)
#define RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81C380)

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int AddOpponentPowerAction_TypeDefinitionIndex = 24899;

	class AddOpponentPowerAction : public ::RPG::GameCore::Match3::Match3ActionBase
	{
	public:
		::System::Int32 Power; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::AddOpponentPowerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::AddOpponentPowerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Match3::AddOpponentPowerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Match3::AddOpponentPowerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MATCH3_ADDOPPONENTPOWERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
