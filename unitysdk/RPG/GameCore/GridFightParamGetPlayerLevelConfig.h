#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightParamGetPlayerLevelConfig; }

#define RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D738710)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D738720)
#define RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7386D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightParamGetPlayerLevelConfig_TypeDefinitionIndex = 19511;

	class GridFightParamGetPlayerLevelConfig : public ::RPG::GameCore::GridFightParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightParamGetPlayerLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPARAMGETPLAYERLEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
