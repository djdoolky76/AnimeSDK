#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleAreaRow; }

#define RPG_GAMECORE_BATTLEAREAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D424C50)
#define RPG_GAMECORE_BATTLEAREAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D424900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleAreaRow_TypeDefinitionIndex = 12832;

	class BattleAreaRow : public ::System::Object
	{
	public:
		::System::UInt32 FloorID; // 0x10
		::System::UInt32 UnifiedConfigID; // 0x14
		::System::UInt32 BattleAreaGroupID; // 0x18
		::System::Boolean IsUseUnifiedConfig; // 0x1C
		::System::Boolean IsLegacy; // 0x1D
		::System::Byte _padding0[0x2];
		::System::UInt32 DimensionID; // 0x20
		::System::UInt32 BattleAreaID; // 0x24
		::System::UInt32 ID; // 0x28
		::System::UInt32 PlaneID; // 0x2C
		::System::UInt32 FloorBattleAreaID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleAreaRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleAreaRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEAREAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
