#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityRaidSpecialOrderRow; }
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYRAIDSPECIALORDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37B5E0)
#define RPG_GAMECORE_ACTIVITYRAIDSPECIALORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D37B370)

namespace RPG::GameCore
{
	class ActivityRaidSpecialOrderRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* OrderTipsTime; // 0x10
		::Il2CppArray<::System::UInt32>* SpecialOrderContent; // 0x18
		::System::String* OrderTips; // 0x20
		::Il2CppArray<::RPG::GameCore::GoodsClass*>* SpecialOrderGoods; // 0x28
		::System::UInt32 SpecialOrderShip; // 0x30
		::System::UInt32 SpecialOrderID; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDSPECIALORDERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityRaidSpecialOrderRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityRaidSpecialOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYRAIDSPECIALORDERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
