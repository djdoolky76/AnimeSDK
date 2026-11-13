#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RechargeGiftConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_RECHARGEGIFTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F22E2E0)
#define RPG_GAMECORE_RECHARGEGIFTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F22DC10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeGiftConfigRow_TypeDefinitionIndex = 14778;

	class RechargeGiftConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* DiscountForFiat; // 0x10
		::Il2CppArray<::System::UInt32>* GiftIDList; // 0x18
		::System::Single Discount; // 0x20
		::System::UInt32 GiftType; // 0x24
		::System::Boolean IsRedDotHide; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RechargeGiftConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RechargeGiftConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEGIFTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
