#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"

#define LHNBPHNHNBI_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x12B10)
#define LHNBPHNHNBI_GET_KIND_OFFSET UNITYSDK_OFFSET(0xE600)
#define LHNBPHNHNBI_SET_COUNT_OFFSET UNITYSDK_OFFSET(0x12B20)
#define LHNBPHNHNBI_SET_KIND_OFFSET UNITYSDK_OFFSET(0xAF40)

inline static constexpr unsigned int LHNBPHNHNBI_TypeDefinitionIndex = 77057;

	struct alignas(4) LHNBPHNHNBI
	{
		::RPG::GameCore::IngredientKind _Kind_k__BackingField; // 0x10
		::System::UInt32 _Count_k__BackingField; // 0x14
		::RPG::GameCore::IngredientKind get_Kind()
		{
			return ((::RPG::GameCore::IngredientKind(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNBPHNHNBI_GET_KIND_OFFSET))(this);
		}

		::System::Void set_Kind(::RPG::GameCore::IngredientKind a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IngredientKind))((::PBYTE)hIl2Cpp + LHNBPHNHNBI_SET_KIND_OFFSET))(this, a1);
		}

		::System::UInt32 get_Count()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHNBPHNHNBI_GET_COUNT_OFFSET))(this);
		}

		::System::Void set_Count(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHNBPHNHNBI_SET_COUNT_OFFSET))(this, a1);
		}

	};
