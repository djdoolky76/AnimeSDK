#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightEquipUpgradeConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D72DA40)
#define RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D72D4E0)

namespace RPG::GameCore
{
	class GridFightEquipUpgradeConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PreID; // 0x10
		::System::UInt32 UpgradeID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightEquipUpgradeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightEquipUpgradeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTEQUIPUPGRADECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
