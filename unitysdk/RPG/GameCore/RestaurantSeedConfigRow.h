#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class MGBHGAFEMHM;
namespace RPG::GameCore { class RestaurantSeedConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESTAURANTSEEDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBDF1C0)
#define RPG_GAMECORE_RESTAURANTSEEDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBDEE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantSeedConfigRow_TypeDefinitionIndex = 11426;

	class RestaurantSeedConfigRow : public ::System::Object
	{
	public:
		::System::String* CropsModelPath; // 0x10
		::System::String* BigCropsModelPath; // 0x18
		::Il2CppArray<::MGBHGAFEMHM*>* SpecialProductList; // 0x20
		::System::UInt32 SortID; // 0x28
		::System::UInt32 SeedID; // 0x2C
		::System::UInt32 ProductID; // 0x30
		::System::UInt32 ProductCount; // 0x34
		::System::UInt32 Price; // 0x38
		::System::UInt32 GrowTime; // 0x3C
		::System::UInt32 ItemID; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSEEDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantSeedConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantSeedConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTSEEDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
