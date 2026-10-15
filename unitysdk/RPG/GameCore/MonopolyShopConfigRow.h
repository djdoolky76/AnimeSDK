#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyShopConfigRow; }

#define RPG_GAMECORE_MONOPOLYSHOPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AD710)
#define RPG_GAMECORE_MONOPOLYSHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8AD600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyShopConfigRow_TypeDefinitionIndex = 12047;

	class MonopolyShopConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* GoodsIDList; // 0x10
		::System::UInt32 ShopID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyShopConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyShopConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYSHOPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
