#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ServantPreloadConfig; }

#define RPG_GAMECORE_SERVANTPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA91760)
#define RPG_GAMECORE_SERVANTPRELOADCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA91770)
#define RPG_GAMECORE_SERVANTPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA91730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ServantPreloadConfig_TypeDefinitionIndex = 16341;

	class ServantPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServantPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServantPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ServantPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ServantPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SERVANTPRELOADCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
