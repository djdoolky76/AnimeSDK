#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightDragOpParamBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightDragOpEquipSelector; }

#define RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6FD310)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6FD320)
#define RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6FD250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightDragOpEquipSelector_TypeDefinitionIndex = 19958;

	class GridFightDragOpEquipSelector : public ::RPG::GameCore::GridFightDragOpParamBase
	{
	public:
		::System::UInt32 EuqipID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDragOpEquipSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDragOpEquipSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightDragOpEquipSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightDragOpEquipSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTDRAGOPEQUIPSELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
