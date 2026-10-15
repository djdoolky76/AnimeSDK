#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightLevelBaseValueConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTLEVELBASEVALUECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D731FB0)
#define RPG_GAMECORE_GRIDFIGHTLEVELBASEVALUECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D731E00)

namespace RPG::GameCore
{
	class GridFightLevelBaseValueConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 LevelBaseHP; // 0x10
		::System::UInt32 SectionID; // 0x14
		::System::UInt32 LevelBaseAttack; // 0x18
		::System::UInt32 ChapterID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTLEVELBASEVALUECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightLevelBaseValueConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightLevelBaseValueConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTLEVELBASEVALUECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
