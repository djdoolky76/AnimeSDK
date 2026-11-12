#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class UseMainCharacterOnly; }

#define RPG_GAMECORE_USEMAINCHARACTERONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE8BB60)
#define RPG_GAMECORE_USEMAINCHARACTERONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE8BB70)
#define RPG_GAMECORE_USEMAINCHARACTERONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE8BAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UseMainCharacterOnly_TypeDefinitionIndex = 20789;

	class UseMainCharacterOnly : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEMAINCHARACTERONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::UseMainCharacterOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UseMainCharacterOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEMAINCHARACTERONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::UseMainCharacterOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::UseMainCharacterOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_USEMAINCHARACTERONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
