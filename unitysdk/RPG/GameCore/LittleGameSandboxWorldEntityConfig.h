#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LittleGameSandboxWorldEntityConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXWORLDENTITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F268E40)
#define RPG_GAMECORE_LITTLEGAMESANDBOXWORLDENTITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F268A00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxWorldEntityConfig_TypeDefinitionIndex = 19101;

	class LittleGameSandboxWorldEntityConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean HideNpc; // 0x10
		::System::Boolean HideNpcMonster; // 0x11
		::System::Boolean HideNpcTriggerEffect; // 0x12
		::System::Boolean HideProp; // 0x13
		::System::Byte _padding0[0x4];
		::RPG::GameCore::HoyoTagContainer* ExcludedTags; // 0x18
		::System::Boolean UnloadHiddenArt; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXWORLDENTITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxWorldEntityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxWorldEntityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXWORLDENTITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
