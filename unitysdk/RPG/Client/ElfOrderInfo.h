#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_ELFORDERINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1AEA79D0)
#define RPG_CLIENT_ELFORDERINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AEA7990)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfOrderInfo_TypeDefinitionIndex = 65185;

	class ElfOrderInfo : public ::System::Object
	{
	public:
		::System::UInt32 RecipeID; // 0x10
		::System::Single CookTime; // 0x14
		::System::UInt32 RecipeLevel; // 0x18
		::System::Single CookedTime; // 0x1C
		::System::Int32 ChefRuntimeID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFORDERINFO_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFORDERINFO_DISPOSE_OFFSET))(this);
		}

	};
}
