#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueWorkbenchReforgeGenBuffListConfig; }

#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFLISTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA18EA0)
#define RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFLISTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA18E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueWorkbenchReforgeGenBuffListConfig_TypeDefinitionIndex = 18019;

	class RogueWorkbenchReforgeGenBuffListConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFLISTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueWorkbenchReforgeGenBuffListConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueWorkbenchReforgeGenBuffListConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEWORKBENCHREFORGEGENBUFFLISTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
