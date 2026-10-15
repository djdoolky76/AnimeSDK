#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterRoundBeginConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734230)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734240)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7341F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterRoundBeginConfig_TypeDefinitionIndex = 19345;

	class GridFightModifierExecActionAfterRoundBeginConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterRoundBeginConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERROUNDBEGINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
