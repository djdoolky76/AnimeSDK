#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierMoveStageNodeConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERMOVESTAGENODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E942AE0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMOVESTAGENODECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E942AF0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERMOVESTAGENODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E942AA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierMoveStageNodeConfig_TypeDefinitionIndex = 19671;

	class GridFightModifierMoveStageNodeConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMOVESTAGENODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierMoveStageNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierMoveStageNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMOVESTAGENODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierMoveStageNodeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierMoveStageNodeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERMOVESTAGENODECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
