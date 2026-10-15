#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueOnMiracleEventConfig; }

#define RPG_GAMECORE_ROGUEONMIRACLEEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FCA30)
#define RPG_GAMECORE_ROGUEONMIRACLEEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FC9F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueOnMiracleEventConfig_TypeDefinitionIndex = 17684;

	class RogueOnMiracleEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEONMIRACLEEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueOnMiracleEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueOnMiracleEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEONMIRACLEEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
