#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaStyleConfig; }

#define RPG_GAMECORE_ROGUEPERSONASTYLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2C350)
#define RPG_GAMECORE_ROGUEPERSONASTYLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2C310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoguePersonaStyleConfig_TypeDefinitionIndex = 18004;

	class RoguePersonaStyleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaStyleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaStyleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
