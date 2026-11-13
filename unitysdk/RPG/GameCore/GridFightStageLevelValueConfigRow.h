#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightStageLevelValueConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSTAGELEVELVALUECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA645F0)
#define RPG_GAMECORE_GRIDFIGHTSTAGELEVELVALUECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA64480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightStageLevelValueConfigRow_TypeDefinitionIndex = 13743;

	class GridFightStageLevelValueConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 LevelBaseHP; // 0x10
		::System::UInt32 StageID; // 0x14
		::System::UInt32 LevelBaseAttack; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGELEVELVALUECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightStageLevelValueConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightStageLevelValueConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSTAGELEVELVALUECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
