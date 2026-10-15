#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShopGoodsMap; }

#define RPG_GAMECORE_SHOPGOODSMAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAD4C20)
#define RPG_GAMECORE_SHOPGOODSMAP_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAD4B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShopGoodsMap_TypeDefinitionIndex = 12596;

	class ShopGoodsMap : public ::System::Object
	{
	public:
		::System::UInt32 Num; // 0x10
		::System::UInt32 GoodsID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSMAP_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShopGoodsMap* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShopGoodsMap*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOPGOODSMAP_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
