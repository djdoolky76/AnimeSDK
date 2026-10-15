#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightBonusRuleConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTBONUSRULECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7277C0)
#define RPG_GAMECORE_GRIDFIGHTBONUSRULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D727640)

namespace RPG::GameCore
{
	class GridFightBonusRuleConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ProgressBonusList; // 0x10
		::System::UInt32 ProgressRatio; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONUSRULECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightBonusRuleConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightBonusRuleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTBONUSRULECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
