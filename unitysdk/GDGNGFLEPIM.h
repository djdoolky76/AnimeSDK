#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"

#define GDGNGFLEPIM_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x12B10)
#define GDGNGFLEPIM_GET_KIND_OFFSET UNITYSDK_OFFSET(0xE600)
#define GDGNGFLEPIM_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x12B20)
#define GDGNGFLEPIM_SET_KIND_OFFSET UNITYSDK_OFFSET(0xAF40)

inline static constexpr unsigned int GDGNGFLEPIM_TypeDefinitionIndex = 79862;

	struct alignas(4) GDGNGFLEPIM
	{
		::RPG::GameCore::IngredientKind _Kind_k__BackingField; // 0x10
		::System::Int32 _Count_k__BackingField; // 0x14
		::RPG::GameCore::IngredientKind get_Kind()
		{
			return ((::RPG::GameCore::IngredientKind(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGNGFLEPIM_GET_KIND_OFFSET))(this);
		}

		::System::Void set_Kind(::RPG::GameCore::IngredientKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + GDGNGFLEPIM_SET_KIND_OFFSET))(this, a1);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDGNGFLEPIM_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GDGNGFLEPIM_SET_COUNT_OFFSET))(this, a1);
		}

	};
