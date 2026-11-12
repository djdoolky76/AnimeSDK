#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleySpecialOrderRow; }
namespace RPG::GameCore { class GoodsClass; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYSPECIALORDERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60D200)
#define RPG_GAMECORE_ALLEYSPECIALORDERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E60C790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleySpecialOrderRow_TypeDefinitionIndex = 12690;

	class AlleySpecialOrderRow : public ::System::Object
	{
	public:
		::System::String* SubTitleID; // 0x10
		::Il2CppArray<::RPG::GameCore::GoodsClass*>* SpecialOrderGoods; // 0x18
		::Il2CppArray<::System::UInt32>* OrderTipsTime; // 0x20
		::System::String* OrderPic; // 0x28
		::System::String* OrderTips; // 0x30
		::Il2CppArray<::System::UInt32>* SpecialOrderContent; // 0x38
		::System::UInt32 UnlockMission; // 0x40
		::System::UInt32 SpecialOrderReward; // 0x44
		::System::UInt32 SpecialOrderID; // 0x48
		::System::UInt32 SpecialOrderShopID; // 0x4C
		::System::UInt32 SpecialOrderShip; // 0x50
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
