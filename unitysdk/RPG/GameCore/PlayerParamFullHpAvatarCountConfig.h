#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerParamFullHpAvatarCountConfig; }

#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF732C0)
#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EF732D0)
#define RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EF73280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerParamFullHpAvatarCountConfig_TypeDefinitionIndex = 19900;

	class PlayerParamFullHpAvatarCountConfig : public ::RPG::GameCore::PlayerParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerParamFullHpAvatarCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERPARAMFULLHPAVATARCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
