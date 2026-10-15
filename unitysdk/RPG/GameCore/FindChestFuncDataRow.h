#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChestType.h"
#include "unitysdk/RPG/GameCore/FindChestTriggerType.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FindChestFuncDataRow; }

#define RPG_GAMECORE_FINDCHESTFUNCDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A8890)
#define RPG_GAMECORE_FINDCHESTFUNCDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6A8010)

namespace RPG::GameCore
{
	class FindChestFuncDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* WorldIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::ChestType>* ChestTypeList; // 0x18
		::Il2CppArray<::System::UInt32>* TriggerParamList; // 0x20
		::Il2CppArray<::RPG::GameCore::GameModeType>* GameModeList; // 0x28
		::System::UInt32 MapIconID; // 0x30
		::RPG::GameCore::FindChestTriggerType TriggerType; // 0x34
		::System::UInt32 SpecialMappinginfo; // 0x38
		::System::UInt32 FindRange; // 0x3C
		::System::UInt32 FindNum; // 0x40
		::System::UInt32 MappingInfoID; // 0x44
		::System::UInt32 FuncID; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FindChestFuncDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FindChestFuncDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FINDCHESTFUNCDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
