#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyDestroyWorld; }

#define RPG_GAMECORE_MONOPOLYDESTROYWORLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89D710)
#define RPG_GAMECORE_MONOPOLYDESTROYWORLD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D89D720)
#define RPG_GAMECORE_MONOPOLYDESTROYWORLD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D89D650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyDestroyWorld_TypeDefinitionIndex = 20934;

	class MonopolyDestroyWorld : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYDESTROYWORLD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyDestroyWorld* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyDestroyWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYDESTROYWORLD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyDestroyWorld* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyDestroyWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYDESTROYWORLD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
