#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerParamLineupAvatarCountConfig; }

#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF73390)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EF733A0)
#define RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EF73350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParamLineupAvatarCountConfig_TypeDefinitionIndex = 19901;

	class PlayerParamLineupAvatarCountConfig : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerParamLineupAvatarCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMLINEUPAVATARCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
