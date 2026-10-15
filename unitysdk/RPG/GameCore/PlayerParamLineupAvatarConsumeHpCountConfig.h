#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerParamLineupAvatarConsumeHpCountConfig; }

#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D936B30)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D936B40)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D936AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParamLineupAvatarConsumeHpCountConfig_TypeDefinitionIndex = 19568;

	class PlayerParamLineupAvatarConsumeHpCountConfig : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerParamLineupAvatarConsumeHpCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCONSUMEHPCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
