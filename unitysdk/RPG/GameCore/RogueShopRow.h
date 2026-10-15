#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueShopType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueShopRow; }

#define RPG_GAMECORE_ROGUESHOPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2EAB0)
#define RPG_GAMECORE_ROGUESHOPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA2E940)

namespace RPG::GameCore
{
	class RogueShopRow : public ::System::Object
	{
	public:
		::System::UInt32 StageID; // 0x10
		::RPG::GameCore::RogueShopType ShopType; // 0x14
		::System::UInt32 RogueShopID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESHOPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueShopRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueShopRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUESHOPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
