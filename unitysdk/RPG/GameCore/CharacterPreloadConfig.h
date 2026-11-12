#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterPreloadConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterPreloadConfig; }

#define RPG_GAMECORE_CHARACTERPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E787D00)
#define RPG_GAMECORE_CHARACTERPRELOADCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E787D10)
#define RPG_GAMECORE_CHARACTERPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E787CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterPreloadConfig_TypeDefinitionIndex = 16503;

	class CharacterPreloadConfig : public ::RPG::GameCore::CharacterPreloadConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERPRELOADCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
