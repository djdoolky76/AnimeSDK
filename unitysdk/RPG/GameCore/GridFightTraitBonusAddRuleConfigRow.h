#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusAddType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightTraitBonusAddRuleConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D746D20)
#define RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D746B90)

namespace RPG::GameCore
{
	class GridFightTraitBonusAddRuleConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::RPG::GameCore::GridFightTraitBonusAddType TraitBonusType; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightTraitBonusAddRuleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTTRAITBONUSADDRULECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
