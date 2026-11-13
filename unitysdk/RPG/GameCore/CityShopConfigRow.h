#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CityShopConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_CITYSHOPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4FD170)
#define RPG_GAMECORE_CITYSHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F4FC9B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CityShopConfigRow_TypeDefinitionIndex = 13128;

	class CityShopConfigRow : public ::System::Object
	{
	public:
		::System::String* WorldImgPath; // 0x10
		::System::UInt32 WorldID; // 0x18
		::System::UInt32 ItemID; // 0x1C
		::System::UInt32 HintOverNum; // 0x20
		::System::UInt32 RewardListGroupID; // 0x24
		::System::UInt32 ShopID; // 0x28
		::System::UInt32 MaxLevel; // 0x2C
		::RPG::Client::TextID Name; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CityShopConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CityShopConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CITYSHOPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
