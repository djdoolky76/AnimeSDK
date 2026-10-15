#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRebateConfigRow; }

#define RPG_GAMECORE_ACTIVITYREBATECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D34EBE0)
#define RPG_GAMECORE_ACTIVITYREBATECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D34EA40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRebateConfigRow_TypeDefinitionIndex = 12329;

	class ActivityRebateConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TriggerIDList; // 0x10
		::System::UInt32 ActivityModuleID; // 0x18
		::System::UInt32 RewardID; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREBATECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRebateConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRebateConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREBATECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
