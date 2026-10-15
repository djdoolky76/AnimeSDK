#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RestaurantRecipeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RESTAURANTRECIPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D994E30)
#define RPG_GAMECORE_RESTAURANTRECIPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D994650)

namespace RPG::GameCore
{
	class RestaurantRecipeRow : public ::System::Object
	{
	public:
		::System::String* Model; // 0x10
		::Il2CppArray<::System::UInt32>* TAGList; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x20
		::System::String* IMGPath; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Materials; // 0x30
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 RecipeID; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Detail; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RestaurantRecipeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RestaurantRecipeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESTAURANTRECIPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
