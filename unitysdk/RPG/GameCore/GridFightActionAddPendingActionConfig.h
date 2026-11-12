#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddPendingActionConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDPENDINGACTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92DC50)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDPENDINGACTIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E92DC60)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDPENDINGACTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E92DC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddPendingActionConfig_TypeDefinitionIndex = 19533;

	class GridFightActionAddPendingActionConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPENDINGACTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddPendingActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddPendingActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPENDINGACTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddPendingActionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddPendingActionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPENDINGACTIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
