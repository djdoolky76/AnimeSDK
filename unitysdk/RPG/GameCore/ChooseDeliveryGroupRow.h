#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChooseDeliveryGroupRow; }

#define RPG_GAMECORE_CHOOSEDELIVERYGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B1EA0)
#define RPG_GAMECORE_CHOOSEDELIVERYGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5B1D60)

namespace RPG::GameCore
{
	class ChooseDeliveryGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardList; // 0x10
		::System::UInt32 GroupID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOOSEDELIVERYGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChooseDeliveryGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChooseDeliveryGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHOOSEDELIVERYGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
