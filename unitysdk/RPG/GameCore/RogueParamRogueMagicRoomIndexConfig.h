#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueMagicRoomIndexConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2AF40)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2AF50)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2AF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicRoomIndexConfig_TypeDefinitionIndex = 19837;

	class RogueParamRogueMagicRoomIndexConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueMagicRoomIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICROOMINDEXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
