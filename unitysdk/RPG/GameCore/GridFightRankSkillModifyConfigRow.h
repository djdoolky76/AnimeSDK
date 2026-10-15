#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifyCalcOpType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRankSkillModifyConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTRANKSKILLMODIFYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73C020)
#define RPG_GAMECORE_GRIDFIGHTRANKSKILLMODIFYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D73BDF0)

namespace RPG::GameCore
{
	class GridFightRankSkillModifyConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ModifyCalcOpType>* ModifyOps; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ModifyValues; // 0x18
		::Il2CppArray<::System::UInt32>* ModifySkillIndexs; // 0x20
		::System::UInt32 RankID; // 0x28
		::System::UInt32 SkillID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRANKSKILLMODIFYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRankSkillModifyConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRankSkillModifyConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTRANKSKILLMODIFYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
