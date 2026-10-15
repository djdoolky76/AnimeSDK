#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RedDotGraphConfig; }
namespace RPG::GameCore { class RedDotNodeConfig; }

#define RPG_GAMECORE_REDDOTGRAPHCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9479F0)
#define RPG_GAMECORE_REDDOTGRAPHCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D947930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RedDotGraphConfig_TypeDefinitionIndex = 17094;

	class RedDotGraphConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RedDotNodeConfig*>* Nodes; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTGRAPHCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RedDotGraphConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RedDotGraphConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REDDOTGRAPHCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
