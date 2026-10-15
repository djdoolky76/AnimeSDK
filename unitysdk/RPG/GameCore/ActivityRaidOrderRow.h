#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRaidOrderRow; }
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRAIDORDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37B360)
#define RPG_GAMECORE_ACTIVITYRAIDORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D37B0F0)

namespace RPG::GameCore
{
	class ActivityRaidOrderRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::GoodsClass*>* OrderContent; // 0x10
		::Il2CppArray<::System::UInt32>* OrderGoodList; // 0x18
		::Il2CppArray<::System::UInt32>* OrderTipsTime; // 0x20
		::System::String* OrderTips; // 0x28
		::System::UInt32 OrderID; // 0x30
		::System::UInt32 OrderShip; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDORDERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRaidOrderRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRaidOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDORDERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
