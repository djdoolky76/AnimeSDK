#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCraftConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTCRAFTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D728F20)
#define RPG_GAMECORE_GRIDFIGHTCRAFTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D728D80)

namespace RPG::GameCore
{
	class GridFightCraftConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* CostEquipList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 CraftEquipID; // 0x1C
		::System::UInt32 CraftID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCRAFTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCraftConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCraftConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCRAFTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
