#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleySpecialOrderRow; }
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYSPECIALORDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ECEE0)
#define RPG_GAMECORE_ALLEYSPECIALORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3EC470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleySpecialOrderRow_TypeDefinitionIndex = 12623;

	class AlleySpecialOrderRow : public ::System::Object
	{
	public:
		::System::String* SubTitleID; // 0x10
		::Il2CppArray<::System::UInt32>* OrderTipsTime; // 0x18
		::System::String* OrderTips; // 0x20
		::Il2CppArray<::RPG::GameCore::GoodsClass*>* SpecialOrderGoods; // 0x28
		::System::String* OrderPic; // 0x30
		::Il2CppArray<::System::UInt32>* SpecialOrderContent; // 0x38
		::System::UInt32 SpecialOrderReward; // 0x40
		::System::UInt32 SpecialOrderShip; // 0x44
		::System::UInt32 UnlockMission; // 0x48
		::System::UInt32 SpecialOrderShopID; // 0x4C
		::System::UInt32 SpecialOrderID; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleySpecialOrderRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleySpecialOrderRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSPECIALORDERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
