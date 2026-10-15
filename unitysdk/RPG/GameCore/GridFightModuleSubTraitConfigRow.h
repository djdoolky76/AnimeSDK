#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModuleSubTraitConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTMODULESUBTRAITCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D736840)
#define RPG_GAMECORE_GRIDFIGHTMODULESUBTRAITCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7366D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModuleSubTraitConfigRow_TypeDefinitionIndex = 13485;

	class GridFightModuleSubTraitConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 TraitID; // 0x10
		::System::UInt32 ModuleID; // 0x14
		::System::UInt32 SubTraitID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULESUBTRAITCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModuleSubTraitConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModuleSubTraitConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODULESUBTRAITCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
