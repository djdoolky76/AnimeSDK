#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPassengerConfigRow; }

#define RPG_GAMECORE_TRAINPASSENGERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC366D0)
#define RPG_GAMECORE_TRAINPASSENGERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC365C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPassengerConfigRow_TypeDefinitionIndex = 15362;

	class TrainPassengerConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BehaviorList; // 0x10
		::System::UInt32 PassengerID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPASSENGERCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPassengerConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPassengerConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPASSENGERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
