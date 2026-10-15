#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionBuyExpConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7343B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7343C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionBuyExpConfig_TypeDefinitionIndex = 19374;

	class GridFightModifierExecActionBuyExpConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionBuyExpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionBuyExpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionBuyExpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionBuyExpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONBUYEXPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
