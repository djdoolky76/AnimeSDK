#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantRecipeUpRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTRECIPEUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D968410)
#define RPG_GAMECORE_RESTAURANTRECIPEUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D967D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RestaurantRecipeUpRow_TypeDefinitionIndex = 11334;

	class RestaurantRecipeUpRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* UpgradeMaterials; // 0x10
		::System::UInt32 RecipeID; // 0x18
		::System::UInt32 CookTime; // 0x1C
		::System::UInt32 MaxLevel; // 0x20
		::System::UInt32 Level; // 0x24
		::System::UInt32 Price; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantRecipeUpRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantRecipeUpRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
