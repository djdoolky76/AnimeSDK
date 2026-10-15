#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChooseDeliveryRow; }

#define RPG_GAMECORE_CHOOSEDELIVERYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B2050)
#define RPG_GAMECORE_CHOOSEDELIVERYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5B1EB0)

namespace RPG::GameCore
{
	class ChooseDeliveryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardGroupList; // 0x10
		::System::UInt32 ActivityModuleID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 UnlockID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOOSEDELIVERYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChooseDeliveryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChooseDeliveryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOOSEDELIVERYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
