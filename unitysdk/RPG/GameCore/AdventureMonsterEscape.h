#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureMonsterEscape; }

#define RPG_GAMECORE_ADVENTUREMONSTERESCAPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8FE260)
#define RPG_GAMECORE_ADVENTUREMONSTERESCAPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8FE270)
#define RPG_GAMECORE_ADVENTUREMONSTERESCAPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8FE230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureMonsterEscape_TypeDefinitionIndex = 20555;

	class AdventureMonsterEscape : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERESCAPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureMonsterEscape* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureMonsterEscape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERESCAPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureMonsterEscape* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureMonsterEscape*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREMONSTERESCAPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
