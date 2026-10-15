#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitEquipRelationConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTTRAITEQUIPRELATIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D747920)
#define RPG_GAMECORE_GRIDFIGHTTRAITEQUIPRELATIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D747810)

namespace RPG::GameCore
{
	class GridFightTraitEquipRelationConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TraitEquipIDList; // 0x10
		::System::UInt32 EquipID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEQUIPRELATIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitEquipRelationConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitEquipRelationConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITEQUIPRELATIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
