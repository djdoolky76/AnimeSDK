#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyOrderRow; }
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYORDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E99D0)
#define RPG_GAMECORE_ALLEYORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3E9290)

namespace RPG::GameCore
{
	class AlleyOrderRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::GoodsClass*>* OrderContent; // 0x10
		::Il2CppArray<::System::UInt32>* OrderGoodList; // 0x18
		::Il2CppArray<::System::UInt32>* OrderTipsTime; // 0x20
		::System::String* OrderTips; // 0x28
		::System::UInt32 OrderID; // 0x30
		::System::UInt32 OrderProfit; // 0x34
		::System::UInt32 UnlockMission; // 0x38
		::System::UInt32 OrderShip; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyOrderRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYORDERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
