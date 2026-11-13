#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EParkourEventEntityType.h"
#include "unitysdk/RPG/GameCore/EParkourEventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParkourTriggerEventRow; }

#define RPG_GAMECORE_PARKOURTRIGGEREVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F144D60)
#define RPG_GAMECORE_PARKOURTRIGGEREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F1449E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ParkourTriggerEventRow_TypeDefinitionIndex = 12167;

	class ParkourTriggerEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* LimitLevelID; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* Param; // 0x18
		::Il2CppArray<::System::UInt32>* DisplayContentIDList; // 0x20
		::System::UInt32 OriginID; // 0x28
		::RPG::GameCore::EParkourEventEntityType TargetType; // 0x2C
		::System::UInt32 EventID; // 0x30
		::System::UInt32 LimitRepeatTimeOverride; // 0x34
		::System::UInt32 TargetID; // 0x38
		::RPG::GameCore::EParkourEventEntityType OriginType; // 0x3C
		::RPG::GameCore::EParkourEventType TriggerEventType; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURTRIGGEREVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ParkourTriggerEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ParkourTriggerEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PARKOURTRIGGEREVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
