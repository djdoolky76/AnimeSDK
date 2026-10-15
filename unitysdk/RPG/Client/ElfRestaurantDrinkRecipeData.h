#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ElfRestaurantDrinkRecipeData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xCDAA430)
#define RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCDAA880)
#define RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA_ISCOOKITEMENOUGH_OFFSET UNITYSDK_OFFSET(0xCDAA890)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantDrinkRecipeData_TypeDefinitionIndex = 63738;

	class ElfRestaurantDrinkRecipeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Materials; // 0x10
		::System::Int32 Price; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantDrinkRecipeData* Create(::System::Int32 a1)
		{
			return ((::RPG::Client::ElfRestaurantDrinkRecipeData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA_CREATE_OFFSET))(a1);
		}

		::System::Boolean IsCookItemEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTDRINKRECIPEDATA_ISCOOKITEMENOUGH_OFFSET))(this);
		}

	};
}
