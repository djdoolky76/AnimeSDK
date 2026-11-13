#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class LECHNIOHAEF;
namespace RPG::GameCore { class ComicDessertDishRow; }
namespace System { class String; }

#define RPG_GAMECORE_COMICDESSERTDISHROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5148C0)
#define RPG_GAMECORE_COMICDESSERTDISHROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F5144D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertDishRow_TypeDefinitionIndex = 11225;

	class ComicDessertDishRow : public ::System::Object
	{
	public:
		::System::String* ModelPath; // 0x10
		::Il2CppArray<::LECHNIOHAEF*>* Fillings; // 0x18
		::System::String* IconPath; // 0x20
		::RPG::GameCore::IngredientKind Decoration; // 0x28
		::System::UInt32 Price; // 0x2C
		::System::UInt32 UnlockCycle; // 0x30
		::System::Boolean IsSingleShow; // 0x34
		::System::Boolean IsOrderedRecipe; // 0x35
		::System::Byte _padding0[0x2];
		::System::UInt32 ID; // 0x38
		::System::UInt32 GreedyOrderBubbleWidth; // 0x3C
		::RPG::GameCore::IngredientKind Base; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTDISHROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertDishRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertDishRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTDISHROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
