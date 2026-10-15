#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModuleSwitchTraitConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTMODULESWITCHTRAITCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7369C0)
#define RPG_GAMECORE_GRIDFIGHTMODULESWITCHTRAITCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D736850)

namespace RPG::GameCore
{
	class GridFightModuleSwitchTraitConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 TraitID; // 0x10
		::System::UInt32 OverrideTraitID; // 0x14
		::System::UInt32 ModuleID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULESWITCHTRAITCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULESWITCHTRAITCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
