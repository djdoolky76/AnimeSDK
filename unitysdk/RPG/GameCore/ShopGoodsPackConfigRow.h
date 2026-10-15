#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShopGoodsPackConfigRow; }

#define RPG_GAMECORE_SHOPGOODSPACKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD4DB0)
#define RPG_GAMECORE_SHOPGOODSPACKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAD4C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGoodsPackConfigRow_TypeDefinitionIndex = 15104;

	class ShopGoodsPackConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ComboGoodsID2; // 0x10
		::System::UInt32 BundleGoodsID; // 0x14
		::System::UInt32 ComboGoodsID1; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSPACKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShopGoodsPackConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShopGoodsPackConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSPACKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
