#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightDragOpParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDragOpgConsumableSelector; }

#define RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FDA60)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6FDA70)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6FDBB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDragOpgConsumableSelector_TypeDefinitionIndex = 19959;

	class GridFightDragOpgConsumableSelector : public ::RPG::GameCore::GridFightDragOpParamBase
	{
	public:
		::System::UInt32 ConsumableID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDragOpgConsumableSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDragOpgConsumableSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDragOpgConsumableSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDragOpgConsumableSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPGCONSUMABLESELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
