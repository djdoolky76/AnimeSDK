#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceWaitDragProp; }

#define RPG_GAMECORE_CAKERACEWAITDRAGPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D553CE0)
#define RPG_GAMECORE_CAKERACEWAITDRAGPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D553CF0)
#define RPG_GAMECORE_CAKERACEWAITDRAGPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D553CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceWaitDragProp_TypeDefinitionIndex = 24298;

	class CakeRaceWaitDragProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Int32 GridPosX; // 0x18
		::System::Int32 GridPosZ; // 0x1C
		::System::Single Radius; // 0x20
		::System::Int32 ItemID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceWaitDragProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceWaitDragProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceWaitDragProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceWaitDragProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEWAITDRAGPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
