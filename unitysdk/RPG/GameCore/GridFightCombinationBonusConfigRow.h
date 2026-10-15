#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCombinationBonusConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTCOMBINATIONBONUSCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D727DC0)
#define RPG_GAMECORE_GRIDFIGHTCOMBINATIONBONUSCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D727C20)

namespace RPG::GameCore
{
	class GridFightCombinationBonusConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BonusNumberList; // 0x10
		::Il2CppArray<::System::UInt32>* CombinationBonusList; // 0x18
		::System::UInt32 BonusID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOMBINATIONBONUSCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCombinationBonusConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCombinationBonusConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCOMBINATIONBONUSCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
