#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchReforgeGenBuffConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18E50)
#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchReforgeGenBuffConfig_TypeDefinitionIndex = 18020;

	class RogueWorkbenchReforgeGenBuffConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchReforgeGenBuffConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchReforgeGenBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
