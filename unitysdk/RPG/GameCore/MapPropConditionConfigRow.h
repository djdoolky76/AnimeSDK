#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class MapPropConditionConfigRow; }

#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D82E850)
#define RPG_GAMECORE_MAPPROPCONDITIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D82E170)

namespace RPG::GameCore
{
	class MapPropConditionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnloadConditions; // 0x10
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* UnlockConditions; // 0x18
		::System::UInt32 MappingInfoID; // 0x20
		::System::UInt32 MiniMapIconID; // 0x24
		::System::UInt32 Priority; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::UInt32 ActivityModuleID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapPropConditionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapPropConditionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPPROPCONDITIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
