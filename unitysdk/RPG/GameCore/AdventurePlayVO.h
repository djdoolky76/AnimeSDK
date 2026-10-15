#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureCharacterVOType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventurePlayVO; }

#define RPG_GAMECORE_ADVENTUREPLAYVO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3CB290)
#define RPG_GAMECORE_ADVENTUREPLAYVO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3CB2A0)
#define RPG_GAMECORE_ADVENTUREPLAYVO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3CB260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventurePlayVO_TypeDefinitionIndex = 20749;

	class AdventurePlayVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureCharacterVOType VOType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYVO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventurePlayVO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventurePlayVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYVO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventurePlayVO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventurePlayVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREPLAYVO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
