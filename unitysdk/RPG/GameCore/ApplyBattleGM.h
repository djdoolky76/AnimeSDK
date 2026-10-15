#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ApplyBattleGM; }

#define RPG_GAMECORE_APPLYBATTLEGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3F6060)
#define RPG_GAMECORE_APPLYBATTLEGM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3F6070)
#define RPG_GAMECORE_APPLYBATTLEGM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3F5FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ApplyBattleGM_TypeDefinitionIndex = 23423;

	class ApplyBattleGM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYBATTLEGM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ApplyBattleGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ApplyBattleGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYBATTLEGM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ApplyBattleGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ApplyBattleGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYBATTLEGM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
