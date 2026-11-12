#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyOrderRow; }
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYORDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E609DB0)
#define RPG_GAMECORE_ALLEYORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E609630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyOrderRow_TypeDefinitionIndex = 12688;

	class AlleyOrderRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::GoodsClass*>* OrderContent; // 0x10
		::Il2CppArray<::System::UInt32>* OrderTipsTime; // 0x18
		::System::String* OrderTips; // 0x20
		::Il2CppArray<::System::UInt32>* OrderGoodList; // 0x28
		::System::UInt32 OrderProfit; // 0x30
		::System::UInt32 OrderID; // 0x34
		::System::UInt32 OrderShip; // 0x38
		::System::UInt32 UnlockMission; // 0x3C
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
