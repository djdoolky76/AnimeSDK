#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D706B00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D706B10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D706AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig_TypeDefinitionIndex = 19364;

	class GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionRoundBeginAndLastRoundNoCostCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONROUNDBEGINANDLASTROUNDNOCOSTCOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
