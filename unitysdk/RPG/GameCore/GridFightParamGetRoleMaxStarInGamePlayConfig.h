#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetRoleMaxStarInGamePlayConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7388F0)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738900)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7388B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetRoleMaxStarInGamePlayConfig_TypeDefinitionIndex = 19549;

	class GridFightParamGetRoleMaxStarInGamePlayConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetRoleMaxStarInGamePlayConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETROLEMAXSTARINGAMEPLAYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
