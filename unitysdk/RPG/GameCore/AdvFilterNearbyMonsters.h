#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvFilterNearbyMonsters; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVFILTERNEARBYMONSTERS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D371300)
#define RPG_GAMECORE_ADVFILTERNEARBYMONSTERS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D371310)
#define RPG_GAMECORE_ADVFILTERNEARBYMONSTERS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3712D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFilterNearbyMonsters_TypeDefinitionIndex = 21749;

	class AdvFilterNearbyMonsters : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* TaskList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFILTERNEARBYMONSTERS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFilterNearbyMonsters* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFilterNearbyMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFILTERNEARBYMONSTERS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFilterNearbyMonsters* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFilterNearbyMonsters*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFILTERNEARBYMONSTERS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
